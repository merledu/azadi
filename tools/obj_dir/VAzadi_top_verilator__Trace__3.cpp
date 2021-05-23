// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAzadi_top_verilator__Syms.h"


void VAzadi_top_verilator::traceChgSub3(void* userp, VerilatedVcd* tracep) {
    VAzadi_top_verilator__Syms* __restrict vlSymsp = static_cast<VAzadi_top_verilator__Syms*>(userp);
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 11030);
    if (false && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp7567[3];
    WData/*95:0*/ __Vtemp7571[3];
    WData/*95:0*/ __Vtemp7575[3];
    WData/*95:0*/ __Vtemp7590[3];
    WData/*95:0*/ __Vtemp7606[3];
    WData/*95:0*/ __Vtemp7622[3];
    WData/*95:0*/ __Vtemp7627[3];
    WData/*95:0*/ __Vtemp7689[3];
    WData/*95:0*/ __Vtemp7693[3];
    WData/*95:0*/ __Vtemp7697[3];
    WData/*95:0*/ __Vtemp7761[3];
    WData/*95:0*/ __Vtemp7765[3];
    WData/*95:0*/ __Vtemp7769[3];
    WData/*95:0*/ __Vtemp7773[3];
    WData/*95:0*/ __Vtemp7837[3];
    WData/*95:0*/ __Vtemp7841[3];
    WData/*95:0*/ __Vtemp7845[3];
    WData/*95:0*/ __Vtemp7849[3];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x94U])) {
            tracep->chgBit(oldp+0,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err));
            tracep->chgBit(oldp+1,(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                      >> 2U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+2,(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                      >> 4U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+3,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                     >> 4U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+4,(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                      >> 5U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+5,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                     >> 5U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+6,(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                      >> 6U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+7,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                     >> 6U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+8,(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                      >> 7U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+9,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                     >> 7U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+10,(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                       >> 8U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+11,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                      >> 8U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+12,(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                       >> 9U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                     & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+13,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                      >> 9U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_re))));
            tracep->chgSData(oldp+14,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit),15);
            tracep->chgBit(oldp+15,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
            tracep->chgBit(oldp+16,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
            tracep->chgBit(oldp+17,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
            tracep->chgBit(oldp+18,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
            tracep->chgBit(oldp+19,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+20,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+21,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
            tracep->chgBit(oldp+22,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])));
            tracep->chgBit(oldp+23,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 1U))));
            tracep->chgBit(oldp+24,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 2U))));
            tracep->chgBit(oldp+25,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 3U))));
            tracep->chgBit(oldp+26,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 4U))));
            tracep->chgBit(oldp+27,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 5U))));
            tracep->chgBit(oldp+28,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 6U))));
            tracep->chgBit(oldp+29,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 7U))));
            tracep->chgBit(oldp+30,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 8U))));
            tracep->chgBit(oldp+31,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 9U))));
            tracep->chgBit(oldp+32,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 0xaU))));
            tracep->chgBit(oldp+33,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 0xbU))));
            tracep->chgBit(oldp+34,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 0xcU))));
            tracep->chgBit(oldp+35,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 0xdU))));
            tracep->chgBit(oldp+36,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 0xeU))));
            tracep->chgBit(oldp+37,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 0xfU))));
            tracep->chgBit(oldp+38,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 0x10U))));
            tracep->chgBit(oldp+39,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 0x11U))));
            tracep->chgBit(oldp+40,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 0x12U))));
            tracep->chgBit(oldp+41,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 0x13U))));
            tracep->chgBit(oldp+42,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 0x14U))));
            tracep->chgBit(oldp+43,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 0x15U))));
            tracep->chgBit(oldp+44,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 0x16U))));
            tracep->chgBit(oldp+45,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 0x17U))));
            tracep->chgBit(oldp+46,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 0x18U))));
            tracep->chgBit(oldp+47,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 0x19U))));
            tracep->chgBit(oldp+48,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 0x1aU))));
            tracep->chgBit(oldp+49,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 0x1bU))));
            tracep->chgBit(oldp+50,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 0x1cU))));
            tracep->chgBit(oldp+51,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 0x1dU))));
            tracep->chgBit(oldp+52,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 0x1eU))));
            tracep->chgBit(oldp+53,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U] 
                                           >> 0x1fU))));
            tracep->chgBit(oldp+54,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x1cU))));
            tracep->chgBit(oldp+55,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x1bU))));
            tracep->chgBit(oldp+56,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x1aU))));
            tracep->chgBit(oldp+57,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x19U))));
            tracep->chgBit(oldp+58,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x18U))));
            tracep->chgBit(oldp+59,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x17U))));
            tracep->chgBit(oldp+60,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x16U))));
            tracep->chgBit(oldp+61,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x15U))));
            tracep->chgBit(oldp+62,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x14U))));
            tracep->chgBit(oldp+63,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x13U))));
            tracep->chgBit(oldp+64,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x12U))));
            tracep->chgBit(oldp+65,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x11U))));
            tracep->chgBit(oldp+66,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0x10U))));
            tracep->chgBit(oldp+67,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0xfU))));
            tracep->chgBit(oldp+68,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0xeU))));
            tracep->chgBit(oldp+69,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0xdU))));
            tracep->chgBit(oldp+70,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0xcU))));
            tracep->chgBit(oldp+71,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0xbU))));
            tracep->chgBit(oldp+72,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 0xaU))));
            tracep->chgBit(oldp+73,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 9U))));
            tracep->chgBit(oldp+74,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 8U))));
            tracep->chgBit(oldp+75,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 7U))));
            tracep->chgBit(oldp+76,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 6U))));
            tracep->chgBit(oldp+77,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 5U))));
            tracep->chgBit(oldp+78,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 4U))));
            tracep->chgBit(oldp+79,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 3U))));
            tracep->chgBit(oldp+80,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 2U))));
            tracep->chgBit(oldp+81,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                           >> 1U))));
            tracep->chgBit(oldp+82,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U])));
            tracep->chgBit(oldp+83,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                           >> 0x1fU))));
            tracep->chgBit(oldp+84,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                           >> 0x1eU))));
            tracep->chgBit(oldp+85,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                           >> 0x1dU))));
            tracep->chgBit(oldp+86,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                           >> 0x1cU))));
            tracep->chgBit(oldp+87,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                           >> 0x1bU))));
            tracep->chgBit(oldp+88,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                           >> 0x1aU))));
            tracep->chgBit(oldp+89,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                           >> 0x19U))));
            tracep->chgBit(oldp+90,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                           >> 0x18U))));
            tracep->chgBit(oldp+91,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                           >> 0x17U))));
            tracep->chgBit(oldp+92,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                           >> 0x16U))));
            tracep->chgCData(oldp+93,((3U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                              << 0xcU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                                >> 0x14U)))),2);
            tracep->chgSData(oldp+94,((0xffffU & ((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                                   << 0x1cU) 
                                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                                     >> 4U)))),16);
            tracep->chgBit(oldp+95,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                           >> 3U))));
            tracep->chgBit(oldp+96,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                           >> 2U))));
            tracep->chgBit(oldp+97,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+98,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U])));
            tracep->chgBit(oldp+99,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                                           >> 0x1fU))));
            tracep->chgBit(oldp+100,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+101,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+102,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+103,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+104,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+105,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+106,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+107,((0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgBit(oldp+108,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+109,((0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                                  << 0x19U) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                                                    >> 7U)))),8);
            tracep->chgBit(oldp+110,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                                            >> 6U))));
            tracep->chgBit(oldp+111,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                                            >> 5U))));
            tracep->chgBit(oldp+112,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                                            >> 4U))));
            tracep->chgBit(oldp+113,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                                            >> 3U))));
            tracep->chgBit(oldp+114,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                                            >> 2U))));
            tracep->chgCData(oldp+115,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                                               << 1U) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U] 
                                                 >> 0x1fU)))),3);
            tracep->chgBit(oldp+116,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+117,((3U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                                               << 4U) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U] 
                                                 >> 0x1cU)))),2);
            tracep->chgBit(oldp+118,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+119,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+120,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U] 
                                            >> 0x19U))));
            tracep->chgIData(oldp+121,((0xffffffU & 
                                        ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U] 
                                            >> 1U)))),24);
            tracep->chgBit(oldp+122,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U])));
            tracep->chgBit(oldp+123,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we));
            tracep->chgBit(oldp+124,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re));
            tracep->chgIData(oldp+125,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_rdata_next),32);
            tracep->chgBit(oldp+126,(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                        | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit))))) 
                                      | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err))));
            tracep->chgBit(oldp+127,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re) 
                                       | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit)))))));
            tracep->chgBit(oldp+128,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err));
            tracep->chgBit(oldp+129,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_watermark_we));
            tracep->chgBit(oldp+130,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_watermark_we));
            tracep->chgBit(oldp+131,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_empty_we));
            tracep->chgBit(oldp+132,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_overflow_we));
            tracep->chgBit(oldp+133,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_frame_err_we));
            tracep->chgBit(oldp+134,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_break_err_we));
            tracep->chgBit(oldp+135,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_timeout_we));
            tracep->chgBit(oldp+136,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_parity_err_we));
            tracep->chgBit(oldp+137,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_break_err_we));
            tracep->chgBit(oldp+138,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_timeout_we));
            tracep->chgBit(oldp+139,(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                        >> 2U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_we)) 
                                      & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+140,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_rx_we));
            tracep->chgBit(oldp+141,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_nf_we));
            tracep->chgBit(oldp+142,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_parity_en_we));
            tracep->chgBit(oldp+143,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_parity_odd_we));
            tracep->chgBit(oldp+144,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                       >> 4U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+145,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                       >> 5U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+146,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_txrst_we));
            tracep->chgBit(oldp+147,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_rxilvl_we));
            tracep->chgBit(oldp+148,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_txilvl_we));
            tracep->chgBit(oldp+149,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                       >> 8U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+150,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ovrd_txen_we));
            tracep->chgBit(oldp+151,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit) 
                                       >> 0xaU) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__reg_re))));
            tracep->chgSData(oldp+152,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__addr_hit),12);
            tracep->chgBit(oldp+153,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
            tracep->chgBit(oldp+154,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
            tracep->chgBit(oldp+155,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
            tracep->chgBit(oldp+156,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
            tracep->chgBit(oldp+157,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+158,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+159,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
            tracep->chgIData(oldp+160,((0xffffffU & 
                                        ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U] 
                                            >> 1U)))),24);
            tracep->chgBit(oldp+161,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U])));
            tracep->chgBit(oldp+162,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+163,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+164,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+165,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+166,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+167,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_fifo_rxrst));
            tracep->chgBit(oldp+168,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_fifo_txrst));
            tracep->chgBit(oldp+169,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+170,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+171,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle));
            tracep->chgCData(oldp+172,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_data),8);
            tracep->chgBit(oldp+173,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_wvalid));
            tracep->chgBit(oldp+174,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_in));
            tracep->chgBit(oldp+175,(((0U == (3U & 
                                              ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                                << 0xcU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                                  >> 0x14U))))
                                       ? (2U <= (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_d))
                                       : ((1U == (3U 
                                                  & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                                      << 0xcU) 
                                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                                        >> 0x14U))))
                                           ? (4U <= (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_d))
                                           : ((2U == 
                                               (3U 
                                                & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                                      >> 0x14U))))
                                               ? (8U 
                                                  <= (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_d))
                                               : (0x10U 
                                                  <= (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_d)))))));
            tracep->chgCData(oldp+176,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__allzero_cnt_d),5);
            tracep->chgBit(oldp+177,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_break_err));
            tracep->chgBit(oldp+178,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_timeout));
            tracep->chgBit(oldp+179,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_parity_err));
            tracep->chgBit(oldp+180,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_d));
            tracep->chgBit(oldp+181,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_d));
            tracep->chgBit(oldp+182,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+183,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+184,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+185,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+186,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+187,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+188,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event));
            tracep->chgBit(oldp+189,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                               >> 0x1cU)))));
            tracep->chgBit(oldp+190,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event));
            tracep->chgBit(oldp+191,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+192,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+193,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event));
            tracep->chgBit(oldp+194,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                               >> 0x1bU)))));
            tracep->chgBit(oldp+195,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event));
            tracep->chgBit(oldp+196,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+197,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+198,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event));
            tracep->chgBit(oldp+199,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                               >> 0x1aU)))));
            tracep->chgBit(oldp+200,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event));
            tracep->chgBit(oldp+201,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+202,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+203,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event));
            tracep->chgBit(oldp+204,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+205,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event));
            tracep->chgBit(oldp+206,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+207,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+208,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event));
            tracep->chgBit(oldp+209,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                               >> 0x18U)))));
            tracep->chgBit(oldp+210,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event));
            tracep->chgBit(oldp+211,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+212,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+213,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event));
            tracep->chgBit(oldp+214,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                               >> 0x17U)))));
            tracep->chgBit(oldp+215,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event));
            tracep->chgBit(oldp+216,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+217,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+218,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event));
            tracep->chgBit(oldp+219,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                               >> 0x16U)))));
            tracep->chgBit(oldp+220,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event));
            tracep->chgBit(oldp+221,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+222,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+223,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event));
            tracep->chgBit(oldp+224,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[3U] 
                                               >> 0x15U)))));
            tracep->chgBit(oldp+225,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x95U])) {
            tracep->chgBit(oldp+226,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ready_wb));
            tracep->chgBit(oldp+227,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_op_en));
            tracep->chgBit(oldp+228,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id));
            tracep->chgBit(oldp+229,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_req_done));
            tracep->chgBit(oldp+230,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_in_ready));
            tracep->chgBit(oldp+231,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done));
            tracep->chgBit(oldp+232,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done) 
                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ready_wb))));
            tracep->chgBit(oldp+233,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_jump));
            tracep->chgBit(oldp+234,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_tbranch));
            tracep->chgBit(oldp+235,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_mem));
            tracep->chgBit(oldp+236,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv));
            tracep->chgBit(oldp+237,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_branch));
            tracep->chgBit(oldp+238,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_jump));
            tracep->chgBit(oldp+239,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_id));
            tracep->chgBit(oldp+240,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done) 
                                      & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ready_wb)))));
            tracep->chgBit(oldp+241,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multicycle_done));
            tracep->chgBit(oldp+242,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__csr_pipe_flush));
            tracep->chgBit(oldp+243,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
            tracep->chgBit(oldp+244,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
            tracep->chgBit(oldp+245,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__stall));
            tracep->chgBit(oldp+246,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if));
            tracep->chgBit(oldp+247,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id));
            tracep->chgBit(oldp+248,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req_all));
            tracep->chgBit(oldp+249,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush));
            tracep->chgCData(oldp+250,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns),3);
            tracep->chgBit(oldp+251,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done));
            tracep->chgIData(oldp+252,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we),32);
            tracep->chgIData(oldp+253,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we),32);
            tracep->chgBit(oldp+254,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            >> 1U))));
            tracep->chgBit(oldp+255,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            >> 1U))));
            tracep->chgBit(oldp+256,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int));
            tracep->chgBit(oldp+257,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wreq));
            tracep->chgIData(oldp+258,((0x1fffffffU 
                                        & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                           >> 3U))),29);
            tracep->chgIData(oldp+259,((0x1fffffffU 
                                        & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                           >> 3U))),29);
            tracep->chgBit(oldp+260,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)));
            tracep->chgBit(oldp+261,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we)));
            tracep->chgBit(oldp+262,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            >> 2U))));
            tracep->chgBit(oldp+263,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            >> 2U))));
            tracep->chgCData(oldp+264,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_ready),4);
            tracep->chgBit(oldp+265,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_ready))));
            tracep->chgBit(oldp+266,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_ready) 
                                            >> 1U))));
            tracep->chgBit(oldp+267,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_ready) 
                                            >> 2U))));
            tracep->chgBit(oldp+268,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_ready) 
                                            >> 3U))));
            tracep->chgBit(oldp+269,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_d));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x96U])) {
            tracep->chgBit(oldp+270,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+271,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+272,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+273,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+274,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+275,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+276,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+277,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+278,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[0U])));
            tracep->chgBit(oldp+279,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+280,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+281,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+282,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+283,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+284,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+285,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+286,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+287,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[0U])));
            tracep->chgBit(oldp+288,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__instr_req));
            tracep->chgIData(oldp+289,((0xfffffffcU 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_addr)),32);
            tracep->chgBit(oldp+290,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set));
            tracep->chgBit(oldp+291,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set_spec));
            tracep->chgBit(oldp+292,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req));
            tracep->chgBit(oldp+293,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set_spec) 
                                      & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set)))));
            tracep->chgBit(oldp+294,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req));
            tracep->chgIData(oldp+295,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_addr),32);
            tracep->chgBit(oldp+296,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__req));
            tracep->chgBit(oldp+297,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__we));
            tracep->chgIData(oldp+298,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+299,((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                        << 2U)),32);
            tracep->chgIData(oldp+300,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w),30);
            tracep->chgBit(oldp+301,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int)));
            tracep->chgBit(oldp+302,((0x800U <= (0xffcU 
                                                 & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                    << 2U)))));
            tracep->chgQData(oldp+303,((QData)((IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w 
                                                        << 2U)))),64);
            tracep->chgIData(oldp+305,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wmask_int),32);
            tracep->chgBit(oldp+306,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack));
            tracep->chgCData(oldp+307,(((4U != (7U 
                                                & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                   >> 0x12U)))
                                         ? 0U : 1U)),2);
            tracep->chgBit(oldp+308,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__error_internal));
            tracep->chgCData(oldp+309,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+310,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgBit(oldp+311,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__req) 
                                      & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__we)))));
            tracep->chgCData(oldp+312,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgBit(oldp+313,((((0U == (7U & 
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
            tracep->chgBit(oldp+314,((1U & (~ ((((0U 
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
            tracep->chgIData(oldp+315,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wmask_int),32);
            tracep->chgIData(oldp+316,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+317,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__unnamedblk1__DOT__i),32);
            tracep->chgBit(oldp+318,((((0U == (7U & 
                                               (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                >> 0x12U))) 
                                       | (1U == (7U 
                                                 & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                    >> 0x12U)))) 
                                      | (4U == (7U 
                                                & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                   >> 0x12U))))));
            tracep->chgBit(oldp+319,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__addr_sz_chk) 
                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__mask_chk)) 
                                      & (((4U == (7U 
                                                  & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                     >> 0x12U))) 
                                          | (1U == 
                                             (7U & 
                                              (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                               >> 0x12U)))) 
                                         | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__fulldata_chk)))));
            tracep->chgBit(oldp+320,((0U == (7U & (
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                   >> 0x12U)))));
            tracep->chgBit(oldp+321,((1U == (7U & (
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                   >> 0x12U)))));
            tracep->chgBit(oldp+322,((4U == (7U & (
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                   >> 0x12U)))));
            tracep->chgBit(oldp+323,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+324,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+325,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__fulldata_chk));
            tracep->chgCData(oldp+326,((0xfU & ((IData)(1U) 
                                                << 
                                                (3U 
                                                 & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                     << 0x1bU) 
                                                    | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U] 
                                                       >> 5U)))))),4);
            tracep->chgSData(oldp+327,(((((4U != (7U 
                                                  & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                     >> 0x12U)))
                                           ? 0U : 1U) 
                                         << 0xbU) | 
                                        (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__error_internal) 
                                          << 0xaU) 
                                         | (0x3ffU 
                                            & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                               >> 5U))))),13);
            tracep->chgBit(oldp+328,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgCData(oldp+329,((0x1eU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[1U])),5);
            tracep->chgCData(oldp+330,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__device_sel_1),3);
            tracep->chgBit(oldp+331,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+332,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+333,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+334,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+335,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+336,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                         [0U][2U] << 0x1bU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+337,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+338,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                         [0U][1U] << 0x1fU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+339,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                      [0U][0U])));
            tracep->chgBit(oldp+340,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+341,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+342,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+343,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+344,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+345,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                         [1U][2U] << 0x1bU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+346,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+347,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                         [1U][1U] << 0x1fU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+348,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                      [1U][0U])));
            tracep->chgBit(oldp+349,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                            [2U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+350,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                              [2U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+351,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                              [2U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+352,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                              [2U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+353,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                                 [2U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+354,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                         [2U][2U] << 0x1bU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                           [2U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+355,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                                 [2U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                                   [2U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+356,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                         [2U][1U] << 0x1fU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                           [2U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+357,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i
                                      [2U][0U])));
            tracep->chgBit(oldp+358,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+359,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+360,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+361,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+362,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+363,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                         [0U][2U] << 0x1bU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+364,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+365,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                         [0U][1U] << 0x1fU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+366,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                      [0U][0U])));
            tracep->chgBit(oldp+367,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+368,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+369,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+370,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+371,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+372,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                         [1U][2U] << 0x1bU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+373,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+374,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                         [1U][1U] << 0x1fU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+375,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                      [1U][0U])));
            tracep->chgBit(oldp+376,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                            [2U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+377,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                              [2U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+378,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                              [2U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+379,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                              [2U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+380,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                                 [2U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+381,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                         [2U][2U] << 0x1bU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                           [2U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+382,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                                 [2U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                                   [2U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+383,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                         [2U][1U] << 0x1fU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                           [2U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+384,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                                      [2U][0U])));
            tracep->chgCData(oldp+385,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__device_sel_1))),2);
            tracep->chgCData(oldp+386,((3U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])),2);
            tracep->chgBit(oldp+387,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+388,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+389,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+390,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+391,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+392,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+393,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+394,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+395,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[0U])));
            tracep->chgBit(oldp+396,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__hold_all_requests));
            tracep->chgBit(oldp+397,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+398,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+399,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+400,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+401,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+402,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [0U][2U] << 0x1bU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+403,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+404,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [0U][1U] << 0x1fU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+405,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                      [0U][0U])));
            tracep->chgBit(oldp+406,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+407,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+408,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+409,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+410,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+411,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [1U][2U] << 0x1bU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+412,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+413,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [1U][1U] << 0x1fU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+414,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                      [1U][0U])));
            tracep->chgBit(oldp+415,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+416,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                              [2U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+417,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                              [2U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+418,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                              [2U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+419,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                 [2U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+420,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [2U][2U] << 0x1bU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [2U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+421,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                 [2U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                   [2U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+422,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [2U][1U] << 0x1fU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [2U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+423,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                      [2U][0U])));
            tracep->chgBit(oldp+424,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+425,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                              [3U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+426,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                              [3U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+427,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                              [3U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+428,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                 [3U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+429,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [3U][2U] << 0x1bU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [3U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+430,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                 [3U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                   [3U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+431,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [3U][1U] << 0x1fU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [3U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+432,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                      [3U][0U])));
            tracep->chgBit(oldp+433,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[2U] 
                                            >> 0x15U))));
            tracep->chgWData(oldp+434,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i),86);
            tracep->chgBit(oldp+437,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[0U])));
            tracep->chgBit(oldp+438,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+439,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                              [3U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+440,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                              [3U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+441,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                              [3U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+442,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                 [3U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+443,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [3U][2U] << 0x1bU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [3U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+444,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                 [3U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                   [3U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+445,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [3U][1U] << 0x1fU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [3U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+446,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                      [3U][0U])));
            tracep->chgBit(oldp+447,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+448,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+449,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+450,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+451,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+452,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                         [0U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+453,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+454,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                         [0U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+455,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                      [0U][0U])));
            tracep->chgBit(oldp+456,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+457,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+458,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+459,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+460,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+461,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                         [1U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+462,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+463,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                         [1U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+464,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                      [1U][0U])));
            tracep->chgBit(oldp+465,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+466,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+467,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+468,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+469,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+470,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                         [0U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+471,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+472,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                         [0U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+473,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                      [0U][0U])));
            tracep->chgBit(oldp+474,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+475,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+476,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+477,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+478,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+479,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                         [1U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+480,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+481,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                         [1U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+482,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                      [1U][0U])));
            tracep->chgCData(oldp+483,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrequest),2);
            tracep->chgBit(oldp+484,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+485,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+486,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+487,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+488,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+489,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+490,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+491,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+492,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+493,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrequest))));
            tracep->chgBit(oldp+494,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+495,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+496,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+497,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+498,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+499,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+500,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+501,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+502,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
            tracep->chgCData(oldp+503,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+504,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dfifo_rspready))));
            tracep->chgBit(oldp+505,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+506,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+507,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+508,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+509,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+510,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+511,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+512,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+513,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+514,((0xfeU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                                 [0U][2U] 
                                                 >> 4U))),8);
            tracep->chgBit(oldp+515,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                            [0U][2U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+516,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+517,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+518,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+519,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+520,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+521,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+522,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+523,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+524,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+525,((1U | (0xfeU 
                                              & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                                 [1U][2U] 
                                                 >> 4U)))),8);
            tracep->chgBit(oldp+526,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_i
                                            [1U][2U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+527,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                            >> 0x15U))));
            __Vtemp7567[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[0U]);
            __Vtemp7567[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U]));
            __Vtemp7567[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+528,(__Vtemp7567),85);
            tracep->chgBit(oldp+531,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+532,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+535,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgWData(oldp+538,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgBit(oldp+541,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+542,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+543,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+544,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+545,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+546,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+547,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+548,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+549,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U])));
            tracep->chgBit(oldp+550,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x15U))));
            __Vtemp7571[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp7571[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp7571[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+551,(__Vtemp7571),85);
            tracep->chgBit(oldp+554,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgBit(oldp+555,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+556,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+557,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+558,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+559,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+560,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+561,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+562,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+563,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U])));
            tracep->chgBit(oldp+564,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x15U))));
            __Vtemp7575[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp7575[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp7575[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+565,(__Vtemp7575),85);
            tracep->chgBit(oldp+568,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgBit(oldp+569,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+570,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+571,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+572,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+573,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+574,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [0U][2U] << 0x1bU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+575,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+576,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [0U][1U] << 0x1fU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+577,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                      [0U][0U])));
            tracep->chgBit(oldp+578,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+579,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+580,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+581,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+582,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+583,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+584,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+585,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+586,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[0U])));
            tracep->chgBit(oldp+587,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0x15U))));
            __Vtemp7590[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                               [0U][0U]);
            __Vtemp7590[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                [0U][1U]) | (0xfffffffeU 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [0U][1U]));
            __Vtemp7590[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                [0U][2U]) | (0x1ffffeU 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [0U][2U]));
            tracep->chgWData(oldp+588,(__Vtemp7590),85);
            tracep->chgBit(oldp+591,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                      [0U][0U])));
            tracep->chgBit(oldp+592,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+593,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+594,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+595,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+596,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+597,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [1U][2U] << 0x1bU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+598,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+599,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [1U][1U] << 0x1fU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+600,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                      [1U][0U])));
            tracep->chgBit(oldp+601,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+602,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+603,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+604,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+605,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+606,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+607,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+608,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+609,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[0U])));
            tracep->chgBit(oldp+610,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0x15U))));
            __Vtemp7606[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                               [1U][0U]);
            __Vtemp7606[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                [1U][1U]) | (0xfffffffeU 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [1U][1U]));
            __Vtemp7606[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                [1U][2U]) | (0x1ffffeU 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [1U][2U]));
            tracep->chgWData(oldp+611,(__Vtemp7606),85);
            tracep->chgBit(oldp+614,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                      [1U][0U])));
            tracep->chgBit(oldp+615,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+616,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                              [2U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+617,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                              [2U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+618,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                              [2U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+619,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                 [2U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+620,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [2U][2U] << 0x1bU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [2U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+621,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                 [2U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                                   [2U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+622,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                         [2U][1U] << 0x1fU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                           [2U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+623,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                      [2U][0U])));
            tracep->chgBit(oldp+624,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+625,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+626,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+627,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+628,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+629,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+630,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+631,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+632,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[0U])));
            tracep->chgBit(oldp+633,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0x15U))));
            __Vtemp7622[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                               [2U][0U]);
            __Vtemp7622[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                [2U][1U]) | (0xfffffffeU 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [2U][1U]));
            __Vtemp7622[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                [2U][2U]) | (0x1ffffeU 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [2U][2U]));
            tracep->chgWData(oldp+634,(__Vtemp7622),85);
            tracep->chgBit(oldp+637,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                      [2U][0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x97U])) {
            tracep->chgCData(oldp+638,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+639,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+640,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+641,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+642,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+643,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+644,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+645,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+646,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+647,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+648,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+649,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+650,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+651,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+652,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+653,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+654,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+655,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+656,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+657,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+658,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+659,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+660,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+661,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+662,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+663,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+664,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+665,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+666,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+667,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+668,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+669,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__filter_q));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x98U])) {
            tracep->chgBit(oldp+670,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__clear_resumeack));
            tracep->chgBit(oldp+671,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                            >> 0x1fU))));
            tracep->chgBit(oldp+672,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+673,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+674,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+675,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+676,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                            >> 0x1aU))));
            tracep->chgSData(oldp+677,((0x3ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                                  >> 0x10U))),10);
            tracep->chgSData(oldp+678,((0x3ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                                  >> 6U))),10);
            tracep->chgCData(oldp+679,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                              >> 4U))),2);
            tracep->chgBit(oldp+680,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                            >> 3U))));
            tracep->chgBit(oldp+681,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                            >> 2U))));
            tracep->chgBit(oldp+682,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                            >> 1U))));
            tracep->chgBit(oldp+683,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d)));
            tracep->chgCData(oldp+684,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+685,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+686,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+687,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+688,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+689,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+690,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+691,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+692,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+693,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+694,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+695,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+696,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+697,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+698,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+699,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+700,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+701,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+702,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+703,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+704,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+705,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+706,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+707,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+708,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+709,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+710,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+711,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+712,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+713,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+714,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+715,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x99U])) {
            tracep->chgQData(oldp+716,((((QData)((IData)(
                                                         vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0U])))),64);
            tracep->chgQData(oldp+718,((((QData)((IData)(
                                                         vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[2U])))),64);
            tracep->chgQData(oldp+720,((((QData)((IData)(
                                                         vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[4U])))),64);
            tracep->chgQData(oldp+722,((((QData)((IData)(
                                                         vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[6U])))),64);
            tracep->chgQData(oldp+724,((((QData)((IData)(
                                                         vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[8U])))),64);
            tracep->chgQData(oldp+726,((((QData)((IData)(
                                                         vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xaU])))),64);
            tracep->chgQData(oldp+728,((((QData)((IData)(
                                                         vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xcU])))),64);
            tracep->chgQData(oldp+730,((((QData)((IData)(
                                                         vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xeU])))),64);
            tracep->chgBit(oldp+732,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resume));
            tracep->chgBit(oldp+733,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__go));
            tracep->chgBit(oldp+734,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__unsupported_command));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x9aU])) {
            tracep->chgSData(oldp+735,((0xffffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d 
                                                   >> 0x10U))),16);
            tracep->chgCData(oldp+736,((0xfU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d 
                                                >> 0xcU))),4);
            tracep->chgSData(oldp+737,((0xfffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d)),12);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x9bU])) {
            tracep->chgBit(oldp+738,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+739,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+740,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+741,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+742,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+743,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+744,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+745,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+746,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[0U])));
            tracep->chgBit(oldp+747,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_we_lsu));
            tracep->chgBit(oldp+748,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_wen));
            tracep->chgBit(oldp+749,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_d));
            tracep->chgBit(oldp+750,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_d));
            tracep->chgIData(oldp+751,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec),31);
            tracep->chgIData(oldp+752,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__we_a_dec),32);
            tracep->chgBit(oldp+753,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__req_i));
            tracep->chgSData(oldp+754,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__addr_i),12);
            tracep->chgIData(oldp+755,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+756,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wmask_int),32);
            tracep->chgBit(oldp+757,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__we_i));
            tracep->chgCData(oldp+758,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_we),4);
            tracep->chgCData(oldp+759,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT____Vcellinp__dccm__WE),4);
            tracep->chgBit(oldp+760,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_ack));
            tracep->chgCData(oldp+761,(((4U != (7U 
                                                & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                   >> 0x12U)))
                                         ? 0U : 1U)),2);
            tracep->chgBit(oldp+762,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__tlul_error));
            tracep->chgCData(oldp+763,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+764,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgBit(oldp+765,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__req_i) 
                                      & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__we_i)))));
            tracep->chgCData(oldp+766,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+767,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wmask_int),32);
            tracep->chgIData(oldp+768,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+769,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__unnamedblk1__DOT__i),32);
            tracep->chgBit(oldp+770,((((0U == (7U & 
                                               (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                >> 0x12U))) 
                                       | (1U == (7U 
                                                 & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                    >> 0x12U)))) 
                                      | (4U == (7U 
                                                & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                   >> 0x12U))))));
            tracep->chgBit(oldp+771,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk) 
                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk)) 
                                      & (((4U == (7U 
                                                  & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                     >> 0x12U))) 
                                          | (1U == 
                                             (7U & 
                                              (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                               >> 0x12U)))) 
                                         | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk)))));
            tracep->chgBit(oldp+772,((0U == (7U & (
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                   >> 0x12U)))));
            tracep->chgBit(oldp+773,((1U == (7U & (
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                   >> 0x12U)))));
            tracep->chgBit(oldp+774,((4U == (7U & (
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                   >> 0x12U)))));
            tracep->chgBit(oldp+775,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+776,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+777,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk));
            tracep->chgCData(oldp+778,((0xfU & ((IData)(1U) 
                                                << 
                                                (3U 
                                                 & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                     << 0x1bU) 
                                                    | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[1U] 
                                                       >> 5U)))))),4);
            tracep->chgSData(oldp+779,(((((4U != (7U 
                                                  & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                     >> 0x12U)))
                                           ? 0U : 1U) 
                                         << 0xbU) | 
                                        (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__tlul_error) 
                                          << 0xaU) 
                                         | (0x3ffU 
                                            & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                               >> 5U))))),13);
            tracep->chgBit(oldp+780,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgCData(oldp+781,((0x1eU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[1U])),5);
            tracep->chgBit(oldp+782,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgIData(oldp+783,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next),32);
            tracep->chgBit(oldp+784,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+785,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+786,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+787,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+788,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+789,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+790,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+791,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+792,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+793,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+794,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+795,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+796,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+797,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+798,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+799,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+800,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+801,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
            tracep->chgCData(oldp+802,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+803,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dfifo_rspready))));
            tracep->chgBit(oldp+804,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                            >> 0x15U))));
            __Vtemp7627[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[0U]);
            __Vtemp7627[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[1U]));
            __Vtemp7627[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+805,(__Vtemp7627),85);
            tracep->chgBit(oldp+808,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+809,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+812,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgWData(oldp+815,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgBit(oldp+818,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x9bU] | vlTOPp->__Vm_traceActivity
                         [0x9cU]))) {
            tracep->chgBit(oldp+819,((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__fp_rf_wdata_wb_mux_we))));
            tracep->chgBit(oldp+820,((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))));
            tracep->chgCData(oldp+821,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we),2);
            tracep->chgCData(oldp+822,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__fp_rf_wdata_wb_mux_we),2);
            tracep->chgBit(oldp+823,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__fp_rf_wdata_wb_mux_we))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x9dU])) {
            tracep->chgBit(oldp+824,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 1U))));
            tracep->chgBit(oldp+825,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q)));
            tracep->chgBit(oldp+826,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x1fU))));
            tracep->chgBit(oldp+827,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+828,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+829,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+830,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+831,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x1aU))));
            tracep->chgSData(oldp+832,((0x3ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                  >> 0x10U))),10);
            tracep->chgSData(oldp+833,((0x3ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                  >> 6U))),10);
            tracep->chgCData(oldp+834,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                              >> 4U))),2);
            tracep->chgBit(oldp+835,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 3U))));
            tracep->chgBit(oldp+836,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 2U))));
            tracep->chgBit(oldp+837,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 1U))));
            tracep->chgBit(oldp+838,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q)));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x9eU])) {
            tracep->chgBit(oldp+839,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__out_ready_fpu2c));
            tracep->chgIData(oldp+840,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                         << 0x1aU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 6U))),32);
            tracep->chgIData(oldp+841,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__data_wb),32);
            tracep->chgBit(oldp+842,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                            >> 5U))));
            tracep->chgBit(oldp+843,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                            >> 4U))));
            tracep->chgBit(oldp+844,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                            >> 3U))));
            tracep->chgBit(oldp+845,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+846,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                            >> 1U))));
            tracep->chgIData(oldp+847,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_id),32);
            tracep->chgBit(oldp+848,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_instr_ret_wb));
            tracep->chgBit(oldp+849,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_branch));
            tracep->chgBit(oldp+850,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_load));
            tracep->chgBit(oldp+851,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_store));
            tracep->chgBit(oldp+852,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_spec));
            tracep->chgBit(oldp+853,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_set_d));
            tracep->chgBit(oldp+854,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw));
            tracep->chgBit(oldp+855,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_d));
            tracep->chgBit(oldp+856,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
            tracep->chgIData(oldp+857,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr),32);
            tracep->chgBit(oldp+858,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                            >> 1U))));
            tracep->chgIData(oldp+859,((0x1fffffffU 
                                        & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                           >> 3U))),29);
            tracep->chgQData(oldp+860,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd),64);
            tracep->chgQData(oldp+862,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load),64);
            tracep->chgBit(oldp+864,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we));
            tracep->chgQData(oldp+865,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d),64);
            tracep->chgQData(oldp+867,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd),64);
            tracep->chgQData(oldp+869,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load),64);
            tracep->chgBit(oldp+871,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we));
            tracep->chgQData(oldp+872,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d),64);
            tracep->chgBit(oldp+874,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])));
            tracep->chgIData(oldp+875,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                         << 0x14U) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                           >> 0xcU))),32);
            tracep->chgBit(oldp+876,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+877,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+878,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                            >> 9U))));
            tracep->chgBit(oldp+879,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                            >> 8U))));
            tracep->chgBit(oldp+880,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                            >> 7U))));
            tracep->chgBit(oldp+881,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                            >> 6U))));
            tracep->chgIData(oldp+882,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                         << 0xeU) | 
                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                         >> 0x12U))),32);
            tracep->chgBit(oldp+883,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+884,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+885,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+886,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+887,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+888,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                            >> 0xcU))));
            tracep->chgIData(oldp+889,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                         << 0x19U) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 7U))),32);
            tracep->chgBit(oldp+890,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                            >> 6U))));
            tracep->chgBit(oldp+891,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                            >> 5U))));
            tracep->chgBit(oldp+892,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                            >> 4U))));
            tracep->chgBit(oldp+893,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                            >> 3U))));
            tracep->chgBit(oldp+894,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+895,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+896,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])));
            tracep->chgCData(oldp+897,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_in_ready),5);
            tracep->chgCData(oldp+898,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_ready),5);
            tracep->chgIData(oldp+899,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                         << 0x12U) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                           >> 0xeU))),32);
            tracep->chgBit(oldp+900,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+901,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+902,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+903,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+904,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                            >> 9U))));
            tracep->chgBit(oldp+905,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                            >> 8U))));
            tracep->chgBit(oldp+906,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                            >> 7U))));
            tracep->chgIData(oldp+907,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                         << 0xbU) | 
                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                         >> 0x15U))),32);
            tracep->chgBit(oldp+908,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+909,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+910,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+911,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+912,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+913,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+914,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                            >> 0xeU))));
            tracep->chgIData(oldp+915,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                         << 4U) | (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                                   >> 0x1cU))),32);
            tracep->chgBit(oldp+916,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+917,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+918,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+919,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+920,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+921,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+922,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                            >> 0x15U))));
            tracep->chgIData(oldp+923,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                         << 0x1dU) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                           >> 3U))),32);
            tracep->chgBit(oldp+924,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                            >> 2U))));
            tracep->chgBit(oldp+925,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                            >> 1U))));
            tracep->chgBit(oldp+926,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U])));
            tracep->chgBit(oldp+927,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                            >> 0x1fU))));
            tracep->chgBit(oldp+928,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+929,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+930,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                            >> 0x1cU))));
            tracep->chgIData(oldp+931,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                         << 0x16U) 
                                        | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                           >> 0xaU))),32);
            tracep->chgBit(oldp+932,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                            >> 9U))));
            tracep->chgBit(oldp+933,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                            >> 8U))));
            tracep->chgBit(oldp+934,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                            >> 7U))));
            tracep->chgBit(oldp+935,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                            >> 6U))));
            tracep->chgBit(oldp+936,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                            >> 5U))));
            tracep->chgBit(oldp+937,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                            >> 4U))));
            tracep->chgBit(oldp+938,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                            >> 3U))));
            tracep->chgIData(oldp+939,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                         << 0xfU) | 
                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                         >> 0x11U))),32);
            tracep->chgBit(oldp+940,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+941,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+942,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+943,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+944,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+945,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+946,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+947,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_in_ready))));
            tracep->chgIData(oldp+948,(((0x10U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux))
                                         ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result[
                                        (3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux))]
                                         : ((0x9fU 
                                             >= (0xe0U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux) 
                                                    << 5U)))
                                             ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result[
                                            (7U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux))]
                                             : 0U))),32);
            tracep->chgBit(oldp+949,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_out_ready))));
            tracep->chgCData(oldp+950,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_in_ready),2);
            tracep->chgIData(oldp+951,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result[0U]),32);
            tracep->chgIData(oldp+952,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result[1U]),32);
            tracep->chgIData(oldp+953,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result[2U]),32);
            tracep->chgIData(oldp+954,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result[3U]),32);
            tracep->chgIData(oldp+955,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__fmt_slice_result[4U]),32);
            tracep->chgSData(oldp+956,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__pre_round_abs),15);
            tracep->chgCData(oldp+957,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__round_sticky_bits),2);
            tracep->chgBit(oldp+958,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__of_after_round));
            tracep->chgBit(oldp+959,(((4U >= (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt)) 
                                      & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_uf_after_round) 
                                         >> (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt)))));
            tracep->chgSData(oldp+960,((0x7fffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_pre_round_abs[0U])),15);
            tracep->chgSData(oldp+961,((0x7fffU & (
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_pre_round_abs[1U] 
                                                    << 0x11U) 
                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_pre_round_abs[0U] 
                                                      >> 0xfU)))),15);
            tracep->chgSData(oldp+962,((0x7fffU & (
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_pre_round_abs[1U] 
                                                    << 2U) 
                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_pre_round_abs[0U] 
                                                      >> 0x1eU)))),15);
            tracep->chgSData(oldp+963,((0x7fffU & (
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_pre_round_abs[2U] 
                                                    << 0x13U) 
                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_pre_round_abs[1U] 
                                                      >> 0xdU)))),15);
            tracep->chgSData(oldp+964,((0x7fffU & (
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_pre_round_abs[2U] 
                                                    << 4U) 
                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_pre_round_abs[1U] 
                                                      >> 0x1cU)))),15);
            tracep->chgCData(oldp+965,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_round_sticky_bits))),2);
            tracep->chgCData(oldp+966,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_round_sticky_bits) 
                                              >> 2U))),2);
            tracep->chgCData(oldp+967,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_round_sticky_bits) 
                                              >> 4U))),2);
            tracep->chgCData(oldp+968,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_round_sticky_bits) 
                                              >> 6U))),2);
            tracep->chgCData(oldp+969,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_round_sticky_bits) 
                                              >> 8U))),2);
            tracep->chgCData(oldp+970,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_of_after_round),5);
            tracep->chgCData(oldp+971,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_uf_after_round),5);
            tracep->chgSData(oldp+972,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__rounded_abs),15);
            tracep->chgBit(oldp+973,(((0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__pre_round_abs)) 
                                      & (0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__round_sticky_bits)))));
            tracep->chgSData(oldp+974,((0xffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_result[0U])),16);
            tracep->chgSData(oldp+975,((0xffffU & (
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_result[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_result[0U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+976,((0xffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_result[1U])),16);
            tracep->chgSData(oldp+977,((0xffffU & (
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_result[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_result[1U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+978,((0xffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__fmt_result[2U])),16);
            tracep->chgSData(oldp+979,(((0x4fU >= (0x7fU 
                                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt) 
                                                      << 4U)))
                                         ? (0xffffU 
                                            & (((0U 
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
                                                      << 4U)))))
                                         : 0U)),16);
            tracep->chgBit(oldp+980,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__regular_status) 
                                            >> 4U))));
            tracep->chgBit(oldp+981,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__regular_status) 
                                            >> 3U))));
            tracep->chgBit(oldp+982,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__regular_status) 
                                            >> 2U))));
            tracep->chgBit(oldp+983,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__regular_status) 
                                            >> 1U))));
            tracep->chgBit(oldp+984,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__regular_status))));
            tracep->chgCData(oldp+985,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_out_ready),5);
            tracep->chgBit(oldp+986,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_out_ready))));
            tracep->chgCData(oldp+987,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_ready),5);
            tracep->chgBit(oldp+988,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__fmt_out_ready))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x9fU])) {
            tracep->chgBit(oldp+989,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_state_we));
            tracep->chgBit(oldp+990,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_enable_we));
            tracep->chgBit(oldp+991,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_rising_we));
            tracep->chgBit(oldp+992,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_falling_we));
            tracep->chgBit(oldp+993,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we));
            tracep->chgBit(oldp+994,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we));
            tracep->chgBit(oldp+995,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__ctrl_en_input_filter_we));
            tracep->chgBit(oldp+996,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_tx_watermark_we));
            tracep->chgBit(oldp+997,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_watermark_we));
            tracep->chgBit(oldp+998,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_tx_empty_we));
            tracep->chgBit(oldp+999,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_overflow_we));
            tracep->chgBit(oldp+1000,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_frame_err_we));
            tracep->chgBit(oldp+1001,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_enable_rx_parity_err_we));
            tracep->chgBit(oldp+1002,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_tx_we));
            tracep->chgBit(oldp+1003,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_slpbk_we));
            tracep->chgBit(oldp+1004,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_llpbk_we));
            tracep->chgBit(oldp+1005,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_rxblvl_we));
            tracep->chgBit(oldp+1006,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ctrl_nco_we));
            tracep->chgBit(oldp+1007,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__wdata_we));
            tracep->chgBit(oldp+1008,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_rxrst_we));
            tracep->chgBit(oldp+1009,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__ovrd_txval_we));
            tracep->chgBit(oldp+1010,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__timeout_ctrl_val_we));
            tracep->chgBit(oldp+1011,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__timeout_ctrl_en_we));
            tracep->chgBit(oldp+1012,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_rready));
            tracep->chgCData(oldp+1013,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d),4);
            tracep->chgSData(oldp+1014,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__sreg_d),11);
            tracep->chgBit(oldp+1015,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_tx__DOT__tx_d));
            tracep->chgSData(oldp+1016,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__sreg_d),11);
            tracep->chgCData(oldp+1017,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d),4);
            tracep->chgCData(oldp+1018,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d),4);
            tracep->chgBit(oldp+1019,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d));
            tracep->chgBit(oldp+1020,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__idle_d));
            tracep->chgIData(oldp+1021,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__reg_rdata_next),32);
            tracep->chgBit(oldp+1022,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_temp));
            tracep->chgBit(oldp+1023,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__byte_clr));
            tracep->chgCData(oldp+1024,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__state_d),6);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0xa0U] | vlTOPp->__Vm_traceActivity
                         [0xa1U]))) {
            tracep->chgBit(oldp+1025,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1026,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1027,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1028,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1029,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1030,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1031,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1032,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1033,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xa1U])) {
            tracep->chgBit(oldp+1034,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1035,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1036,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1037,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1038,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1039,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1040,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1041,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1042,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg))));
            tracep->chgIData(oldp+1043,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbaddress_sba_csrs),32);
            tracep->chgIData(oldp+1044,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1045,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1046,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg))));
            tracep->chgBit(oldp+1047,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg 
                                                     >> 1U)))));
            tracep->chgQData(oldp+1048,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_d),64);
            tracep->chgQData(oldp+1050,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_d),64);
            tracep->chgCData(oldp+1052,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_d),3);
            tracep->chgBit(oldp+1053,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1054,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1055,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1056,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1057,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1058,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1059,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1060,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1061,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_d_o[0U])));
            tracep->chgBit(oldp+1062,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1063,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1064,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1065,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1066,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1067,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1068,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1069,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1070,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                       [0U][0U])));
            tracep->chgBit(oldp+1071,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1072,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1073,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1074,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1075,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1076,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1077,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1078,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1079,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8
                                       [1U][0U])));
            tracep->chgBit(oldp+1080,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__accept_t_req));
            tracep->chgBit(oldp+1081,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__accept_t_rsp));
            tracep->chgBit(oldp+1082,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1083,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1084,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1085,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1086,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1087,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1088,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1089,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1090,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [0U]))));
            tracep->chgBit(oldp+1091,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1092,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1093,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1094,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1095,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1096,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1097,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1098,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1099,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [1U]))));
            tracep->chgBit(oldp+1100,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1101,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [2U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1102,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [2U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1103,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [2U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1104,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                          [2U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1105,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [2U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1106,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                 [2U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1107,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [2U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1108,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [2U]))));
            tracep->chgBit(oldp+1109,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1110,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [3U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1111,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [3U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1112,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [3U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1113,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                          [3U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1114,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [3U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1115,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                 [3U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1116,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1117,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [3U]))));
            tracep->chgBit(oldp+1118,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1119,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [4U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1120,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [4U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1121,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [4U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1122,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                          [4U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1123,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [4U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1124,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                 [4U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1125,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [4U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1126,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [4U]))));
            tracep->chgBit(oldp+1127,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1128,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [5U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1129,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [5U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1130,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [5U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1131,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                          [5U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1132,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [5U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1133,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                 [5U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1134,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [5U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1135,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [5U]))));
            tracep->chgBit(oldp+1136,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1137,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [6U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1138,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [6U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1139,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [6U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1140,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                          [6U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1141,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [6U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1142,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                 [6U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1143,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [6U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1144,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [6U]))));
            tracep->chgBit(oldp+1145,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1146,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [7U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1147,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [7U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1148,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [7U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1149,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                          [7U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1150,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [7U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1151,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                 [7U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1152,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [7U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1153,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [7U]))));
            tracep->chgBit(oldp+1154,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1155,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [8U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1156,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [8U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1157,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [8U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1158,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                          [8U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1159,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [8U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1160,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                 [8U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1161,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [8U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1162,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [8U]))));
            tracep->chgBit(oldp+1163,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1164,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [9U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1165,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [9U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1166,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [9U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1167,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                          [9U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1168,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [9U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1169,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                 [9U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1170,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [9U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1171,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [9U]))));
            tracep->chgBit(oldp+1172,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1173,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1174,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1175,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1176,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1177,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1178,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1179,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1180,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i))));
            tracep->chgBit(oldp+1181,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__accept_t_req));
            tracep->chgBit(oldp+1182,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__accept_t_rsp));
            tracep->chgBit(oldp+1183,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1184,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1185,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1186,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1187,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1188,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1189,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1190,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1191,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                    [0U]))));
            tracep->chgBit(oldp+1192,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1193,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1194,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1195,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1196,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1197,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1198,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1199,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1200,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                    [1U]))));
            tracep->chgBit(oldp+1201,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1202,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [2U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1203,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [2U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1204,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [2U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1205,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                          [2U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1206,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [2U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1207,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                 [2U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1208,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [2U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1209,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                    [2U]))));
            tracep->chgBit(oldp+1210,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1211,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [3U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1212,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [3U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1213,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [3U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1214,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                          [3U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1215,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [3U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1216,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                 [3U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1217,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1218,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                    [3U]))));
            tracep->chgBit(oldp+1219,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1220,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [4U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1221,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [4U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1222,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [4U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1223,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                          [4U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1224,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [4U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1225,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                 [4U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1226,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [4U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1227,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                    [4U]))));
            tracep->chgBit(oldp+1228,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1229,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [5U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1230,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [5U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1231,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [5U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1232,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                          [5U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1233,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [5U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1234,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                 [5U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1235,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [5U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1236,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                    [5U]))));
            tracep->chgBit(oldp+1237,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1238,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [6U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1239,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [6U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1240,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [6U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1241,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                          [6U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1242,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [6U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1243,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                 [6U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1244,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [6U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1245,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                    [6U]))));
            tracep->chgBit(oldp+1246,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1247,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [7U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1248,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [7U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1249,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [7U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1250,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                          [7U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1251,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [7U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1252,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                 [7U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1253,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [7U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1254,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                    [7U]))));
            tracep->chgBit(oldp+1255,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1256,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [8U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1257,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [8U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1258,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [8U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1259,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                          [8U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1260,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [8U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1261,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                 [8U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1262,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [8U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1263,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                    [8U]))));
            tracep->chgBit(oldp+1264,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1265,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [9U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1266,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [9U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1267,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [9U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1268,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                          [9U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1269,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [9U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1270,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                 [9U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1271,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [9U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1272,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                    [9U]))));
            tracep->chgBit(oldp+1273,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [0xaU] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1274,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [0xaU] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1275,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [0xaU] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1276,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                       [0xaU] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1277,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                          [0xaU] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1278,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [0xaU] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1279,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                 [0xaU] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1280,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                     [0xaU] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1281,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                                    [0xaU]))));
            tracep->chgBit(oldp+1282,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_p 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1283,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_p 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1284,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_p 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1285,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_p 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1286,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_p 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1287,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_p 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1288,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_p 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1289,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_p 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1290,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_p))));
            tracep->chgBit(oldp+1291,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__hfifo_reqready));
            tracep->chgBit(oldp+1292,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i))));
            tracep->chgBit(oldp+1293,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1294,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
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
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1296,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__accept_t_req));
            tracep->chgBit(oldp+1297,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__accept_t_rsp));
            tracep->chgBit(oldp+1298,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1299,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1300,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1301,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1302,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1303,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1304,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1305,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1306,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                       [0U][0U])));
            tracep->chgBit(oldp+1307,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1308,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1309,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1310,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1311,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1312,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1313,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1314,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1315,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                       [1U][0U])));
            tracep->chgBit(oldp+1316,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1317,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1318,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1319,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1320,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1321,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1322,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1323,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1324,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                       [0U][0U])));
            tracep->chgBit(oldp+1325,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1326,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1327,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1328,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1329,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1330,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1331,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1332,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1333,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                                       [1U][0U])));
            tracep->chgCData(oldp+1334,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrequest),2);
            tracep->chgBit(oldp+1335,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1336,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1337,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1338,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1339,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1340,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1341,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1342,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1343,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+1344,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrequest))));
            tracep->chgBit(oldp+1345,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1346,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1347,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1348,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1349,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1350,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1351,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1352,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1353,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
            tracep->chgCData(oldp+1354,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+1355,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dfifo_rspready))));
            tracep->chgBit(oldp+1356,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1357,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1358,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1359,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1360,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1361,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1362,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1363,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1364,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+1365,((0xfeU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+1366,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1367,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1368,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1369,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1370,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1371,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1372,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1373,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1374,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1375,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+1376,((1U | (0xfeU 
                                               & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+1377,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1378,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp7689[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[0U]);
            __Vtemp7689[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[1U]));
            __Vtemp7689[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+1379,(__Vtemp7689),85);
            tracep->chgBit(oldp+1382,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+1383,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+1386,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgWData(oldp+1389,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+1392,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+1393,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+1394,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+1395,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__dfifo_rspready))));
            tracep->chgBit(oldp+1396,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1397,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1398,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1399,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1400,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1401,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1402,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1403,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1404,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U])));
            tracep->chgBit(oldp+1405,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp7693[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp7693[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp7693[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1406,(__Vtemp7693),85);
            tracep->chgBit(oldp+1409,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgBit(oldp+1410,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1411,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1412,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1413,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1414,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1415,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1416,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1417,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1418,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U])));
            tracep->chgBit(oldp+1419,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp7697[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp7697[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp7697[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1420,(__Vtemp7697),85);
            tracep->chgBit(oldp+1423,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgBit(oldp+1424,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1425,((7U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1426,((7U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1427,((3U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1428,((0xffU & (IData)(
                                                         (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1429,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1430,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1431,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1432,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o))));
            tracep->chgBit(oldp+1433,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1434,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1435,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1436,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1437,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1438,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1439,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1440,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1441,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [0U]))));
            tracep->chgBit(oldp+1442,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [0U]))));
            tracep->chgBit(oldp+1443,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1444,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
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
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1446,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1447,((7U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1448,((7U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1449,((3U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1450,((0xffU & (IData)(
                                                         (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1451,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1452,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1453,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1454,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o))));
            tracep->chgBit(oldp+1455,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1456,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1457,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1458,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1459,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1460,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1461,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1462,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1463,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [1U]))));
            tracep->chgBit(oldp+1464,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [1U]))));
            tracep->chgBit(oldp+1465,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1466,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
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
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1468,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1469,((7U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1470,((7U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1471,((3U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1472,((0xffU & (IData)(
                                                         (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1473,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1474,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1475,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1476,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o))));
            tracep->chgBit(oldp+1477,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1478,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [2U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1479,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [2U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1480,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [2U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1481,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                          [2U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1482,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [2U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1483,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                 [2U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1484,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [2U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1485,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [2U]))));
            tracep->chgBit(oldp+1486,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [2U]))));
            tracep->chgBit(oldp+1487,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1488,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [2U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
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
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [2U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1490,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1491,((7U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1492,((7U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1493,((3U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1494,((0xffU & (IData)(
                                                         (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1495,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1496,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1497,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1498,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o))));
            tracep->chgBit(oldp+1499,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1500,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [3U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1501,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [3U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1502,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [3U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1503,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                          [3U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1504,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [3U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1505,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                 [3U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1506,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1507,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [3U]))));
            tracep->chgBit(oldp+1508,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [3U]))));
            tracep->chgBit(oldp+1509,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1510,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [3U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
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
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [3U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1512,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1513,((7U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1514,((7U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1515,((3U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1516,((0xffU & (IData)(
                                                         (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1517,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1518,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1519,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1520,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o))));
            tracep->chgBit(oldp+1521,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1522,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [4U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1523,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [4U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1524,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [4U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1525,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                          [4U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1526,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [4U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1527,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                 [4U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1528,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [4U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1529,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [4U]))));
            tracep->chgBit(oldp+1530,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [4U]))));
            tracep->chgBit(oldp+1531,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1532,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [4U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
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
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [4U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1534,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1535,((7U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1536,((7U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1537,((3U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1538,((0xffU & (IData)(
                                                         (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1539,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1540,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1541,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1542,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o))));
            tracep->chgBit(oldp+1543,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1544,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [5U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1545,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [5U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1546,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [5U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1547,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                          [5U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1548,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [5U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1549,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                 [5U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1550,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [5U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1551,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [5U]))));
            tracep->chgBit(oldp+1552,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [5U]))));
            tracep->chgBit(oldp+1553,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1554,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [5U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
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
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [5U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1556,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1557,((7U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1558,((7U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1559,((3U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1560,((0xffU & (IData)(
                                                         (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1561,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1562,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1563,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1564,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o))));
            tracep->chgBit(oldp+1565,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1566,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [6U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1567,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [6U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1568,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [6U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1569,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                          [6U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1570,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [6U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1571,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                 [6U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1572,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [6U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1573,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [6U]))));
            tracep->chgBit(oldp+1574,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [6U]))));
            tracep->chgBit(oldp+1575,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1576,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [6U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
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
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [6U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1578,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1579,((7U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1580,((7U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1581,((3U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1582,((0xffU & (IData)(
                                                         (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1583,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1584,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1585,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1586,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o))));
            tracep->chgBit(oldp+1587,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1588,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [7U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1589,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [7U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1590,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [7U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1591,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                          [7U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1592,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [7U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1593,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                 [7U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1594,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [7U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1595,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [7U]))));
            tracep->chgBit(oldp+1596,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [7U]))));
            tracep->chgBit(oldp+1597,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1598,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [7U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
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
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [7U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1600,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1601,((7U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1602,((7U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1603,((3U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1604,((0xffU & (IData)(
                                                         (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1605,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1606,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1607,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1608,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o))));
            tracep->chgBit(oldp+1609,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1610,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [8U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1611,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [8U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1612,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [8U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1613,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                          [8U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1614,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [8U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1615,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                 [8U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1616,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [8U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1617,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [8U]))));
            tracep->chgBit(oldp+1618,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [8U]))));
            tracep->chgBit(oldp+1619,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1620,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [8U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
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
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [8U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1622,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1623,((7U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1624,((7U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1625,((3U & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1626,((0xffU & (IData)(
                                                         (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1627,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1628,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1629,((1U & (IData)(
                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1630,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o))));
            tracep->chgBit(oldp+1631,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1632,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [9U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1633,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [9U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1634,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                       [9U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1635,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                          [9U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1636,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [9U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1637,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                 [9U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1638,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [9U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1639,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [9U]))));
            tracep->chgBit(oldp+1640,((1U & (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [9U]))));
            tracep->chgBit(oldp+1641,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1642,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [9U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
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
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [9U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xa2U])) {
            tracep->chgBit(oldp+1644,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_mtvec_init));
            tracep->chgBit(oldp+1645,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__discard_req_d));
            tracep->chgCData(oldp+1646,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_n),2);
            tracep->chgBit(oldp+1647,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_d) 
                                             >> 4U))));
            tracep->chgBit(oldp+1648,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_d) 
                                             >> 3U))));
            tracep->chgBit(oldp+1649,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_d) 
                                             >> 2U))));
            tracep->chgBit(oldp+1650,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_d) 
                                             >> 1U))));
            tracep->chgBit(oldp+1651,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_d))));
            tracep->chgBit(oldp+1652,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_en));
            tracep->chgCData(oldp+1653,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__frm_d),3);
            tracep->chgBit(oldp+1654,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                             >> 5U))));
            tracep->chgBit(oldp+1655,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                             >> 4U))));
            tracep->chgCData(oldp+1656,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                               >> 2U))),2);
            tracep->chgBit(oldp+1657,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                             >> 1U))));
            tracep->chgBit(oldp+1658,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d))));
            tracep->chgBit(oldp+1659,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_en));
            tracep->chgBit(oldp+1660,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_en));
            tracep->chgBit(oldp+1661,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_en));
            tracep->chgBit(oldp+1662,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_en));
            tracep->chgBit(oldp+1663,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtval_en));
            tracep->chgBit(oldp+1664,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_en));
            tracep->chgBit(oldp+1665,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_en));
            tracep->chgBit(oldp+1666,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_en));
            tracep->chgBit(oldp+1667,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_we));
            tracep->chgBit(oldp+1668,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_we));
            tracep->chgCData(oldp+1669,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we),2);
            tracep->chgCData(oldp+1670,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we),2);
            tracep->chgCData(oldp+1671,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d),6);
            tracep->chgIData(oldp+1672,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fflags_d),32);
            tracep->chgIData(oldp+1673,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__frm_d),32);
            tracep->chgBit(oldp+1674,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we))));
            tracep->chgBit(oldp+1675,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we))));
            tracep->chgBit(oldp+1676,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we) 
                                             >> 1U))));
            tracep->chgBit(oldp+1677,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we) 
                                             >> 1U))));
            tracep->chgBit(oldp+1678,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1679,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1680,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1681,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1682,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1683,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1684,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1685,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1686,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[0U])));
            tracep->chgBit(oldp+1687,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1688,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1689,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1690,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1691,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1692,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1693,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1694,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1695,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                       [0U][0U])));
            tracep->chgBit(oldp+1696,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1697,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1698,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1699,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1700,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1701,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1702,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1703,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1704,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                       [1U][0U])));
            tracep->chgBit(oldp+1705,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1706,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1707,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1708,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1709,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1710,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1711,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1712,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1713,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                       [2U][0U])));
            tracep->chgBit(oldp+1714,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1715,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1716,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1717,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1718,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1719,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1720,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1721,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1722,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                       [0U][0U])));
            tracep->chgBit(oldp+1723,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1724,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1725,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1726,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1727,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1728,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1729,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1730,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1731,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                       [1U][0U])));
            tracep->chgBit(oldp+1732,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1733,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1734,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1735,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1736,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1737,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1738,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1739,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1740,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o
                                       [2U][0U])));
            tracep->chgCData(oldp+1741,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrequest),3);
            tracep->chgBit(oldp+1742,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1743,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1744,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1745,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1746,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1747,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1748,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1749,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1750,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+1751,((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrequest))));
            tracep->chgBit(oldp+1752,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1753,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1754,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1755,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1756,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1757,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1758,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1759,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1760,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
            tracep->chgCData(oldp+1761,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dfifo_rspready),3);
            tracep->chgBit(oldp+1762,((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dfifo_rspready))));
            tracep->chgBit(oldp+1763,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1764,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1765,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1766,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1767,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1768,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1769,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1770,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1771,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+1772,((0xfcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                                  [0U][2U] 
                                                  >> 3U))),8);
            tracep->chgCData(oldp+1773,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                               [0U][2U] 
                                               >> 0xbU))),2);
            tracep->chgBit(oldp+1774,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1775,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1776,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1777,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1778,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1779,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1780,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1781,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1782,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+1783,((1U | (0xfcU 
                                               & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                                  [1U][2U] 
                                                  >> 3U)))),8);
            tracep->chgCData(oldp+1784,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                               [1U][2U] 
                                               >> 0xbU))),2);
            tracep->chgBit(oldp+1785,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1786,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1787,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1788,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1789,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1790,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1791,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1792,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1793,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+1794,((2U | (0xfcU 
                                               & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                                  [2U][2U] 
                                                  >> 3U)))),8);
            tracep->chgCData(oldp+1795,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i
                                               [2U][2U] 
                                               >> 0xbU))),2);
            tracep->chgBit(oldp+1796,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp7761[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[0U]);
            __Vtemp7761[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[1U]));
            __Vtemp7761[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+1797,(__Vtemp7761),85);
            tracep->chgBit(oldp+1800,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+1801,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+1804,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgWData(oldp+1807,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2]),86);
            tracep->chgWData(oldp+1810,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+1813,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),3);
            tracep->chgCData(oldp+1814,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),3);
            tracep->chgBit(oldp+1815,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1816,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1817,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1818,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1819,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1820,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1821,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1822,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1823,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U])));
            tracep->chgBit(oldp+1824,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp7765[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp7765[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp7765[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1825,(__Vtemp7765),85);
            tracep->chgBit(oldp+1828,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgBit(oldp+1829,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1830,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1831,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1832,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1833,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1834,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1835,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1836,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1837,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U])));
            tracep->chgBit(oldp+1838,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp7769[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp7769[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp7769[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1839,(__Vtemp7769),85);
            tracep->chgBit(oldp+1842,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgBit(oldp+1843,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1844,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1845,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1846,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1847,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1848,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1849,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1850,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1851,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[0U])));
            tracep->chgBit(oldp+1852,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp7773[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp7773[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp7773[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1853,(__Vtemp7773),85);
            tracep->chgBit(oldp+1856,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xa3U])) {
            tracep->chgCData(oldp+1857,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_we_ex),2);
            tracep->chgIData(oldp+1858,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb),32);
            tracep->chgIData(oldp+1859,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_rdata_ext),32);
            tracep->chgBit(oldp+1860,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req));
            tracep->chgCData(oldp+1861,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
            tracep->chgCData(oldp+1862,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_we),2);
            tracep->chgBit(oldp+1863,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                                       | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal))));
            tracep->chgBit(oldp+1864,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold));
            tracep->chgBit(oldp+1865,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold));
            tracep->chgBit(oldp+1866,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal));
            tracep->chgBit(oldp+1867,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal));
            tracep->chgBit(oldp+1868,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_update));
            tracep->chgBit(oldp+1869,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update));
            tracep->chgBit(oldp+1870,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_update));
            tracep->chgBit(oldp+1871,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fcsr_en));
            tracep->chgCData(oldp+1872,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fcsr_d),8);
            tracep->chgBit(oldp+1873,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__frm_en));
            tracep->chgBit(oldp+1874,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_en));
            tracep->chgCData(oldp+1875,((0xfU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                 >> 0x1cU))),4);
            tracep->chgSData(oldp+1876,((0xfffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                   >> 0x10U))),12);
            tracep->chgBit(oldp+1877,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1878,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1879,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1880,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1881,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1882,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1883,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 9U))));
            tracep->chgCData(oldp+1884,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1885,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 5U))));
            tracep->chgBit(oldp+1886,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 4U))));
            tracep->chgBit(oldp+1887,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 3U))));
            tracep->chgBit(oldp+1888,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 2U))));
            tracep->chgCData(oldp+1889,((3U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d)),2);
            tracep->chgBit(oldp+1890,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_en));
            tracep->chgBit(oldp+1891,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__depc_en));
            tracep->chgIData(oldp+1892,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__fcsr_d),32);
            tracep->chgIData(oldp+1893,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d),32);
            tracep->chgCData(oldp+1894,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_ready),5);
            tracep->chgCData(oldp+1895,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),7);
            tracep->chgBit(oldp+1896,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_out_ready))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xa4U])) {
            tracep->chgBit(oldp+1897,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1898,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1899,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1900,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1901,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1902,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1903,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1904,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1905,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[0U])));
            tracep->chgSData(oldp+1906,(((0x200000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U])
                                          ? (0xfffU 
                                             & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                 << 0x19U) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                   >> 7U)))
                                          : 0U)),12);
            tracep->chgBit(oldp+1907,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__req_i));
            tracep->chgIData(oldp+1908,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellout__i_dm_mem__data_o)),32);
            tracep->chgIData(oldp+1909,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellout__i_dm_mem__data_o 
                                                 >> 0x20U))),32);
            tracep->chgBit(oldp+1910,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__data_valid));
            tracep->chgIData(oldp+1911,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_d)),32);
            tracep->chgIData(oldp+1912,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_d 
                                                 >> 0x20U))),32);
            tracep->chgQData(oldp+1913,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__data_bits),64);
            tracep->chgIData(oldp+1915,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__i),32);
            tracep->chgBit(oldp+1916,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1917,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1918,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1919,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1920,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1921,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1922,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1923,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1924,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                       [0U][0U])));
            tracep->chgBit(oldp+1925,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1926,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1927,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1928,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1929,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1930,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1931,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1932,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1933,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                       [1U][0U])));
            tracep->chgBit(oldp+1934,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1935,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1936,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1937,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1938,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1939,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1940,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1941,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1942,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                       [2U][0U])));
            tracep->chgBit(oldp+1943,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1944,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1945,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1946,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1947,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1948,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1949,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1950,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1951,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                       [0U][0U])));
            tracep->chgBit(oldp+1952,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1953,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1954,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1955,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1956,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1957,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1958,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1959,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1960,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                       [1U][0U])));
            tracep->chgBit(oldp+1961,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1962,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1963,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1964,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1965,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1966,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1967,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1968,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1969,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                                       [2U][0U])));
            tracep->chgCData(oldp+1970,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrequest),3);
            tracep->chgBit(oldp+1971,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1972,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1973,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1974,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1975,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1976,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1977,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1978,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1979,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+1980,((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrequest))));
            tracep->chgBit(oldp+1981,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1982,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1983,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1984,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1985,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1986,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1987,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1988,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1989,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
            tracep->chgCData(oldp+1990,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dfifo_rspready),3);
            tracep->chgBit(oldp+1991,((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dfifo_rspready))));
            tracep->chgBit(oldp+1992,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1993,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1994,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1995,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1996,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1997,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1998,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1999,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2000,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+2001,((0xfcU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                                  [0U][2U] 
                                                  >> 3U))),8);
            tracep->chgCData(oldp+2002,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                               [0U][2U] 
                                               >> 0xbU))),2);
            tracep->chgBit(oldp+2003,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2004,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2005,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2006,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2007,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2008,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2009,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2010,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2011,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+2012,((1U | (0xfcU 
                                               & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                                  [1U][2U] 
                                                  >> 3U)))),8);
            tracep->chgCData(oldp+2013,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                               [1U][2U] 
                                               >> 0xbU))),2);
            tracep->chgBit(oldp+2014,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2015,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2016,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2017,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2018,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2019,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2020,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2021,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2022,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+2023,((2U | (0xfcU 
                                               & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                                  [2U][2U] 
                                                  >> 3U)))),8);
            tracep->chgCData(oldp+2024,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i
                                               [2U][2U] 
                                               >> 0xbU))),2);
            tracep->chgBit(oldp+2025,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp7837[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[0U]);
            __Vtemp7837[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[1U]));
            __Vtemp7837[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+2026,(__Vtemp7837),85);
            tracep->chgBit(oldp+2029,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+2030,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+2033,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgWData(oldp+2036,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2]),86);
            tracep->chgWData(oldp+2039,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+2042,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),3);
            tracep->chgCData(oldp+2043,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),3);
            tracep->chgBit(oldp+2044,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__we_o));
            tracep->chgIData(oldp+2045,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+2046,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int),32);
            tracep->chgBit(oldp+2047,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_ack));
            tracep->chgCData(oldp+2048,(((4U != (7U 
                                                 & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                    >> 0x12U)))
                                          ? 0U : 1U)),2);
            tracep->chgBit(oldp+2049,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__tlul_error));
            tracep->chgCData(oldp+2050,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2051,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                  >> 5U))),8);
            tracep->chgBit(oldp+2052,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__req_i) 
                                       & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__we_o)))));
            tracep->chgCData(oldp+2053,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2054,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int),32);
            tracep->chgIData(oldp+2055,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+2056,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__unnamedblk1__DOT__i),32);
            tracep->chgBit(oldp+2057,((((0U == (7U 
                                                & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                     >> 0x12U)))) 
                                       | (4U == (7U 
                                                 & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                    >> 0x12U))))));
            tracep->chgBit(oldp+2058,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk) 
                                        & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__mask_chk)) 
                                       & (((4U == (7U 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                      >> 0x12U))) 
                                           | (1U == 
                                              (7U & 
                                               (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                >> 0x12U)))) 
                                          | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk)))));
            tracep->chgBit(oldp+2059,((0U == (7U & 
                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2060,((1U == (7U & 
                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2061,((4U == (7U & 
                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+2062,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+2063,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+2064,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk));
            tracep->chgCData(oldp+2065,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                        >> 5U)))))),4);
            tracep->chgSData(oldp+2066,(((((4U != (7U 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                      >> 0x12U)))
                                            ? 0U : 1U) 
                                          << 0xbU) 
                                         | (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__tlul_error) 
                                             << 0xaU) 
                                            | (0x3ffU 
                                               & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                  >> 5U))))),13);
            tracep->chgBit(oldp+2067,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgCData(oldp+2068,((0x1eU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U])),5);
            tracep->chgBit(oldp+2069,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgCData(oldp+2070,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+2071,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgBit(oldp+2072,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2073,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2074,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2075,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2076,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2077,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2078,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2079,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2080,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U])));
            tracep->chgBit(oldp+2081,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp7841[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp7841[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp7841[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2082,(__Vtemp7841),85);
            tracep->chgBit(oldp+2085,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgBit(oldp+2086,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2087,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2088,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2089,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2090,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2091,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2092,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2093,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2094,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U])));
            tracep->chgBit(oldp+2095,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp7845[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp7845[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp7845[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2096,(__Vtemp7845),85);
            tracep->chgBit(oldp+2099,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgBit(oldp+2100,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2101,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2102,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2103,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2104,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2105,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2106,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2107,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2108,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_d_o[0U])));
            tracep->chgBit(oldp+2109,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp7849[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp7849[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp7849[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2110,(__Vtemp7849),85);
            tracep->chgBit(oldp+2113,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xa5U])) {
            tracep->chgBit(oldp+2114,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2115,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2116,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2117,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2118,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2119,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2120,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2121,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2122,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu))));
            tracep->chgBit(oldp+2123,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu))));
            tracep->chgBit(oldp+2124,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu 
                                                     >> 0x33U)))));
            tracep->chgIData(oldp+2125,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2126,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2127,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_raw));
            tracep->chgIData(oldp+2128,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata),32);
            tracep->chgIData(oldp+2129,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed),32);
            tracep->chgBit(oldp+2130,((3U != (3U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata))));
            tracep->chgBit(oldp+2131,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn));
            tracep->chgBit(oldp+2132,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__gnt_or_pmp_err));
            tracep->chgBit(oldp+2133,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rvalid_or_pmp_err));
            tracep->chgBit(oldp+2134,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_or_pmp_err));
            tracep->chgBit(oldp+2135,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_valid));
            tracep->chgIData(oldp+2136,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[0U]),32);
            tracep->chgIData(oldp+2137,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[1U]),32);
            tracep->chgIData(oldp+2138,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[2U]),32);
            tracep->chgCData(oldp+2139,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed),3);
            tracep->chgBit(oldp+2140,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo));
            tracep->chgIData(oldp+2141,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata),32);
            tracep->chgBit(oldp+2142,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err));
            tracep->chgBit(oldp+2143,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid));
            tracep->chgBit(oldp+2144,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
            tracep->chgBit(oldp+2145,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed));
            tracep->chgBit(oldp+2146,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two));
            tracep->chgBit(oldp+2147,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_d));
            tracep->chgBit(oldp+2148,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmderror_valid));
            tracep->chgCData(oldp+2149,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmderror),3);
            tracep->chgCData(oldp+2150,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_d),3);
            tracep->chgCData(oldp+2151,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                               >> 0x1dU))),3);
            tracep->chgCData(oldp+2152,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                                  >> 0x18U))),5);
            tracep->chgSData(oldp+2153,((0x7ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                                   >> 0xdU))),11);
            tracep->chgBit(oldp+2154,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2155,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                             >> 0xbU))));
            tracep->chgCData(oldp+2156,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                               >> 8U))),3);
            tracep->chgCData(oldp+2157,((0xfU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+2158,((0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs)),4);
            tracep->chgBit(oldp+2159,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_d_aligned))));
            tracep->chgBit(oldp+2160,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_d_aligned))));
            tracep->chgBit(oldp+2161,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__going));
            tracep->chgBit(oldp+2162,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__exception));
            tracep->chgQData(oldp+2163,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_d),64);
            tracep->chgCData(oldp+2165,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_d_aligned),2);
            tracep->chgCData(oldp+2166,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_aligned),2);
            tracep->chgCData(oldp+2167,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_d_aligned),2);
            tracep->chgCData(oldp+2168,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_d),2);
            tracep->chgCData(oldp+2169,((0xffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata))),8);
            tracep->chgCData(oldp+2170,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                          >> 8U)))),8);
            tracep->chgCData(oldp+2171,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                          >> 0x10U)))),8);
            tracep->chgCData(oldp+2172,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                          >> 0x18U)))),8);
            tracep->chgCData(oldp+2173,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                          >> 0x20U)))),8);
            tracep->chgCData(oldp+2174,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                          >> 0x28U)))),8);
            tracep->chgCData(oldp+2175,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                          >> 0x30U)))),8);
            tracep->chgCData(oldp+2176,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                          >> 0x38U)))),8);
            tracep->chgBit(oldp+2177,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+2178,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2179,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2180,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2181,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2182,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2183,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2184,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2185,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2186,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i))));
            tracep->chgBit(oldp+2187,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__accept_t_req));
            tracep->chgBit(oldp+2188,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__accept_t_rsp));
            tracep->chgBit(oldp+2189,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_p 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2190,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_p 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2191,((7U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_p 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2192,((3U & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_p 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2193,((0xffU & (IData)(
                                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_p 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2194,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_p 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2195,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_p 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2196,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_p 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2197,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_p))));
            tracep->chgBit(oldp+2198,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__hfifo_reqready));
            tracep->chgBit(oldp+2199,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i))));
            tracep->chgBit(oldp+2200,((1U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2201,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
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
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xa6U])) {
            tracep->chgBit(oldp+2203,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d));
            tracep->chgBit(oldp+2204,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_err));
            tracep->chgCData(oldp+2205,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_n),2);
            tracep->chgCData(oldp+2206,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_n),2);
            tracep->chgCData(oldp+2207,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_d),3);
            tracep->chgCData(oldp+2208,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_d),3);
            tracep->chgCData(oldp+2209,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped),3);
        }
        tracep->chgBit(oldp+2210,(vlTOPp->clock));
        tracep->chgBit(oldp+2211,(vlTOPp->reset_ni));
        tracep->chgIData(oldp+2212,(vlTOPp->gpio_i),20);
        tracep->chgIData(oldp+2213,(vlTOPp->gpio_o),20);
        tracep->chgBit(oldp+2214,(vlTOPp->uart_rx));
        tracep->chgBit(oldp+2215,(vlTOPp->uart_tx));
        tracep->chgBit(oldp+2216,((1U & (~ (IData)(vlTOPp->reset_ni)))));
        tracep->chgBit(oldp+2217,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq));
        tracep->chgBit(oldp+2218,((1U & (~ ((0x800000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[8U])
                                             ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[8U] 
                                                >> 0x16U)
                                             : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_temp))))));
        tracep->chgBit(oldp+2219,((1U & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                            & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                                | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__haltreq)) 
                                               | (0U 
                                                  != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)))))));
        tracep->chgBit(oldp+2220,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_req));
        tracep->chgIData(oldp+2221,(((1U & (IData)(
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
        tracep->chgBit(oldp+2222,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__in_valid_c2fpu));
        tracep->chgBit(oldp+2223,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        tracep->chgIData(oldp+2224,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[
                                    (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0xfU))]),32);
        tracep->chgBit(oldp+2225,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[
                                   (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                             >> 0x1bU))])));
        tracep->chgIData(oldp+2226,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[
                                     (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x1bU))])),32);
        tracep->chgBit(oldp+2227,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__fp_rf_we_wb_q) 
                                      | (0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q))))));
        tracep->chgIData(oldp+2228,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__is_fp_instr) 
                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__use_fp_rs2))
                                      ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_rf_rdata_b
                                      : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc)),32);
        tracep->chgBit(oldp+2229,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id));
        tracep->chgBit(oldp+2230,((1U & (((((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                            & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
                                           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn))) 
                                          & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id))) 
                                         & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_fetch_err))))));
        tracep->chgBit(oldp+2231,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_fetch_err));
        tracep->chgBit(oldp+2232,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_fetch_err_plus2));
        tracep->chgIData(oldp+2233,((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                     << 1U)),32);
        tracep->chgIData(oldp+2234,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_id),32);
        tracep->chgQData(oldp+2235,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_d_ex[0]),34);
        tracep->chgQData(oldp+2237,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_d_ex[1]),34);
        tracep->chgBit(oldp+2239,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle));
        tracep->chgBit(oldp+2240,((1U & ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__stall) 
                                             | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id))) 
                                         | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)))));
        tracep->chgBit(oldp+2241,(((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                   | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req))));
        tracep->chgBit(oldp+2242,(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ctrl_busy) 
                                     | ((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                        | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req))) 
                                    | (0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                                   | (0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_busy)))));
        tracep->chgBit(oldp+2243,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw) 
                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing)) 
                                   & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id)))));
        tracep->chgBit(oldp+2244,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match));
        tracep->chgIData(oldp+2245,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                                      ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__div_sel_ex)
                                          ? (IData)(
                                                    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                    [0U])
                                          : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))
                                      : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_result)),32);
        tracep->chgBit(oldp+2246,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing) 
                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec))));
        tracep->chgBit(oldp+2247,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing) 
                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec))));
        tracep->chgIData(oldp+2248,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd),32);
        tracep->chgIData(oldp+2249,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd),32);
        tracep->chgBit(oldp+2250,((1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)) 
                                         | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid) 
                                            | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid))))));
        tracep->chgBit(oldp+2251,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_write_wb));
        tracep->chgBit(oldp+2252,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                   & (1U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)))));
        tracep->chgBit(oldp+2253,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__data_req_out));
        tracep->chgBit(oldp+2254,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_save_id));
        tracep->chgIData(oldp+2255,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_mtval),32);
        tracep->chgBit(oldp+2256,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done))));
        tracep->chgBit(oldp+2257,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_instr_ret_wb) 
                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q))));
        tracep->chgBit(oldp+2258,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_in_ready) 
                                   & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
        tracep->chgBit(oldp+2259,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill))) 
                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access) 
                                      | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_ld_hz)))));
        tracep->chgBit(oldp+2260,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv) 
                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec))));
        tracep->chgBit(oldp+2261,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv) 
                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec))));
        tracep->chgBit(oldp+2262,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) 
                                      | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id)))));
        tracep->chgBit(oldp+2263,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                   & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                       | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__haltreq)) 
                                      | (0U != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)))));
        tracep->chgIData(oldp+2264,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_swap_oprnds)
                                      ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fpu_op_b
                                      : (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[
                                         (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x1bU))]))),32);
        tracep->chgBit(oldp+2265,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__busy));
        tracep->chgBit(oldp+2266,(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_raw) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_in_ready)) 
                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set))) 
                                   | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                      & (~ ((~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__stall) 
                                                | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id))) 
                                            | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)))))));
        tracep->chgBit(oldp+2267,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                         & ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                             ? (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                                 >> 1U) 
                                                & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                             : (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                                 & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))))));
        tracep->chgIData(oldp+2268,(((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id))
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
        tracep->chgBit(oldp+2269,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_raw) 
                                   & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_err)))));
        tracep->chgBit(oldp+2270,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req) 
                                   & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
        tracep->chgCData(oldp+2271,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                      ? (1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_n) 
                                               >> 1U))
                                      : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_n))),2);
        tracep->chgCData(oldp+2272,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                      ? (1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_n) 
                                               >> 1U))
                                      : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_n))),2);
        tracep->chgCData(oldp+2273,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                      ? (1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_n) 
                                               >> 1U))
                                      : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_n))),2);
        tracep->chgIData(oldp+2274,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__stored_addr_q),32);
        tracep->chgBit(oldp+2275,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req) 
                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q))) 
                                   & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
        tracep->chgIData(oldp+2276,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set)
                                       ? (0xfffffffeU 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                       : (0xfffffffcU 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_q)) 
                                     + (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req) 
                                         & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q))) 
                                        << 2U))),32);
        tracep->chgIData(oldp+2277,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_q),32);
        tracep->chgBit(oldp+2278,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set) 
                                   | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req) 
                                      & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q))))));
        tracep->chgIData(oldp+2279,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set)
                                      ? (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                      : 0U)),32);
        tracep->chgBit(oldp+2280,((1U & (~ (IData)(
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                         >> 1U) 
                                                        | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev)))))))));
        tracep->chgIData(oldp+2281,((0xfffffffeU & 
                                     ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                       + ((2U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                 << 1U)) 
                                          | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))) 
                                      << 1U))),32);
        tracep->chgCData(oldp+2282,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q),3);
        tracep->chgCData(oldp+2283,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__entry_en),3);
        tracep->chgIData(oldp+2284,(((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
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
        tracep->chgBit(oldp+2285,((1U & ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                          ? ((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                               >> 1U) 
                                              & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))) 
                                             | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                                          : (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                              & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                                             | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                                & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                   | (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)))))))));
        tracep->chgBit(oldp+2286,((1U & ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                          ? (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                              >> 1U) 
                                             & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                          : (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                              & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                             & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))))));
        tracep->chgBit(oldp+2287,((1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                          >> 1U) | 
                                         ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                          & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_valid))))));
        tracep->chgIData(oldp+2288,((0x7fffffffU & 
                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                      + ((2U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                << 1U)) 
                                         | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
        tracep->chgIData(oldp+2289,((0x7fffffffU & 
                                     ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set)
                                       ? (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set)
                                            ? (0xfffffffeU 
                                               & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                            : 0U) >> 1U)
                                       : (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                          + ((2U & 
                                              ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                               << 1U)) 
                                             | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))))),31);
        tracep->chgIData(oldp+2290,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q),31);
        tracep->chgBit(oldp+2291,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set) 
                                   | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_in_ready) 
                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_raw)))));
        tracep->chgBit(oldp+2292,(0U));
        tracep->chgQData(oldp+2293,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[0]),34);
        tracep->chgQData(oldp+2295,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[1]),34);
        tracep->chgIData(oldp+2297,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                      ? 0U : (0x1fU 
                                              & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0xfU)))),32);
        tracep->chgIData(oldp+2298,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b),32);
        tracep->chgBit(oldp+2299,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req) 
                                   | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec))));
        tracep->chgQData(oldp+2300,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[0]),34);
        tracep->chgQData(oldp+2302,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1]),34);
        tracep->chgBit(oldp+2304,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match) 
                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b))));
        tracep->chgBit(oldp+2305,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__fp_invalid_rm));
        tracep->chgBit(oldp+2306,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
                                   & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))));
        tracep->chgBit(oldp+2307,(((3U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                   & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                      | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn))))));
        tracep->chgBit(oldp+2308,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq));
        tracep->chgBit(oldp+2309,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
        tracep->chgBit(oldp+2310,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
        tracep->chgQData(oldp+2311,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__ex_block_i__imd_val_d_o[0]),34);
        tracep->chgQData(oldp+2313,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__ex_block_i__imd_val_d_o[1]),34);
        tracep->chgIData(oldp+2315,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__div_sel_ex)
                                      ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                [0U])
                                      : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))),32);
        tracep->chgBit(oldp+2316,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid) 
                                   | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid))));
        tracep->chgQData(oldp+2317,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0]),34);
        tracep->chgQData(oldp+2319,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1]),34);
        tracep->chgQData(oldp+2321,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                                      ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                      : (1ULL | ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                 << 1U)))),33);
        tracep->chgQData(oldp+2323,((0x1ffffffffULL 
                                     & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                                         ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                         : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                             ? (~ ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                   << 1U))
                                             : ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                << 1U))))),33);
        tracep->chgBit(oldp+2325,((1U & ((0x80000000U 
                                          & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                             ^ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b))
                                          ? ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                              >> 0x1fU) 
                                             ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                          : (~ (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 0x20U)))))));
        tracep->chgQData(oldp+2326,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_fast__DOT__multdiv_i__imd_val_d_o[0]),34);
        tracep->chgQData(oldp+2328,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_fast__DOT__multdiv_i__imd_val_d_o[1]),34);
        tracep->chgQData(oldp+2330,((0x7ffffffffULL 
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
        tracep->chgQData(oldp+2332,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum),34);
        tracep->chgQData(oldp+2334,((0x3ffffffffULL 
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
        tracep->chgBit(oldp+2336,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                    ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)) 
                                   & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)))));
        tracep->chgBit(oldp+2337,((1U & (IData)((1ULL 
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
        tracep->chgIData(oldp+2338,(((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
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
        tracep->chgIData(oldp+2339,(((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                      ? ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                              ? ((0xffff0000U 
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
                                              : ((0xff00U 
                                                  & ((IData)(
                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                              >> 2U)) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                       >> 0x10U))))
                                          : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                              ? ((0xffff0000U 
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
                                              ? ((0xffff0000U 
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
                                              ? ((0xffff0000U 
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
        tracep->chgIData(oldp+2340,(((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                      ? ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                              ? ((0xffffff00U 
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
                                              ? ((0xffffff00U 
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
                                              ? ((0xffffff00U 
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
                                              ? ((0xffffff00U 
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
        tracep->chgBit(oldp+2341,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_misaligned_access));
        tracep->chgIData(oldp+2342,(((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__fp_rf_wdata_wb_mux_we))
                                      ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__fp_rf_wdata_wb_mux
                                     [0U] : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__fp_rf_wdata_wb_mux
                                     [1U])),32);
        tracep->chgIData(oldp+2343,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0]),32);
        tracep->chgIData(oldp+2344,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1]),32);
        tracep->chgIData(oldp+2345,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__fp_rf_wdata_wb_mux[0]),32);
        tracep->chgIData(oldp+2346,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__fp_rf_wdata_wb_mux[1]),32);
        tracep->chgBit(oldp+2347,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q));
        tracep->chgBit(oldp+2348,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done) 
                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ready_wb)) 
                                   | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                      & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done))))));
        tracep->chgIData(oldp+2349,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__fp_rf_wdata_wb_q),32);
        tracep->chgIData(oldp+2350,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_mtvec_init)
                                      ? 0x200000f1U
                                      : (0xf1U | (0xffffff00U 
                                                  & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)))),32);
        tracep->chgCData(oldp+2351,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
                                      ? (5U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                      : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),3);
        tracep->chgIData(oldp+2352,((0x28001048U | 
                                     (4U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q) 
                                             >> (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)) 
                                            << 2U)))),32);
        tracep->chgIData(oldp+2353,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q
                                    [vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q]),32);
        tracep->chgBit(oldp+2354,(((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                          >> 8U)) > (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
        tracep->chgBit(oldp+2355,(((3U == (3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                 >> 0xaU))) 
                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wreq))));
        tracep->chgBit(oldp+2356,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_dyn_mod) 
                                   & (7U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0xcU))))));
        tracep->chgBit(oldp+2357,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                   & (0x7a0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_addr)))));
        tracep->chgBit(oldp+2358,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                         & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q))))));
        tracep->chgBit(oldp+2359,((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 2U) & 
                                         (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 2U))))));
        tracep->chgCData(oldp+2360,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_in_ready),4);
        tracep->chgBit(oldp+2361,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid));
        tracep->chgCData(oldp+2362,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),3);
        tracep->chgCData(oldp+2363,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),3);
        tracep->chgCData(oldp+2364,((3U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ready_wb) 
                                            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                                            ? ((1U 
                                                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                                : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                            : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),2);
        tracep->chgBit(oldp+2365,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid) 
                                   & ((4U >= (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt)) 
                                      & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__fmt_in_ready) 
                                         >> (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_dst_fmt))))));
        tracep->chgBit(oldp+2366,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        tracep->chgCData(oldp+2367,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),7);
        tracep->chgCData(oldp+2368,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),7);
        tracep->chgCData(oldp+2369,((7U & ((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_ready) 
                                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))
                                            ? ((1U 
                                                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                                : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                                            : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),3);
        tracep->chgCData(oldp+2370,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),5);
        tracep->chgCData(oldp+2371,((7U & ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                            ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                            : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),3);
        tracep->chgCData(oldp+2372,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),5);
        tracep->chgCData(oldp+2373,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),5);
        tracep->chgSData(oldp+2374,((0xffffU & ((1U 
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
        tracep->chgIData(oldp+2375,((0xfffffffU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__effective_subtraction)
                                                    ? 
                                                   (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__addend_after_shift)
                                                    : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__addend_after_shift))),28);
        tracep->chgBit(oldp+2376,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__effective_subtraction) 
                                   & (~ (IData)((0U 
                                                 != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__addend_sticky_bits)))))));
        tracep->chgIData(oldp+2377,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__sum_raw),29);
        tracep->chgBit(oldp+2378,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__sum_raw 
                                         >> 0x1cU))));
        tracep->chgCData(oldp+2379,((0x1fU & ((VL_GTES_III(1,32,32, 0U, 
                                                           VL_EXTENDS_II(32,10, (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__exponent_difference))) 
                                               | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__effective_subtraction) 
                                                  & VL_GTES_III(1,32,32, 2U, 
                                                                VL_EXTENDS_II(32,10, (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__exponent_difference)))))
                                               ? ((
                                                   VL_LTES_III(1,32,32, 0U, 
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
        tracep->chgBit(oldp+2380,(((0U != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__sum_sticky_bits) 
                                   | (0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__addend_sticky_bits)))));
        tracep->chgBit(oldp+2381,(((((0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__pre_round_abs)) 
                                     & (0U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__round_sticky_bits))) 
                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__effective_subtraction))
                                    ? (2U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew))
                                    : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__final_sign))));
        tracep->chgBit(oldp+2382,((1U & ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew))
                                          ? (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew) 
                                              >> 1U) 
                                             | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew) 
                                                | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__round_sticky_bits) 
                                                   >> 1U)))
                                          : ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew))
                                                  ? 
                                                 ((0U 
                                                   != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__round_sticky_bits)) 
                                                  & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__final_sign)))
                                                  : 
                                                 ((0U 
                                                   != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__round_sticky_bits)) 
                                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__final_sign)))
                                              : ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fp_frm_fpnew)) 
                                                 & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__round_sticky_bits) 
                                                     >> 1U) 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__round_sticky_bits) 
                                                       | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_fma_multi__DOT__pre_round_abs)))))))));
        tracep->chgBit(oldp+2383,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        tracep->chgCData(oldp+2384,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),7);
        tracep->chgCData(oldp+2385,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),7);
        tracep->chgCData(oldp+2386,((7U & ((1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_ready) 
                                                   >> 1U) 
                                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))
                                            ? ((1U 
                                                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                                : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                                            : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),3);
        tracep->chgBit(oldp+2387,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        tracep->chgCData(oldp+2388,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),7);
        tracep->chgCData(oldp+2389,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),7);
        tracep->chgCData(oldp+2390,((7U & ((1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_ready) 
                                                   >> 2U) 
                                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))
                                            ? ((1U 
                                                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                                : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                                            : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),3);
        tracep->chgBit(oldp+2391,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
        tracep->chgCData(oldp+2392,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes),7);
        tracep->chgCData(oldp+2393,((7U & ((1U & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__opgrp_out_ready) 
                                                   >> 3U) 
                                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))
                                            ? ((1U 
                                                & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                                                : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                                            : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)))),3);
        tracep->chgIData(oldp+2394,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_fp_regfile__DOT__fp_register_file__DOT__rf_reg_q[
                                    (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x1bU))]),32);
        tracep->chgCData(oldp+2395,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q),8);
        tracep->chgCData(oldp+2396,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we)
                                      ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be)
                                      : 0xfU)),4);
        tracep->chgBit(oldp+2397,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q));
        tracep->chgBit(oldp+2398,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty)))));
        tracep->chgBit(oldp+2399,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk)))));
        tracep->chgIData(oldp+2400,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q)
                                      ? (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux 
                                                 >> 0x20U))
                                      : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux))),32);
        tracep->chgBit(oldp+2401,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__rvalid));
        tracep->chgIData(oldp+2402,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                      ? 0U : (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                                      >> 
                                                      (0x20U 
                                                       & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                          << 5U)))))),32);
        tracep->chgCData(oldp+2403,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 2U : (3U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (1U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(2U) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->chgBit(oldp+2404,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->chgBit(oldp+2405,((1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                         & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk))))));
        tracep->chgIData(oldp+2406,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage)),32);
        tracep->chgIData(oldp+2407,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                             >> 0x20U))),32);
        tracep->chgIData(oldp+2408,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                             >> (0x20U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    << 5U))))),32);
        tracep->chgQData(oldp+2409,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rom_rdata),64);
        tracep->chgQData(oldp+2411,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_q),64);
        tracep->chgBit(oldp+2413,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i));
        tracep->chgBit(oldp+2414,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellout__dap__td_o));
        tracep->chgBit(oldp+2415,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellout__dap__tdo_oe_o));
        tracep->chgIData(oldp+2416,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage
                                             [(3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))] 
                                             >> 2U))),32);
        tracep->chgCData(oldp+2417,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage
                                                  [
                                                  (3U 
                                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))]))),2);
        tracep->chgQData(oldp+2418,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_d),41);
        tracep->chgCData(oldp+2420,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d),5);
        tracep->chgCData(oldp+2421,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d),5);
        tracep->chgBit(oldp+2422,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir)
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q)
                                          : ((1U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                              ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q
                                              : ((0x10U 
                                                  == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                  ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q
                                                  : 
                                                 ((0x11U 
                                                   == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                   ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_q)
                                                   : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q))))))));
        tracep->chgBit(oldp+2423,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i)))));
        tracep->chgCData(oldp+2424,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk)
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr))))))),3);
        tracep->chgCData(oldp+2425,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                      == (4U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr)))
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi))))))),3);
        tracep->chgCData(oldp+2426,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray),3);
        tracep->chgBit(oldp+2427,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty));
        tracep->chgBit(oldp+2428,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                   == (4U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr)))));
        tracep->chgCData(oldp+2429,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_rptr__DOT__intq),3);
        tracep->chgCData(oldp+2430,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk)
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr))))))),3);
        tracep->chgQData(oldp+2431,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage
                                    [(3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))]),34);
        tracep->chgCData(oldp+2433,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                      == (4U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr)))
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi))))))),3);
        tracep->chgCData(oldp+2434,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray),3);
        tracep->chgBit(oldp+2435,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_incr_wptr));
        tracep->chgBit(oldp+2436,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk));
        tracep->chgBit(oldp+2437,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                   == (4U ^ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr)))));
        tracep->chgCData(oldp+2438,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_rptr__DOT__intq),3);
        tracep->chgBit(oldp+2439,((1U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_d_o[2U] 
                                          >> 0x15U) 
                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom)))));
        tracep->chgBit(oldp+2440,((((1U == (3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                  >> 0xbU))) 
                                    & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                          >> 0xaU))) 
                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack))));
        tracep->chgBit(oldp+2441,((1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                         & ((1U == 
                                             (3U & 
                                              ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU)))
                                             ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xaU))
                                             : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xaU))))));
        tracep->chgIData(oldp+2442,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q)
                                       ? (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux 
                                                  >> 0x20U))
                                       : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux)) 
                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask)),32);
        tracep->chgIData(oldp+2443,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask),32);
        tracep->chgBit(oldp+2444,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full) 
                                         | (((1U & 
                                              ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                               >> 1U)) 
                                             == (1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 1U)))
                                             ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                - (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                                             : (((IData)(1U) 
                                                 - (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)) 
                                                + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))));
        tracep->chgBit(oldp+2445,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack))));
        tracep->chgBit(oldp+2446,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        tracep->chgBit(oldp+2447,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full) 
                                         | (((1U & 
                                              ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                               >> 1U)) 
                                             == (1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 1U)))
                                             ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                - (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                                             : (((IData)(1U) 
                                                 - (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)) 
                                                + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))));
        tracep->chgBit(oldp+2448,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid))));
        tracep->chgBit(oldp+2449,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->chgBit(oldp+2450,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full) 
                                         | (((1U & 
                                              ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                               >> 1U)) 
                                             == (1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 1U)))
                                             ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                - (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                                             : (((IData)(1U) 
                                                 - (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)) 
                                                + (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))));
        tracep->chgBit(oldp+2451,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                   & (((1U == (3U & 
                                               ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xbU))) 
                                       & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                             >> 0xaU))) 
                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack)))));
        tracep->chgQData(oldp+2452,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid))
                                      ? ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword)) 
                                         << 1U) : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage)),33);
        tracep->chgBit(oldp+2454,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending));
        tracep->chgBit(oldp+2455,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending));
        tracep->chgBit(oldp+2456,((1U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                          >> 0x15U) 
                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar)))));
        tracep->chgBit(oldp+2457,((((1U == (3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                  >> 0xbU))) 
                                    & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                          >> 0xaU))) 
                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->chgBit(oldp+2458,((1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                         & ((1U == 
                                             (3U & 
                                              ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU)))
                                             ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xaU))
                                             : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xaU))))));
        tracep->chgIData(oldp+2459,((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__rdata_o 
                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rmask)),32);
        tracep->chgCData(oldp+2460,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->chgBit(oldp+2461,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->chgSData(oldp+2462,(((0x33U >= (0x3fU 
                                                & ((IData)(0xdU) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                      ? (0x1fffU & (IData)(
                                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(0xdU) 
                                                                * 
                                                                (3U 
                                                                 & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                      : 0U)),13);
        tracep->chgCData(oldp+2463,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->chgBit(oldp+2464,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))));
        tracep->chgCData(oldp+2465,(((0x13U >= (0x1fU 
                                                & ((IData)(5U) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                      ? (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                      : 0U)),5);
        tracep->chgCData(oldp+2466,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->chgBit(oldp+2467,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                   & (((1U == (3U & 
                                               ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xbU))) 
                                       & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                             >> 0xaU))) 
                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_ack)))));
        tracep->chgQData(oldp+2468,(((0x83U >= (0xffU 
                                                & ((IData)(0x21U) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                      ? (0x1ffffffffULL 
                                         & (((0U == 
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
        tracep->chgQData(oldp+2470,((0x1ffffffffULL 
                                     & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
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
                                          : 0ULL)))),33);
        tracep->chgBit(oldp+2472,((1U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)) 
                                         & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[0U]))));
        tracep->chgBit(oldp+2473,((1U & (((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__hw2reg[0U])
                                           ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__hw2reg[0U] 
                                              >> 1U)
                                           : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT____Vcellout__u_intr_state0__q)) 
                                         & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__timer0__DOT__u_reg__DOT__intr_state0_we)) 
                                            | (~ (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[0U] 
                                                  >> 1U)))))));
        tracep->chgIData(oldp+2474,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__num_req_outstanding),17);
        tracep->chgBit(oldp+2475,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_req_pending));
        tracep->chgBit(oldp+2476,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_rsp_pending));
        tracep->chgIData(oldp+2477,(vlTOPp->gpio_i),32);
        tracep->chgIData(oldp+2478,((((~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_q) 
                                      & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[4U])),32);
        tracep->chgIData(oldp+2479,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_q 
                                      & (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d)) 
                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[3U])),32);
        tracep->chgIData(oldp+2480,(((((((~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_q) 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[4U]) 
                                       | ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_q 
                                           & (~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d)) 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[3U])) 
                                      | ((~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[1U])) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[2U]))),32);
        tracep->chgBit(oldp+2481,((1U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)) 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [6U][0U]))));
        tracep->chgBit(oldp+2482,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_state_we) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[6U] 
                                            >> 0x15U)))));
        tracep->chgIData(oldp+2483,((((0x200000U & 
                                       vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[6U])
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
        tracep->chgBit(oldp+2484,((1U & vlTOPp->gpio_i)));
        tracep->chgBit(oldp+2485,((1U & ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q)
                                          : vlTOPp->gpio_i))));
        tracep->chgBit(oldp+2486,((1U & (vlTOPp->gpio_i 
                                         >> 1U))));
        tracep->chgBit(oldp+2487,((1U & ((2U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 1U)))));
        tracep->chgBit(oldp+2488,((1U & (vlTOPp->gpio_i 
                                         >> 2U))));
        tracep->chgBit(oldp+2489,((1U & ((4U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 2U)))));
        tracep->chgBit(oldp+2490,((1U & (vlTOPp->gpio_i 
                                         >> 3U))));
        tracep->chgBit(oldp+2491,((1U & ((8U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 3U)))));
        tracep->chgBit(oldp+2492,((1U & (vlTOPp->gpio_i 
                                         >> 4U))));
        tracep->chgBit(oldp+2493,((1U & ((0x10U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 4U)))));
        tracep->chgBit(oldp+2494,((1U & (vlTOPp->gpio_i 
                                         >> 5U))));
        tracep->chgBit(oldp+2495,((1U & ((0x20U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 5U)))));
        tracep->chgBit(oldp+2496,((1U & (vlTOPp->gpio_i 
                                         >> 6U))));
        tracep->chgBit(oldp+2497,((1U & ((0x40U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 6U)))));
        tracep->chgBit(oldp+2498,((1U & (vlTOPp->gpio_i 
                                         >> 7U))));
        tracep->chgBit(oldp+2499,((1U & ((0x80U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 7U)))));
        tracep->chgBit(oldp+2500,((1U & (vlTOPp->gpio_i 
                                         >> 8U))));
        tracep->chgBit(oldp+2501,((1U & ((0x100U & 
                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 8U)))));
        tracep->chgBit(oldp+2502,((1U & (vlTOPp->gpio_i 
                                         >> 9U))));
        tracep->chgBit(oldp+2503,((1U & ((0x200U & 
                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 9U)))));
        tracep->chgBit(oldp+2504,((1U & (vlTOPp->gpio_i 
                                         >> 0xaU))));
        tracep->chgBit(oldp+2505,((1U & ((0x400U & 
                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xaU)))));
        tracep->chgBit(oldp+2506,((1U & (vlTOPp->gpio_i 
                                         >> 0xbU))));
        tracep->chgBit(oldp+2507,((1U & ((0x800U & 
                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xbU)))));
        tracep->chgBit(oldp+2508,((1U & (vlTOPp->gpio_i 
                                         >> 0xcU))));
        tracep->chgBit(oldp+2509,((1U & ((0x1000U & 
                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xcU)))));
        tracep->chgBit(oldp+2510,((1U & (vlTOPp->gpio_i 
                                         >> 0xdU))));
        tracep->chgBit(oldp+2511,((1U & ((0x2000U & 
                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xdU)))));
        tracep->chgBit(oldp+2512,((1U & (vlTOPp->gpio_i 
                                         >> 0xeU))));
        tracep->chgBit(oldp+2513,((1U & ((0x4000U & 
                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xeU)))));
        tracep->chgBit(oldp+2514,((1U & (vlTOPp->gpio_i 
                                         >> 0xfU))));
        tracep->chgBit(oldp+2515,((1U & ((0x8000U & 
                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xfU)))));
        tracep->chgBit(oldp+2516,((1U & (vlTOPp->gpio_i 
                                         >> 0x10U))));
        tracep->chgBit(oldp+2517,((1U & ((0x10000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x10U)))));
        tracep->chgBit(oldp+2518,((1U & (vlTOPp->gpio_i 
                                         >> 0x11U))));
        tracep->chgBit(oldp+2519,((1U & ((0x20000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x11U)))));
        tracep->chgBit(oldp+2520,((1U & (vlTOPp->gpio_i 
                                         >> 0x12U))));
        tracep->chgBit(oldp+2521,((1U & ((0x40000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x12U)))));
        tracep->chgBit(oldp+2522,((1U & (vlTOPp->gpio_i 
                                         >> 0x13U))));
        tracep->chgBit(oldp+2523,((1U & ((0x80000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x13U)))));
        tracep->chgBit(oldp+2524,((1U & (vlTOPp->gpio_i 
                                         >> 0x14U))));
        tracep->chgBit(oldp+2525,((1U & ((0x100000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x14U)))));
        tracep->chgBit(oldp+2526,((1U & (vlTOPp->gpio_i 
                                         >> 0x15U))));
        tracep->chgBit(oldp+2527,((1U & ((0x200000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x15U)))));
        tracep->chgBit(oldp+2528,((1U & (vlTOPp->gpio_i 
                                         >> 0x16U))));
        tracep->chgBit(oldp+2529,((1U & ((0x400000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x16U)))));
        tracep->chgBit(oldp+2530,((1U & (vlTOPp->gpio_i 
                                         >> 0x17U))));
        tracep->chgBit(oldp+2531,((1U & ((0x800000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x17U)))));
        tracep->chgBit(oldp+2532,((1U & (vlTOPp->gpio_i 
                                         >> 0x18U))));
        tracep->chgBit(oldp+2533,((1U & ((0x1000000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x18U)))));
        tracep->chgBit(oldp+2534,((1U & (vlTOPp->gpio_i 
                                         >> 0x19U))));
        tracep->chgBit(oldp+2535,((1U & ((0x2000000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x19U)))));
        tracep->chgBit(oldp+2536,((1U & (vlTOPp->gpio_i 
                                         >> 0x1aU))));
        tracep->chgBit(oldp+2537,((1U & ((0x4000000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1aU)))));
        tracep->chgBit(oldp+2538,((1U & (vlTOPp->gpio_i 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+2539,((1U & ((0x8000000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1bU)))));
        tracep->chgBit(oldp+2540,((1U & (vlTOPp->gpio_i 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+2541,((1U & ((0x10000000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1cU)))));
        tracep->chgBit(oldp+2542,((1U & (vlTOPp->gpio_i 
                                         >> 0x1dU))));
        tracep->chgBit(oldp+2543,((1U & ((0x20000000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1dU)))));
        tracep->chgBit(oldp+2544,((1U & (vlTOPp->gpio_i 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+2545,((1U & ((0x40000000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1eU)))));
        tracep->chgBit(oldp+2546,((1U & (vlTOPp->gpio_i 
                                         >> 0x1fU))));
        tracep->chgBit(oldp+2547,((1U & ((0x80000000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1fU)))));
        tracep->chgCData(oldp+2548,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count),2);
        tracep->chgBit(oldp+2549,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data_R));
        tracep->chgBit(oldp+2550,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data));
        tracep->chgIData(oldp+2551,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__tlul_data
                                      : 0U)),32);
        tracep->chgBit(oldp+2552,((1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                          >> 0x15U) 
                                         & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar)))));
        tracep->chgBit(oldp+2553,((((1U == (3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                  >> 0xbU))) 
                                    & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                          >> 0xaU))) 
                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_ack))));
        tracep->chgBit(oldp+2554,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_valid));
        tracep->chgBit(oldp+2555,((1U & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                         & ((1U == 
                                             (3U & 
                                              ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU)))
                                             ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xaU))
                                             : ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xaU))))));
        tracep->chgIData(oldp+2556,((((IData)(vlTOPp->reset_ni)
                                       ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__tlul_data
                                       : 0U) & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask)),32);
        tracep->chgIData(oldp+2557,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask),32);
        tracep->chgCData(oldp+2558,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 2U : (3U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (1U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(2U) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->chgBit(oldp+2559,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_ack))));
        tracep->chgSData(oldp+2560,(((0x19U >= (0x1fU 
                                                & ((IData)(0xdU) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                      ? (0x1fffU & 
                                         (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                          >> (0x1fU 
                                              & ((IData)(0xdU) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                      : 0U)),13);
        tracep->chgCData(oldp+2561,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 2U : (3U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (1U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(2U) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->chgBit(oldp+2562,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rspfifo_wvalid))));
        tracep->chgCData(oldp+2563,(((9U >= (0xfU & 
                                             ((IData)(5U) 
                                              * (1U 
                                                 & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                      ? (0x1fU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                      : 0U)),5);
        tracep->chgCData(oldp+2564,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 2U : (3U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (1U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(2U) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->chgBit(oldp+2565,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                   & (((1U == (3U & 
                                               ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xbU))) 
                                       & (~ ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                             >> 0xaU))) 
                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_ack)))));
        tracep->chgQData(oldp+2566,(((0x41U >= (0x7fU 
                                                & ((IData)(0x21U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                      ? (0x1ffffffffULL 
                                         & (((0U == 
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
        tracep->chgQData(oldp+2568,((0x1ffffffffULL 
                                     & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
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
                                          : 0ULL)))),33);
        tracep->chgBit(oldp+2570,(((IData)(vlTOPp->reset_ni) 
                                   & (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                         >> 1U)))));
        tracep->chgBit(oldp+2571,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_q));
        tracep->chgBit(oldp+2572,(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                                     | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)((0U 
                                                  != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__addr_hit)))) 
                                   | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__wr_err))));
        tracep->chgBit(oldp+2573,((((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                             >> 9U)) 
                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                   & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
        tracep->chgBit(oldp+2574,((((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                             >> 0x24U)) 
                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                   & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
        tracep->chgBit(oldp+2575,((1U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)) 
                                         & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U]))));
        tracep->chgBit(oldp+2576,((1U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)) 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [0U][0U]))));
        tracep->chgBit(oldp+2577,((1U & (((0x80000000U 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                           ? vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[2U]
                                           : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q)) 
                                         & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_watermark_we)) 
                                            | (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 1U)))))));
        tracep->chgBit(oldp+2578,((1U & (((0x20000000U 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                           ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                              >> 0x1eU)
                                           : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q)) 
                                         & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_watermark_we)) 
                                            | (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 2U)))))));
        tracep->chgBit(oldp+2579,((1U & (((0x8000000U 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                           ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                              >> 0x1cU)
                                           : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q)) 
                                         & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_empty_we)) 
                                            | (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 3U)))))));
        tracep->chgBit(oldp+2580,((1U & (((0x2000000U 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                           ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                              >> 0x1aU)
                                           : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)) 
                                         & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_overflow_we)) 
                                            | (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 4U)))))));
        tracep->chgBit(oldp+2581,((1U & (((0x800000U 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                           ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                              >> 0x18U)
                                           : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q)) 
                                         & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_frame_err_we)) 
                                            | (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 5U)))))));
        tracep->chgBit(oldp+2582,((1U & (((0x200000U 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                           ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                              >> 0x16U)
                                           : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q)) 
                                         & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_break_err_we)) 
                                            | (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 6U)))))));
        tracep->chgBit(oldp+2583,((1U & (((0x80000U 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                           ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                              >> 0x14U)
                                           : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q)) 
                                         & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_timeout_we)) 
                                            | (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 7U)))))));
        tracep->chgBit(oldp+2584,((1U & (((0x20000U 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U])
                                           ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U] 
                                              >> 0x12U)
                                           : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q)) 
                                         & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_parity_err_we)) 
                                            | (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 8U)))))));
        tracep->chgCData(oldp+2585,((7U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_rxilvl_we)
                                            ? ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [0U][1U] 
                                                << 0x1dU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [0U][0U] 
                                                  >> 3U))
                                            : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__hw2reg[1U]))),3);
        tracep->chgCData(oldp+2586,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_txilvl_we)
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
        tracep->chgCData(oldp+2587,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
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
        tracep->chgIData(oldp+2588,(((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[0U])
                                      ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_timeout)
                                          ? 0U : (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth) 
                                                   != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth_prev_q))
                                                   ? 0U
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth))
                                                    ? 0U
                                                    : 
                                                   (0xffffffU 
                                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q)
                                                        ? 
                                                       ((IData)(1U) 
                                                        + vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q)
                                                        : vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q)))))
                                      : 0U)),24);
        tracep->chgBit(oldp+2589,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth) 
                                   != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth_prev_q))));
        tracep->chgBit(oldp+2590,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
                                   & ((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__event_rx_frame_err)) 
                                      | (0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_data))))));
        tracep->chgBit(oldp+2591,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_d) 
                                   & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_prev_q)))));
        tracep->chgBit(oldp+2592,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_d) 
                                   & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_prev_q)))));
        tracep->chgBit(oldp+2593,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle_q))) 
                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle))));
        tracep->chgBit(oldp+2594,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_wvalid) 
                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__full))));
        tracep->chgBit(oldp+2595,(((0x4000000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__reg2hw[2U])
                                    ? (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync) 
                                        & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                           | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2))) 
                                       | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                          & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2)))
                                    : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync))));
        tracep->chgBit(oldp+2596,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync) 
                                    & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                       | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2))) 
                                   | ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2)))));
        tracep->chgBit(oldp+2597,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_rready))));
        tracep->chgCData(oldp+2598,((0xffU & (((0U 
                                                == 
                                                (0x18U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    << 3U)))
                                                ? 0U
                                                : (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[
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
        tracep->chgCData(oldp+2599,((0xffU & (((0U 
                                                == 
                                                (0x18U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    << 3U)))
                                                ? 0U
                                                : (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
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
        tracep->chgBit(oldp+2600,((1U & ((0x800000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[8U])
                                          ? (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[8U] 
                                             >> 0x16U)
                                          : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_temp)))));
        tracep->chgBit(oldp+2601,((1U & ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)) 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [7U][0U]))));
        tracep->chgBit(oldp+2602,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_watermark_d) 
                                   & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_watermark_q)))));
        tracep->chgBit(oldp+2603,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__rx_watermark_d) 
                                   & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__rx_watermark_q)))));
        tracep->chgBit(oldp+2604,(((~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__target_idle)) 
                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__scl_high_cnt 
                                      > vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[0U]))));
        tracep->chgCData(oldp+2605,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
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
        tracep->chgCData(oldp+2606,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__full)
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
        tracep->chgBit(oldp+2607,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_rvalid) 
                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__fmt_fifo_rready)) 
                                   & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__under_rst)))));
        tracep->chgSData(oldp+2608,(((0x19fU >= (0x1ffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                      ? (0x1fffU & 
                                         (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                            ? 0U : 
                                           (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__storage[
                                            ((IData)(1U) 
                                             + (0xfU 
                                                & (((IData)(0xdU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
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
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                      : 0U)),13);
        tracep->chgSData(oldp+2609,((0x1fffU & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fmtfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
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
        tracep->chgBit(oldp+2610,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__rx_fifo_rvalid) 
                                    & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[9U] 
                                       >> 0x1aU)) & 
                                   (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__under_rst)))));
        tracep->chgCData(oldp+2611,((0xffU & (((0U 
                                                == 
                                                (0x18U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    << 3U)))
                                                ? 0U
                                                : (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_rxfifo__DOT__gen_normal_fifo__DOT__storage[
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
        tracep->chgBit(oldp+2612,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__tx_fifo_rvalid) 
                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__tx_fifo_rready)) 
                                   & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__under_rst)))));
        tracep->chgCData(oldp+2613,((0xffU & (((0U 
                                                == 
                                                (0x18U 
                                                 & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    << 3U)))
                                                ? 0U
                                                : (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__storage[
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
        tracep->chgCData(oldp+2614,((0xffU & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                               & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[1U] 
                                                  >> 4U))
                                               ? ((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[2U] 
                                                   << 0x1bU) 
                                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[1U] 
                                                     >> 5U))
                                               : ((
                                                   (0U 
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
        tracep->chgBit(oldp+2615,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__acq_fifo_rvalid) 
                                    & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[1U] 
                                        >> 0x10U) & 
                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[1U] 
                                        >> 0xdU))) 
                                   & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__under_rst)))));
        tracep->chgSData(oldp+2616,(((0x13fU >= (0x1ffU 
                                                 & ((IData)(0xaU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                      ? (0x3ffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0xaU) 
                                                         * 
                                                         (0x1fU 
                                                          & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                     ? 0U
                                                     : 
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__storage[
                                                     ((IData)(1U) 
                                                      + 
                                                      (0xfU 
                                                       & (((IData)(0xaU) 
                                                           * 
                                                           (0x1fU 
                                                            & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                          >> 5U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
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
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0xaU) 
                                                          * 
                                                          (0x1fU 
                                                           & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_acqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                      : 0U)),10);
        tracep->chgBit(oldp+2617,(((0x7fU & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__input_byte) 
                                              >> 1U) 
                                             & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[3U] 
                                                 << 0x19U) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[2U] 
                                                   >> 7U)))) 
                                   == (0x7fU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[3U] 
                                                 << 0x12U) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[2U] 
                                                   >> 0xeU))))));
        tracep->chgBit(oldp+2618,(((0x7fU & (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__i2c_core__DOT__u_i2c_fsm__DOT__input_byte) 
                                              >> 1U) 
                                             & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[2U] 
                                                 << 7U) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[1U] 
                                                   >> 0x19U)))) 
                                   == (0x7fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__i2c0__DOT__reg2hw[2U]))));
        tracep->chgCData(oldp+2619,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hfifo_rspvalid),2);
        tracep->chgCData(oldp+2620,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hfifo_rspvalid),2);
    }
}
