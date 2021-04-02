// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vazadi_soc_top.h for the primary calling header

#include "Vazadi_soc_top.h"
#include "Vazadi_soc_top__Syms.h"

void Vazadi_soc_top::_settle__TOP__3(Vazadi_soc_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vazadi_soc_top::_settle__TOP__3\n"); );
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp16[3];
    // Body
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x200000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [9U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffffU 
                                                 == 
                                                 (0x3fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [9U] 
                                                             >> 1U))))))) 
                                  << 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x400000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [9U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffffU 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [9U] 
                                                             >> 1U))))))) 
                                  << 0x16U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x800000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [9U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xffffffU 
                                                 == 
                                                 (0xffffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [9U] 
                                                             >> 1U))))))) 
                                  << 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x1000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [9U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffffU 
                                                  == 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [9U] 
                                                              >> 1U))))))) 
                                   << 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x2000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [9U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffffU 
                                                  == 
                                                  (0x3ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [9U] 
                                                              >> 1U))))))) 
                                   << 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x4000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [9U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffffU 
                                                  == 
                                                  (0x7ffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [9U] 
                                                              >> 1U))))))) 
                                   << 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x8000000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [9U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xfffffffU 
                                                  == 
                                                  (0xfffffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [9U] 
                                                              >> 1U))))))) 
                                   << 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x10000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [9U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [9U] 
                                                               >> 1U))))))) 
                                    << 0x1cU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x20000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [9U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffffU 
                                                   == 
                                                   (0x3fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [9U] 
                                                               >> 1U))))))) 
                                    << 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x40000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [9U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffffU 
                                                   == 
                                                   (0x7fffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [9U] 
                                                               >> 1U))))))) 
                                    << 0x1eU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x80000000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [9U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xffffffffU 
                                                   == (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [9U] 
                                                               >> 1U)))))) 
                                    << 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (2U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xaU] 
                                            >> 3U))) 
                              | (~ (IData)((3U == (3U 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xaU] 
                                                              >> 1U))))))) 
                             << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (4U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xaU] 
                                            >> 3U))) 
                              | (~ (IData)((7U == (7U 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xaU] 
                                                              >> 1U))))))) 
                             << 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (8U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xaU] 
                                            >> 3U))) 
                              | (~ (IData)((0xfU == 
                                            (0xfU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xaU] 
                                                             >> 1U))))))) 
                             << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x10U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xaU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fU 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xaU] 
                                                              >> 1U))))))) 
                                << 4U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x20U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xaU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fU 
                                               == (0x3fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xaU] 
                                                              >> 1U))))))) 
                                << 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x40U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xaU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fU 
                                               == (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xaU] 
                                                              >> 1U))))))) 
                                << 6U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x80U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xaU] 
                                               >> 3U))) 
                                 | (~ (IData)((0xffU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xaU] 
                                                              >> 1U))))))) 
                                << 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x100U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xaU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffU 
                                                == 
                                                (0x1ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xaU] 
                                                            >> 1U))))))) 
                                 << 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x200U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xaU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffU 
                                                == 
                                                (0x3ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xaU] 
                                                            >> 1U))))))) 
                                 << 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x400U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xaU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffU 
                                                == 
                                                (0x7ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xaU] 
                                                            >> 1U))))))) 
                                 << 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x800U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xaU] 
                                                >> 3U))) 
                                  | (~ (IData)((0xfffU 
                                                == 
                                                (0xfffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xaU] 
                                                            >> 1U))))))) 
                                 << 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x1000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xaU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffU 
                                                 == 
                                                 (0x1fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xaU] 
                                                             >> 1U))))))) 
                                  << 0xcU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x2000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xaU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffU 
                                                 == 
                                                 (0x3fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xaU] 
                                                             >> 1U))))))) 
                                  << 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x4000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xaU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffU 
                                                 == 
                                                 (0x7fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xaU] 
                                                             >> 1U))))))) 
                                  << 0xeU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x8000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xaU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xffffU 
                                                 == 
                                                 (0xffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xaU] 
                                                             >> 1U))))))) 
                                  << 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x10000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xaU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffU 
                                                  == 
                                                  (0x1ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xaU] 
                                                              >> 1U))))))) 
                                   << 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x20000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xaU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffU 
                                                  == 
                                                  (0x3ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xaU] 
                                                              >> 1U))))))) 
                                   << 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x40000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xaU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffU 
                                                  == 
                                                  (0x7ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xaU] 
                                                              >> 1U))))))) 
                                   << 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x80000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xaU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xfffffU 
                                                  == 
                                                  (0xfffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xaU] 
                                                              >> 1U))))))) 
                                   << 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x100000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xaU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffU 
                                                   == 
                                                   (0x1fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xaU] 
                                                               >> 1U))))))) 
                                    << 0x14U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x200000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xaU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffU 
                                                   == 
                                                   (0x3fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xaU] 
                                                               >> 1U))))))) 
                                    << 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x400000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xaU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffU 
                                                   == 
                                                   (0x7fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xaU] 
                                                               >> 1U))))))) 
                                    << 0x16U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x800000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xaU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xffffffU 
                                                   == 
                                                   (0xffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xaU] 
                                                               >> 1U))))))) 
                                    << 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x1000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xaU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x1ffffffU 
                                                    == 
                                                    (0x1ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xaU] 
                                                                >> 1U))))))) 
                                     << 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x2000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xaU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x3ffffffU 
                                                    == 
                                                    (0x3ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xaU] 
                                                                >> 1U))))))) 
                                     << 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x4000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xaU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x7ffffffU 
                                                    == 
                                                    (0x7ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xaU] 
                                                                >> 1U))))))) 
                                     << 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x8000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xaU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0xfffffffU 
                                                    == 
                                                    (0xfffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xaU] 
                                                                >> 1U))))))) 
                                     << 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x10000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xaU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x1fffffffU 
                                                     == 
                                                     (0x1fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xaU] 
                                                                 >> 1U))))))) 
                                      << 0x1cU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x20000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xaU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x3fffffffU 
                                                     == 
                                                     (0x3fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xaU] 
                                                                 >> 1U))))))) 
                                      << 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x40000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xaU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x7fffffffU 
                                                     == 
                                                     (0x7fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xaU] 
                                                                 >> 1U))))))) 
                                      << 0x1eU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x80000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xaU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0xffffffffU 
                                                     == (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xaU] 
                                                                 >> 1U)))))) 
                                      << 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (2U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xbU] 
                                            >> 3U))) 
                              | (~ (IData)((3U == (3U 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xbU] 
                                                              >> 1U))))))) 
                             << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (4U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xbU] 
                                            >> 3U))) 
                              | (~ (IData)((7U == (7U 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xbU] 
                                                              >> 1U))))))) 
                             << 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (8U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xbU] 
                                            >> 3U))) 
                              | (~ (IData)((0xfU == 
                                            (0xfU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xbU] 
                                                             >> 1U))))))) 
                             << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x10U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xbU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fU 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xbU] 
                                                              >> 1U))))))) 
                                << 4U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x20U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xbU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fU 
                                               == (0x3fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xbU] 
                                                              >> 1U))))))) 
                                << 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x40U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xbU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fU 
                                               == (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xbU] 
                                                              >> 1U))))))) 
                                << 6U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x80U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xbU] 
                                               >> 3U))) 
                                 | (~ (IData)((0xffU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xbU] 
                                                              >> 1U))))))) 
                                << 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x100U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xbU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffU 
                                                == 
                                                (0x1ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xbU] 
                                                            >> 1U))))))) 
                                 << 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x200U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xbU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffU 
                                                == 
                                                (0x3ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xbU] 
                                                            >> 1U))))))) 
                                 << 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x400U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xbU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffU 
                                                == 
                                                (0x7ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xbU] 
                                                            >> 1U))))))) 
                                 << 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x800U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xbU] 
                                                >> 3U))) 
                                  | (~ (IData)((0xfffU 
                                                == 
                                                (0xfffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xbU] 
                                                            >> 1U))))))) 
                                 << 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x1000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xbU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffU 
                                                 == 
                                                 (0x1fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xbU] 
                                                             >> 1U))))))) 
                                  << 0xcU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x2000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xbU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffU 
                                                 == 
                                                 (0x3fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xbU] 
                                                             >> 1U))))))) 
                                  << 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x4000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xbU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffU 
                                                 == 
                                                 (0x7fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xbU] 
                                                             >> 1U))))))) 
                                  << 0xeU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x8000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xbU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xffffU 
                                                 == 
                                                 (0xffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xbU] 
                                                             >> 1U))))))) 
                                  << 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x10000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xbU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffU 
                                                  == 
                                                  (0x1ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xbU] 
                                                              >> 1U))))))) 
                                   << 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x20000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xbU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffU 
                                                  == 
                                                  (0x3ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xbU] 
                                                              >> 1U))))))) 
                                   << 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x40000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xbU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffU 
                                                  == 
                                                  (0x7ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xbU] 
                                                              >> 1U))))))) 
                                   << 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x80000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xbU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xfffffU 
                                                  == 
                                                  (0xfffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xbU] 
                                                              >> 1U))))))) 
                                   << 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x100000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xbU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffU 
                                                   == 
                                                   (0x1fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xbU] 
                                                               >> 1U))))))) 
                                    << 0x14U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x200000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xbU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffU 
                                                   == 
                                                   (0x3fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xbU] 
                                                               >> 1U))))))) 
                                    << 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x400000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xbU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffU 
                                                   == 
                                                   (0x7fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xbU] 
                                                               >> 1U))))))) 
                                    << 0x16U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x800000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xbU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xffffffU 
                                                   == 
                                                   (0xffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xbU] 
                                                               >> 1U))))))) 
                                    << 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x1000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xbU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x1ffffffU 
                                                    == 
                                                    (0x1ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xbU] 
                                                                >> 1U))))))) 
                                     << 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x2000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xbU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x3ffffffU 
                                                    == 
                                                    (0x3ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xbU] 
                                                                >> 1U))))))) 
                                     << 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x4000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xbU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x7ffffffU 
                                                    == 
                                                    (0x7ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xbU] 
                                                                >> 1U))))))) 
                                     << 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x8000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xbU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0xfffffffU 
                                                    == 
                                                    (0xfffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xbU] 
                                                                >> 1U))))))) 
                                     << 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x10000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xbU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x1fffffffU 
                                                     == 
                                                     (0x1fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xbU] 
                                                                 >> 1U))))))) 
                                      << 0x1cU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x20000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xbU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x3fffffffU 
                                                     == 
                                                     (0x3fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xbU] 
                                                                 >> 1U))))))) 
                                      << 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x40000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xbU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x7fffffffU 
                                                     == 
                                                     (0x7fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xbU] 
                                                                 >> 1U))))))) 
                                      << 0x1eU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x80000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xbU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0xffffffffU 
                                                     == (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xbU] 
                                                                 >> 1U)))))) 
                                      << 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (2U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xcU] 
                                            >> 3U))) 
                              | (~ (IData)((3U == (3U 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xcU] 
                                                              >> 1U))))))) 
                             << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (4U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xcU] 
                                            >> 3U))) 
                              | (~ (IData)((7U == (7U 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xcU] 
                                                              >> 1U))))))) 
                             << 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (8U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xcU] 
                                            >> 3U))) 
                              | (~ (IData)((0xfU == 
                                            (0xfU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xcU] 
                                                             >> 1U))))))) 
                             << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x10U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xcU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fU 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xcU] 
                                                              >> 1U))))))) 
                                << 4U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x20U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xcU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fU 
                                               == (0x3fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xcU] 
                                                              >> 1U))))))) 
                                << 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x40U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xcU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fU 
                                               == (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xcU] 
                                                              >> 1U))))))) 
                                << 6U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x80U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xcU] 
                                               >> 3U))) 
                                 | (~ (IData)((0xffU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xcU] 
                                                              >> 1U))))))) 
                                << 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x100U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xcU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffU 
                                                == 
                                                (0x1ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xcU] 
                                                            >> 1U))))))) 
                                 << 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x200U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xcU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffU 
                                                == 
                                                (0x3ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xcU] 
                                                            >> 1U))))))) 
                                 << 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x400U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xcU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffU 
                                                == 
                                                (0x7ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xcU] 
                                                            >> 1U))))))) 
                                 << 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x800U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xcU] 
                                                >> 3U))) 
                                  | (~ (IData)((0xfffU 
                                                == 
                                                (0xfffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xcU] 
                                                            >> 1U))))))) 
                                 << 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x1000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xcU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffU 
                                                 == 
                                                 (0x1fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xcU] 
                                                             >> 1U))))))) 
                                  << 0xcU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x2000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xcU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffU 
                                                 == 
                                                 (0x3fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xcU] 
                                                             >> 1U))))))) 
                                  << 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x4000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xcU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffU 
                                                 == 
                                                 (0x7fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xcU] 
                                                             >> 1U))))))) 
                                  << 0xeU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x8000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xcU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xffffU 
                                                 == 
                                                 (0xffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xcU] 
                                                             >> 1U))))))) 
                                  << 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x10000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xcU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffU 
                                                  == 
                                                  (0x1ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xcU] 
                                                              >> 1U))))))) 
                                   << 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x20000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xcU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffU 
                                                  == 
                                                  (0x3ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xcU] 
                                                              >> 1U))))))) 
                                   << 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x40000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xcU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffU 
                                                  == 
                                                  (0x7ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xcU] 
                                                              >> 1U))))))) 
                                   << 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x80000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xcU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xfffffU 
                                                  == 
                                                  (0xfffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xcU] 
                                                              >> 1U))))))) 
                                   << 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x100000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xcU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffU 
                                                   == 
                                                   (0x1fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xcU] 
                                                               >> 1U))))))) 
                                    << 0x14U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x200000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xcU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffU 
                                                   == 
                                                   (0x3fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xcU] 
                                                               >> 1U))))))) 
                                    << 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x400000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xcU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffU 
                                                   == 
                                                   (0x7fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xcU] 
                                                               >> 1U))))))) 
                                    << 0x16U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x800000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xcU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xffffffU 
                                                   == 
                                                   (0xffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xcU] 
                                                               >> 1U))))))) 
                                    << 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x1000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xcU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x1ffffffU 
                                                    == 
                                                    (0x1ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xcU] 
                                                                >> 1U))))))) 
                                     << 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x2000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xcU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x3ffffffU 
                                                    == 
                                                    (0x3ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xcU] 
                                                                >> 1U))))))) 
                                     << 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x4000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xcU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x7ffffffU 
                                                    == 
                                                    (0x7ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xcU] 
                                                                >> 1U))))))) 
                                     << 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x8000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xcU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0xfffffffU 
                                                    == 
                                                    (0xfffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xcU] 
                                                                >> 1U))))))) 
                                     << 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x10000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xcU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x1fffffffU 
                                                     == 
                                                     (0x1fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xcU] 
                                                                 >> 1U))))))) 
                                      << 0x1cU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x20000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xcU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x3fffffffU 
                                                     == 
                                                     (0x3fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xcU] 
                                                                 >> 1U))))))) 
                                      << 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x40000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xcU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x7fffffffU 
                                                     == 
                                                     (0x7fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xcU] 
                                                                 >> 1U))))))) 
                                      << 0x1eU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x80000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xcU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0xffffffffU 
                                                     == (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xcU] 
                                                                 >> 1U)))))) 
                                      << 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (2U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xdU] 
                                            >> 3U))) 
                              | (~ (IData)((3U == (3U 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xdU] 
                                                              >> 1U))))))) 
                             << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (4U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xdU] 
                                            >> 3U))) 
                              | (~ (IData)((7U == (7U 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xdU] 
                                                              >> 1U))))))) 
                             << 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (8U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xdU] 
                                            >> 3U))) 
                              | (~ (IData)((0xfU == 
                                            (0xfU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xdU] 
                                                             >> 1U))))))) 
                             << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x10U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xdU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fU 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xdU] 
                                                              >> 1U))))))) 
                                << 4U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x20U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xdU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fU 
                                               == (0x3fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xdU] 
                                                              >> 1U))))))) 
                                << 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x40U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xdU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fU 
                                               == (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xdU] 
                                                              >> 1U))))))) 
                                << 6U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x80U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xdU] 
                                               >> 3U))) 
                                 | (~ (IData)((0xffU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xdU] 
                                                              >> 1U))))))) 
                                << 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x100U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xdU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffU 
                                                == 
                                                (0x1ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xdU] 
                                                            >> 1U))))))) 
                                 << 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x200U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xdU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffU 
                                                == 
                                                (0x3ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xdU] 
                                                            >> 1U))))))) 
                                 << 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x400U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xdU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffU 
                                                == 
                                                (0x7ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xdU] 
                                                            >> 1U))))))) 
                                 << 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x800U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xdU] 
                                                >> 3U))) 
                                  | (~ (IData)((0xfffU 
                                                == 
                                                (0xfffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xdU] 
                                                            >> 1U))))))) 
                                 << 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x1000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xdU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffU 
                                                 == 
                                                 (0x1fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xdU] 
                                                             >> 1U))))))) 
                                  << 0xcU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x2000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xdU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffU 
                                                 == 
                                                 (0x3fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xdU] 
                                                             >> 1U))))))) 
                                  << 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x4000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xdU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffU 
                                                 == 
                                                 (0x7fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xdU] 
                                                             >> 1U))))))) 
                                  << 0xeU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x8000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xdU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xffffU 
                                                 == 
                                                 (0xffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xdU] 
                                                             >> 1U))))))) 
                                  << 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x10000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xdU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffU 
                                                  == 
                                                  (0x1ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xdU] 
                                                              >> 1U))))))) 
                                   << 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x20000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xdU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffU 
                                                  == 
                                                  (0x3ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xdU] 
                                                              >> 1U))))))) 
                                   << 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x40000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xdU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffU 
                                                  == 
                                                  (0x7ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xdU] 
                                                              >> 1U))))))) 
                                   << 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x80000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xdU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xfffffU 
                                                  == 
                                                  (0xfffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xdU] 
                                                              >> 1U))))))) 
                                   << 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x100000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xdU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffU 
                                                   == 
                                                   (0x1fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xdU] 
                                                               >> 1U))))))) 
                                    << 0x14U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x200000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xdU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffU 
                                                   == 
                                                   (0x3fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xdU] 
                                                               >> 1U))))))) 
                                    << 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x400000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xdU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffU 
                                                   == 
                                                   (0x7fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xdU] 
                                                               >> 1U))))))) 
                                    << 0x16U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x800000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xdU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xffffffU 
                                                   == 
                                                   (0xffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xdU] 
                                                               >> 1U))))))) 
                                    << 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x1000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xdU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x1ffffffU 
                                                    == 
                                                    (0x1ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xdU] 
                                                                >> 1U))))))) 
                                     << 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x2000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xdU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x3ffffffU 
                                                    == 
                                                    (0x3ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xdU] 
                                                                >> 1U))))))) 
                                     << 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x4000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xdU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x7ffffffU 
                                                    == 
                                                    (0x7ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xdU] 
                                                                >> 1U))))))) 
                                     << 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x8000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xdU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0xfffffffU 
                                                    == 
                                                    (0xfffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xdU] 
                                                                >> 1U))))))) 
                                     << 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x10000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xdU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x1fffffffU 
                                                     == 
                                                     (0x1fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xdU] 
                                                                 >> 1U))))))) 
                                      << 0x1cU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x20000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xdU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x3fffffffU 
                                                     == 
                                                     (0x3fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xdU] 
                                                                 >> 1U))))))) 
                                      << 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x40000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xdU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x7fffffffU 
                                                     == 
                                                     (0x7fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xdU] 
                                                                 >> 1U))))))) 
                                      << 0x1eU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x80000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xdU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0xffffffffU 
                                                     == (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xdU] 
                                                                 >> 1U)))))) 
                                      << 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (2U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xeU] 
                                            >> 3U))) 
                              | (~ (IData)((3U == (3U 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xeU] 
                                                              >> 1U))))))) 
                             << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (4U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xeU] 
                                            >> 3U))) 
                              | (~ (IData)((7U == (7U 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xeU] 
                                                              >> 1U))))))) 
                             << 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (8U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xeU] 
                                            >> 3U))) 
                              | (~ (IData)((0xfU == 
                                            (0xfU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xeU] 
                                                             >> 1U))))))) 
                             << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x10U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xeU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fU 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xeU] 
                                                              >> 1U))))))) 
                                << 4U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x20U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xeU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fU 
                                               == (0x3fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xeU] 
                                                              >> 1U))))))) 
                                << 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x40U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xeU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fU 
                                               == (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xeU] 
                                                              >> 1U))))))) 
                                << 6U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x80U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xeU] 
                                               >> 3U))) 
                                 | (~ (IData)((0xffU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xeU] 
                                                              >> 1U))))))) 
                                << 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x100U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xeU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffU 
                                                == 
                                                (0x1ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xeU] 
                                                            >> 1U))))))) 
                                 << 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x200U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xeU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffU 
                                                == 
                                                (0x3ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xeU] 
                                                            >> 1U))))))) 
                                 << 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x400U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xeU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffU 
                                                == 
                                                (0x7ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xeU] 
                                                            >> 1U))))))) 
                                 << 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x800U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xeU] 
                                                >> 3U))) 
                                  | (~ (IData)((0xfffU 
                                                == 
                                                (0xfffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xeU] 
                                                            >> 1U))))))) 
                                 << 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x1000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xeU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffU 
                                                 == 
                                                 (0x1fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xeU] 
                                                             >> 1U))))))) 
                                  << 0xcU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x2000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xeU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffU 
                                                 == 
                                                 (0x3fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xeU] 
                                                             >> 1U))))))) 
                                  << 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x4000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xeU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffU 
                                                 == 
                                                 (0x7fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xeU] 
                                                             >> 1U))))))) 
                                  << 0xeU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x8000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xeU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xffffU 
                                                 == 
                                                 (0xffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xeU] 
                                                             >> 1U))))))) 
                                  << 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x10000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xeU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffU 
                                                  == 
                                                  (0x1ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xeU] 
                                                              >> 1U))))))) 
                                   << 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x20000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xeU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffU 
                                                  == 
                                                  (0x3ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xeU] 
                                                              >> 1U))))))) 
                                   << 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x40000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xeU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffU 
                                                  == 
                                                  (0x7ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xeU] 
                                                              >> 1U))))))) 
                                   << 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x80000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xeU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xfffffU 
                                                  == 
                                                  (0xfffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xeU] 
                                                              >> 1U))))))) 
                                   << 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x100000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xeU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffU 
                                                   == 
                                                   (0x1fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xeU] 
                                                               >> 1U))))))) 
                                    << 0x14U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x200000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xeU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffU 
                                                   == 
                                                   (0x3fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xeU] 
                                                               >> 1U))))))) 
                                    << 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x400000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xeU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffU 
                                                   == 
                                                   (0x7fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xeU] 
                                                               >> 1U))))))) 
                                    << 0x16U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x800000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xeU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xffffffU 
                                                   == 
                                                   (0xffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xeU] 
                                                               >> 1U))))))) 
                                    << 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x1000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xeU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x1ffffffU 
                                                    == 
                                                    (0x1ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xeU] 
                                                                >> 1U))))))) 
                                     << 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x2000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xeU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x3ffffffU 
                                                    == 
                                                    (0x3ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xeU] 
                                                                >> 1U))))))) 
                                     << 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x4000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xeU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x7ffffffU 
                                                    == 
                                                    (0x7ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xeU] 
                                                                >> 1U))))))) 
                                     << 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x8000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xeU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0xfffffffU 
                                                    == 
                                                    (0xfffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xeU] 
                                                                >> 1U))))))) 
                                     << 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x10000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xeU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x1fffffffU 
                                                     == 
                                                     (0x1fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xeU] 
                                                                 >> 1U))))))) 
                                      << 0x1cU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x20000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xeU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x3fffffffU 
                                                     == 
                                                     (0x3fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xeU] 
                                                                 >> 1U))))))) 
                                      << 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x40000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xeU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x7fffffffU 
                                                     == 
                                                     (0x7fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xeU] 
                                                                 >> 1U))))))) 
                                      << 0x1eU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x80000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xeU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0xffffffffU 
                                                     == (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xeU] 
                                                                 >> 1U)))))) 
                                      << 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (2U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xfU] 
                                            >> 3U))) 
                              | (~ (IData)((3U == (3U 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xfU] 
                                                              >> 1U))))))) 
                             << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (4U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xfU] 
                                            >> 3U))) 
                              | (~ (IData)((7U == (7U 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xfU] 
                                                              >> 1U))))))) 
                             << 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (8U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                            [0xfU] 
                                            >> 3U))) 
                              | (~ (IData)((0xfU == 
                                            (0xfU & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xfU] 
                                                             >> 1U))))))) 
                             << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x10U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xfU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fU 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xfU] 
                                                              >> 1U))))))) 
                                << 4U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x20U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xfU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fU 
                                               == (0x3fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xfU] 
                                                              >> 1U))))))) 
                                << 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x40U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xfU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fU 
                                               == (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xfU] 
                                                              >> 1U))))))) 
                                << 6U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x80U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xfU] 
                                               >> 3U))) 
                                 | (~ (IData)((0xffU 
                                               == (0xffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xfU] 
                                                              >> 1U))))))) 
                                << 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x100U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xfU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffU 
                                                == 
                                                (0x1ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xfU] 
                                                            >> 1U))))))) 
                                 << 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x200U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xfU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffU 
                                                == 
                                                (0x3ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xfU] 
                                                            >> 1U))))))) 
                                 << 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x400U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xfU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffU 
                                                == 
                                                (0x7ffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xfU] 
                                                            >> 1U))))))) 
                                 << 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x800U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xfU] 
                                                >> 3U))) 
                                  | (~ (IData)((0xfffU 
                                                == 
                                                (0xfffU 
                                                 & (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                            [0xfU] 
                                                            >> 1U))))))) 
                                 << 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x1000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xfU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffU 
                                                 == 
                                                 (0x1fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xfU] 
                                                             >> 1U))))))) 
                                  << 0xcU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x2000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xfU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffU 
                                                 == 
                                                 (0x3fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xfU] 
                                                             >> 1U))))))) 
                                  << 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x4000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xfU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffU 
                                                 == 
                                                 (0x7fffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xfU] 
                                                             >> 1U))))))) 
                                  << 0xeU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x8000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                 [0xfU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xffffU 
                                                 == 
                                                 (0xffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                             [0xfU] 
                                                             >> 1U))))))) 
                                  << 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x10000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xfU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffU 
                                                  == 
                                                  (0x1ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xfU] 
                                                              >> 1U))))))) 
                                   << 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x20000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xfU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffU 
                                                  == 
                                                  (0x3ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xfU] 
                                                              >> 1U))))))) 
                                   << 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x40000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xfU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffU 
                                                  == 
                                                  (0x7ffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xfU] 
                                                              >> 1U))))))) 
                                   << 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x80000U & (((3U != (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                  [0xfU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xfffffU 
                                                  == 
                                                  (0xfffffU 
                                                   & (IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                              [0xfU] 
                                                              >> 1U))))))) 
                                   << 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x100000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xfU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffU 
                                                   == 
                                                   (0x1fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xfU] 
                                                               >> 1U))))))) 
                                    << 0x14U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x200000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xfU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffU 
                                                   == 
                                                   (0x3fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xfU] 
                                                               >> 1U))))))) 
                                    << 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x400000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xfU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffU 
                                                   == 
                                                   (0x7fffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xfU] 
                                                               >> 1U))))))) 
                                    << 0x16U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x800000U & (((3U != (3U & (
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [0xfU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xffffffU 
                                                   == 
                                                   (0xffffffU 
                                                    & (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                               [0xfU] 
                                                               >> 1U))))))) 
                                    << 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x1000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xfU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x1ffffffU 
                                                    == 
                                                    (0x1ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xfU] 
                                                                >> 1U))))))) 
                                     << 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x2000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xfU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x3ffffffU 
                                                    == 
                                                    (0x3ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xfU] 
                                                                >> 1U))))))) 
                                     << 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x4000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xfU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x7ffffffU 
                                                    == 
                                                    (0x7ffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xfU] 
                                                                >> 1U))))))) 
                                     << 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x8000000U & (((3U != (3U & 
                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [0xfU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0xfffffffU 
                                                    == 
                                                    (0xfffffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                [0xfU] 
                                                                >> 1U))))))) 
                                     << 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x10000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xfU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x1fffffffU 
                                                     == 
                                                     (0x1fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xfU] 
                                                                 >> 1U))))))) 
                                      << 0x1cU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x20000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xfU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x3fffffffU 
                                                     == 
                                                     (0x3fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xfU] 
                                                                 >> 1U))))))) 
                                      << 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x40000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xfU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x7fffffffU 
                                                     == 
                                                     (0x7fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xfU] 
                                                                 >> 1U))))))) 
                                      << 0x1eU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x80000000U & (((3U != (3U & 
                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                [0xfU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0xffffffffU 
                                                     == (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                                 [0xfU] 
                                                                 >> 1U)))))) 
                                      << 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0U] 
        = ((1U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                         [0U] >> 3U))) ? 0ULL : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [0U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[1U] 
        = ((1U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                         [1U] >> 3U))) ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [0U] : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [1U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[2U] 
        = ((1U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                         [2U] >> 3U))) ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [1U] : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [2U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[3U] 
        = ((1U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                         [3U] >> 3U))) ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [2U] : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [3U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[4U] 
        = ((1U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                         [4U] >> 3U))) ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [3U] : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [4U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[5U] 
        = ((1U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                         [5U] >> 3U))) ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [4U] : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [5U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[6U] 
        = ((1U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                         [6U] >> 3U))) ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [5U] : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [6U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[7U] 
        = ((1U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                         [7U] >> 3U))) ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [6U] : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [7U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[8U] 
        = ((1U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                         [8U] >> 3U))) ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [7U] : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [8U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[9U] 
        = ((1U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                         [9U] >> 3U))) ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [8U] : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [9U]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0xaU] 
        = ((1U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                         [0xaU] >> 3U))) ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [9U] : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [0xaU]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0xbU] 
        = ((1U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                         [0xbU] >> 3U))) ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [0xaU] : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [0xbU]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0xcU] 
        = ((1U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                         [0xcU] >> 3U))) ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [0xbU] : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [0xcU]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0xdU] 
        = ((1U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                         [0xdU] >> 3U))) ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [0xcU] : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [0xdU]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0xeU] 
        = ((1U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                         [0xeU] >> 3U))) ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [0xdU] : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [0xeU]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0xfU] 
        = ((1U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                         [0xfU] >> 3U))) ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [0xeU] : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
           [0xfU]);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev
            : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext 
        = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                           (((QData)((IData)(
                                                             ((8U 
                                                               == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                                                              & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
                                                                 >> 0x1fU)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand))), 
                                           (0x1fU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext 
        = (1U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext 
                         >> 0x20U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                    >> 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (2U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                    >> 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (4U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                    >> 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (8U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                    >> 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x10U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                       >> 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x20U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                       >> 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x40U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                       >> 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x80U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                       >> 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x100U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                        >> 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x200U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                        >> 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x400U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                        >> 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x800U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                        >> 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x1000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x2000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x4000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x8000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x10000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                          << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x20000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                          << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x40000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                          << 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x80000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                          << 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x100000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                           << 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x200000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                           << 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x400000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                           << 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x800000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                           << 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x1000000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x2000000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x4000000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x8000000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x10000000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                             << 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x20000000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                             << 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x40000000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                             << 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x80000000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                             << 0x1fU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev
            : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
    if ((0x800U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
        if ((0x400U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
            if ((0x200U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr)))) {
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
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
            if ((0x200U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                        = (IData)((
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                   [
                                                   (0x1fU 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))] 
                                                   >> 0x20U));
                                } else {
                                    if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = (IData)(
                                                      (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                       [
                                                       (0x1fU 
                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))] 
                                                       >> 0x20U));
                                    } else {
                                        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (IData)(
                                                          (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                           [
                                                           (0x1fU 
                                                            & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))] 
                                                           >> 0x20U));
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                    = (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                               [
                                                               (0x1fU 
                                                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))] 
                                                               >> 0x20U));
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr)))) {
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = (IData)(
                                                                  (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                                   [
                                                                   (0x1fU 
                                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))] 
                                                                   >> 0x20U));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                        = (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                  [
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))]);
                                } else {
                                    if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = (IData)(
                                                      vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                      [
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))]);
                                    } else {
                                        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (IData)(
                                                          vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                          [
                                                          (0x1fU 
                                                           & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))]);
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                    = (IData)(
                                                              vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                              [
                                                              (0x1fU 
                                                               & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))]);
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr)))) {
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = (IData)(
                                                                  vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                                  [
                                                                  (0x1fU 
                                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))]);
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
        if ((0x400U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
            if ((0x200U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                        if ((0x40U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                          >> 5U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                      ? 0U
                                                      : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q));
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0x20U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                if ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (2U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                     ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q
                                                     : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                     ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q
                                                     : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q));
                                        }
                                    }
                                } else {
                                    if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr)))) {
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr)))) {
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                                }
                                            }
                                        }
                                    } else {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (2U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                     ? 0U
                                                     : 
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q
                                                    [vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                     ? 
                                                    (0x28001048U 
                                                     | (4U 
                                                        & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q) 
                                                            >> (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)) 
                                                           << 2U)))
                                                     : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x200U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                      >> 6U)))) {
                            if ((0x20U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                if ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                        = ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                            ? ((4U 
                                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                     ? 
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [0xfU]
                                                     : 
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [0xeU])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                     ? 
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [0xdU]
                                                     : 
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [0xcU]))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                     ? 
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [0xbU]
                                                     : 
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [0xaU])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                     ? 
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [9U]
                                                     : 
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [8U])))
                                            : ((4U 
                                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                     ? 
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [7U]
                                                     : 
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [6U])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                     ? 
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [5U]
                                                     : 
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [4U]))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                     ? 
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [3U]
                                                     : 
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [2U])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                     ? 
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [1U]
                                                     : 
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [0U]))));
                                } else {
                                    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (2U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                     ? 
                                                    ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                      [0xfU] 
                                                      << 0x18U) 
                                                     | ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                         [0xeU] 
                                                         << 0x10U) 
                                                        | ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                            [0xdU] 
                                                            << 8U) 
                                                           | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                           [0xcU])))
                                                     : 
                                                    ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                      [0xbU] 
                                                      << 0x18U) 
                                                     | ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                         [0xaU] 
                                                         << 0x10U) 
                                                        | ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                            [9U] 
                                                            << 8U) 
                                                           | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                           [8U]))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                     ? 
                                                    ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                      [7U] 
                                                      << 0x18U) 
                                                     | ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                         [6U] 
                                                         << 0x10U) 
                                                        | ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                            [5U] 
                                                            << 8U) 
                                                           | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                           [4U])))
                                                     : 
                                                    ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                      [3U] 
                                                      << 0x18U) 
                                                     | ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                         [2U] 
                                                         << 0x10U) 
                                                        | ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                            [1U] 
                                                            << 8U) 
                                                           | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                           [0U])))));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x40U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                          >> 5U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr)))) {
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xfffffff7U 
                                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (8U 
                                                            & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip 
                                                               >> 0xeU)));
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xffffff7fU 
                                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x80U 
                                                            & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip 
                                                               >> 9U)));
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xfffff7ffU 
                                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x800U 
                                                            & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip 
                                                               >> 4U)));
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0x8000ffffU 
                                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x7fff0000U 
                                                            & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip 
                                                               << 0x10U)));
                                                }
                                            }
                                        } else {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (2U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                     ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q
                                                     : 
                                                    ((0x80000000U 
                                                      & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q) 
                                                         << 0x1aU)) 
                                                     | (0x1fU 
                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                     ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                                     : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0x20U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                if ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
                                        [(0x1fU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))];
                                } else {
                                    if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
                                            [(0x1fU 
                                              & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))];
                                    } else {
                                        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
                                                [(0x1fU 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))];
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent
                                                        [
                                                        (0x1fU 
                                                         & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))];
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr)))) {
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        (0xffffe000U 
                                                         | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q;
                                                } else {
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xfffffff7U 
                                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (8U 
                                                            & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                                               >> 0xeU)));
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xffffff7fU 
                                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x80U 
                                                            & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                                               >> 9U)));
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xfffff7ffU 
                                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x800U 
                                                            & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                                               >> 4U)));
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0x8000ffffU 
                                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x7fff0000U 
                                                            & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                                               << 0x10U)));
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0x40101104U;
                                                } else {
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xfffffff7U 
                                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (8U 
                                                            & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                               >> 2U)));
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xffffff7fU 
                                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x80U 
                                                            & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                               << 3U)));
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xffffe7ffU 
                                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x1800U 
                                                            & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                               << 9U)));
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xfffdffffU 
                                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x20000U 
                                                            & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                               << 0x10U)));
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xffdfffffU 
                                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x200000U 
                                                            & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                               << 0x15U)));
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
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 0U;
    if ((0x800U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
        if ((0x400U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
            if ((0x200U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else {
                        if ((0x40U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else {
                            if ((0x20U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            } else {
                                if ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                    if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                                }
                                            }
                                        } else {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            if ((0x200U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                        if ((0x40U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else {
                            if ((0x20U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            } else {
                                if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x40U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else {
                            if ((0x20U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            } else {
                                if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        }
    } else {
        if ((0x400U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
            if ((0x200U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                        if ((0x40U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                            if ((0x20U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            } else {
                                if ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                } else {
                                    if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr 
                                = (1U & ((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                             >> 5U)) 
                                         | ((0x10U 
                                             & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                             ? (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                 >> 3U) 
                                                | (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                    >> 2U) 
                                                   | ((2U 
                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                        ? 
                                                       (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))
                                                        : 
                                                       (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                        ? 
                                                       (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))
                                                        : 
                                                       (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))))
                                             : ((8U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                 ? 
                                                (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                  >> 2U) 
                                                 | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))
                                                 : 
                                                ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                 >> 2U)))));
                        }
                    } else {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            if ((0x200U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                        if ((0x40U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else {
                            if ((0x20U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                              >> 4U)))) {
                                    if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        }
                    } else {
                        if ((0x40U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                            if ((0x20U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            } else {
                                if ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                } else {
                                    if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0x20U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr)))) {
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                } else {
                                    if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                            }
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))) {
                                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
        = (0x3ffffffffULL & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                               ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                               : (1ULL | ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                          << 1U))) 
                             + vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_in_b));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_we 
        = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_we)) 
           | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_en) 
              << 1U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set_spec = 0U;
    if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set_spec = 1U;
                } else {
                    if ((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                >> 2U) | (0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set_spec = 1U;
                    }
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set_spec = 1U;
                    }
                } else {
                    if ((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set_spec = 1U;
                        if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                        if (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                             | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set_spec = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set_spec = 1U;
                        } else {
                            if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set_spec = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_spec) 
                          | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set)) 
                         & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req_branch)))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set_spec = 1U;
                    }
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set_spec = 1U;
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_en = 0U;
    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_en = 1U;
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q;
    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_cause) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d = 3U;
    } else {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_restore_dret_id) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d 
                = (3U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q);
        } else {
            if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_restore_mret_id) {
                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d 
                    = (3U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                             >> 2U));
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n 
        = ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_mux_id))
            ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_mux_id))
                ? 0U : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_mux_id))
                         ? 0U : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q))
            : ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_mux_id))
                ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_mux_id))
                    ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                    : ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id))
                        ? 0U : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id))
                                 ? ((0xffffff00U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                    | (0x7cU & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause) 
                                                << 2U)))
                                 : (0xffffff00U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q))))
                : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_mux_id))
                    ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__g_branch_target_alu__DOT__bt_alu_result)
                    : 0U)));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__dv_to_s1n[0U] 
        = vlTOPp->azadi_soc_top__DOT__iccm_to_xbar;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_op))
            ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_op))
                ? ((~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a) 
                   & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int)
                : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                   | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int))
            : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__div_by_zero_d 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__div_by_zero_q;
    if (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__mult_sel_ex) 
         | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__div_sel_ex))) {
        if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q)))) {
                    if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))) {
                        if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator)))) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__div_by_zero_d 
                                = (0U == (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 1U)));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_d 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_d 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q;
    if (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__mult_sel_ex) 
         | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__div_sel_ex))) {
        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_d 
                = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                    ? 0U : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                             ? 6U : ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))
                                      ? 5U : 0U)));
        } else {
            if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))) {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))) {
                    if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_d 
                            = ((1U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_count_q))
                                ? 4U : 3U);
                    } else {
                        if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_d 
                                = (0x1ffffffffULL & 
                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q 
                                    >> 1U));
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_d 
                                = ((1U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_count_q))
                                    ? 4U : 3U);
                        } else {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_d 
                                = (0x1ffffffffULL & 
                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q 
                                    >> 1U));
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_d 
                                = ((((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                         >> 1U)) & 
                                     (0ULL == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_d)) 
                                    | (1U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_count_q)))
                                    ? 4U : 3U);
                        }
                    }
                } else {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_d 
                        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_b)
                            ? (QData)((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                               >> 1U)))
                            : (QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc)));
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_d = 3U;
                }
            } else {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_d = 2U;
                } else {
                    if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_d 
                            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))
                                ? (((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                        >> 1U)) & (0U 
                                                   == (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                               >> 1U))))
                                    ? 6U : 1U) : ((
                                                   (~ 
                                                    ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                                     >> 1U)) 
                                                   & (0U 
                                                      == (IData)(
                                                                 (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                  >> 1U))))
                                                   ? 6U
                                                   : 1U));
                    } else {
                        if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_d 
                                = (0x1ffffffffULL & 
                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_ext 
                                    >> 1U));
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_d = 3U;
                        } else {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_d 
                                = (0x1ffffffffULL & 
                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_ext 
                                    >> 1U));
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_d 
                                = (((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                        >> 1U)) & (0ULL 
                                                   == 
                                                   (0x1ffffffffULL 
                                                    & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_ext 
                                                       >> 1U))))
                                    ? 4U : 3U);
                        }
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_misaligned_access 
        = (((0U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type)) 
            & (0U != (3U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                    >> 1U))))) | ((1U 
                                                   == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type)) 
                                                  & (3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                 >> 1U))))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_numerator_d 
        = (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                  [1U]);
    if (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__mult_sel_ex) 
         | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__div_sel_ex))) {
        if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_numerator_d 
                        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_a)
                            ? (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                       >> 1U)) : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc);
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__is_greater_equal 
        = (1U & (((1U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                                 [0U] >> 0x1fU))) == 
                  (1U & (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q 
                                 >> 0x1fU)))) ? (~ (IData)(
                                                           (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                            >> 0x20U)))
                  : (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                             [0U] >> 0x1fU))));
    vlTOPp->__Vtableidx4 = ((0x80U & (((0x80000000U 
                                        & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                           ^ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b))
                                        ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                            >> 0x1fU) 
                                           ^ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                        : (~ (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 0x20U)))) 
                                      << 7U)) | (((0U 
                                                   == (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                               >> 1U))) 
                                                  << 6U) 
                                                 | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result 
        = vlTOPp->__Vtable4_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result
        [vlTOPp->__Vtableidx4];
    vlTOPp->__Vtableidx6 = (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_q) 
                             << 4U) | ((0xcU & ((IData)(
                                                        (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 1U)) 
                                                << 2U)) 
                                       | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be 
        = vlTOPp->__Vtable6_azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be
        [vlTOPp->__Vtableidx6];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_req_addr[1U] 
        = (QData)((IData)((0xfffffffcU & ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                   >> 3U)) 
                                          << 2U))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_we_ex 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
            ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_we)
            : 0U);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_priv_lvl[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_addr 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q)
            ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__stored_addr_q
            : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set_spec)
                ? (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)
                : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_q));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i[0U] 
        = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__dv_to_s1n
        [0U];
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i[1U] 
        = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__dv_to_s1n
        [1U];
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i[2U] 
        = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__dv_to_s1n
        [2U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_d 
        = ((0x20000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                        << 0xeU)) | ((0x10000U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                  << 9U)) 
                                     | ((0x8000U & 
                                         (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                          << 4U)) | 
                                        (0x7fffU & 
                                         (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                          >> 0x10U)))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtval_d 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtval_d 
                    = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_mtval;
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_d 
        = ((0x20U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                     >> 0x1aU)) | (0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int));
    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_d 
                    = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_restore_dret_id)))) {
            if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_restore_mret_id) {
                if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_d 
                        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q;
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_id;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_d 
        = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__depc_d 
        = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_cause) {
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_if) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc 
                = (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                   << 1U);
        } else {
            if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_id) {
                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc 
                    = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_id;
            }
        }
        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__debug_csr_save) {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__depc_d 
                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc;
        } else {
            if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_d 
                    = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_restore_dret_id)))) {
            if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_restore_mret_id) {
                if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_d 
                        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q;
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0U]) | (0x20U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                              >> 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0U] 
        = ((0x27U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0U]) | (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                       ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? 3U : 2U) : ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                          ? 1U : 0U)) 
                     << 3U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0U] 
        = ((0x3bU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0U]) | (4U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0U] 
        = ((0x3dU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0U]) | ((IData)((3U == (3U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int))) 
                     << 1U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0U] 
        = ((0x3eU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0U]) | (1U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [1U]) | (0x20U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                              >> 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[1U] 
        = ((0x27U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [1U]) | (((0x1000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                       ? ((0x800U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? 3U : 2U) : ((0x800U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                          ? 1U : 0U)) 
                     << 3U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[1U] 
        = ((0x3bU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [1U]) | (4U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                           >> 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[1U] 
        = ((0x3dU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [1U]) | ((IData)((3U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                           >> 8U)))) 
                     << 1U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[1U] 
        = ((0x3eU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [1U]) | (1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                           >> 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[2U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [2U]) | (0x20U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                              >> 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[2U] 
        = ((0x27U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [2U]) | (((0x100000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                       ? ((0x80000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? 3U : 2U) : ((0x80000U 
                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                          ? 1U : 0U)) 
                     << 3U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[2U] 
        = ((0x3bU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [2U]) | (4U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                           >> 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[2U] 
        = ((0x3dU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [2U]) | ((IData)((3U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                           >> 0x10U)))) 
                     << 1U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[2U] 
        = ((0x3eU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [2U]) | (1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                           >> 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[3U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [3U]) | (0x20U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                              >> 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[3U] 
        = ((0x27U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [3U]) | (((0x10000000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                       ? ((0x8000000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? 3U : 2U) : ((0x8000000U 
                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                          ? 1U : 0U)) 
                     << 3U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[3U] 
        = ((0x3bU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [3U]) | (4U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                           >> 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[3U] 
        = ((0x3dU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [3U]) | ((IData)((3U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                           >> 0x18U)))) 
                     << 1U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[3U] 
        = ((0x3eU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [3U]) | (1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                           >> 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[4U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [4U]) | (0x20U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                              >> 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[4U] 
        = ((0x27U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [4U]) | (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                       ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? 3U : 2U) : ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                          ? 1U : 0U)) 
                     << 3U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[4U] 
        = ((0x3bU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [4U]) | (4U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[4U] 
        = ((0x3dU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [4U]) | ((IData)((3U == (3U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int))) 
                     << 1U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[4U] 
        = ((0x3eU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [4U]) | (1U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[5U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [5U]) | (0x20U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                              >> 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[5U] 
        = ((0x27U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [5U]) | (((0x1000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                       ? ((0x800U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? 3U : 2U) : ((0x800U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                          ? 1U : 0U)) 
                     << 3U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[5U] 
        = ((0x3bU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [5U]) | (4U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                           >> 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[5U] 
        = ((0x3dU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [5U]) | ((IData)((3U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                           >> 8U)))) 
                     << 1U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[5U] 
        = ((0x3eU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [5U]) | (1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                           >> 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[6U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [6U]) | (0x20U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                              >> 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[6U] 
        = ((0x27U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [6U]) | (((0x100000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                       ? ((0x80000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? 3U : 2U) : ((0x80000U 
                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                          ? 1U : 0U)) 
                     << 3U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[6U] 
        = ((0x3bU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [6U]) | (4U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                           >> 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[6U] 
        = ((0x3dU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [6U]) | ((IData)((3U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                           >> 0x10U)))) 
                     << 1U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[6U] 
        = ((0x3eU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [6U]) | (1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                           >> 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[7U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [7U]) | (0x20U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                              >> 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[7U] 
        = ((0x27U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [7U]) | (((0x10000000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                       ? ((0x8000000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? 3U : 2U) : ((0x8000000U 
                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                          ? 1U : 0U)) 
                     << 3U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[7U] 
        = ((0x3bU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [7U]) | (4U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                           >> 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[7U] 
        = ((0x3dU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [7U]) | ((IData)((3U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                           >> 0x18U)))) 
                     << 1U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[7U] 
        = ((0x3eU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [7U]) | (1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                           >> 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[8U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [8U]) | (0x20U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                              >> 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[8U] 
        = ((0x27U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [8U]) | (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                       ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? 3U : 2U) : ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                          ? 1U : 0U)) 
                     << 3U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[8U] 
        = ((0x3bU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [8U]) | (4U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[8U] 
        = ((0x3dU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [8U]) | ((IData)((3U == (3U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int))) 
                     << 1U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[8U] 
        = ((0x3eU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [8U]) | (1U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[9U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [9U]) | (0x20U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                              >> 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[9U] 
        = ((0x27U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [9U]) | (((0x1000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                       ? ((0x800U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                           ? 3U : 2U) : ((0x800U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                          ? 1U : 0U)) 
                     << 3U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[9U] 
        = ((0x3bU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [9U]) | (4U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                           >> 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[9U] 
        = ((0x3dU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [9U]) | ((IData)((3U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                           >> 8U)))) 
                     << 1U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[9U] 
        = ((0x3eU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [9U]) | (1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                           >> 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xaU] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xaU]) | (0x20U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                >> 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xaU] 
        = ((0x27U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xaU]) | (((0x100000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                         ? ((0x80000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                             ? 3U : 2U) : ((0x80000U 
                                            & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                            ? 1U : 0U)) 
                       << 3U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xaU] 
        = ((0x3bU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xaU]) | (4U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                             >> 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xaU] 
        = ((0x3dU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xaU]) | ((IData)((3U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 0x10U)))) 
                       << 1U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xaU] 
        = ((0x3eU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xaU]) | (1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                             >> 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xbU] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xbU]) | (0x20U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                >> 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xbU] 
        = ((0x27U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xbU]) | (((0x10000000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                         ? ((0x8000000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                             ? 3U : 2U) : ((0x8000000U 
                                            & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                            ? 1U : 0U)) 
                       << 3U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xbU] 
        = ((0x3bU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xbU]) | (4U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                             >> 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xbU] 
        = ((0x3dU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xbU]) | ((IData)((3U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 0x18U)))) 
                       << 1U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xbU] 
        = ((0x3eU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xbU]) | (1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                             >> 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xcU] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xcU]) | (0x20U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                >> 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xcU] 
        = ((0x27U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xcU]) | (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                         ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                             ? 3U : 2U) : ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                            ? 1U : 0U)) 
                       << 3U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xcU] 
        = ((0x3bU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xcU]) | (4U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xcU] 
        = ((0x3dU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xcU]) | ((IData)((3U == (3U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int))) 
                       << 1U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xcU] 
        = ((0x3eU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xcU]) | (1U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xdU] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xdU]) | (0x20U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                >> 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xdU] 
        = ((0x27U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xdU]) | (((0x1000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                         ? ((0x800U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                             ? 3U : 2U) : ((0x800U 
                                            & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                            ? 1U : 0U)) 
                       << 3U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xdU] 
        = ((0x3bU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xdU]) | (4U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                             >> 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xdU] 
        = ((0x3dU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xdU]) | ((IData)((3U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 8U)))) 
                       << 1U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xdU] 
        = ((0x3eU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xdU]) | (1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                             >> 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xeU] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xeU]) | (0x20U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                >> 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xeU] 
        = ((0x27U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xeU]) | (((0x100000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                         ? ((0x80000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                             ? 3U : 2U) : ((0x80000U 
                                            & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                            ? 1U : 0U)) 
                       << 3U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xeU] 
        = ((0x3bU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xeU]) | (4U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                             >> 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xeU] 
        = ((0x3dU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xeU]) | ((IData)((3U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 0x10U)))) 
                       << 1U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xeU] 
        = ((0x3eU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xeU]) | (1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                             >> 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xfU] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xfU]) | (0x20U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                >> 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xfU] 
        = ((0x27U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xfU]) | (((0x10000000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                         ? ((0x8000000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                             ? 3U : 2U) : ((0x8000000U 
                                            & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                            ? 1U : 0U)) 
                       << 3U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xfU] 
        = ((0x3bU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xfU]) | (4U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                             >> 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xfU] 
        = ((0x3dU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xfU]) | ((IData)((3U == (3U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 0x18U)))) 
                       << 1U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xfU] 
        = ((0x3eU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xfU]) | (1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                             >> 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_slow__DOT__multdiv_i__imd_val_d_o[1U] 
        = (QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_numerator_d));
    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__is_greater_equal) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__next_remainder 
            = (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                       >> 1U));
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__next_quotient 
            = (0x1ffffffffULL & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_q 
                                 | (1ULL << (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_count_q))));
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__next_remainder 
            = (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                      [0U]);
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__next_quotient 
            = (0x1ffffffffULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_q);
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_result = 0U;
    if ((0x20U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))) {
        if ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))) {
            if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))) {
                if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))) {
                        if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_result = 0U;
                        }
                    } else {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_result = 0U;
                    }
                }
            } else {
                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_result = 0U;
            }
        } else {
            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_result 
                = ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                    ? 0U : ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                             ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                 ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                     ? 0U : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                 : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                     ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                     : 0U)) : 0U));
        }
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_result 
            = ((0x10U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                ? ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                    ? ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                        ? 0U : ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                 ? 0U : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                          ? 0U : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))))
                    : ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                        ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                        : ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                            ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                : 0U) : 0U))) : ((8U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? 0U
                                                     : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result))
                                                   : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result)
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                                   ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                                    : (IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                               >> 1U))))));
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_set_d = 0U;
    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing) {
        if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q)))) {
            if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_set_d 
                            = (1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result) 
                                     | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                        >> 1U)));
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_priv_lvl
        [0U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_priv_lvl
        [1U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_req_addr[0U] 
        = (QData)((IData)((0xfffffffcU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_addr)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_d 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_q;
    if (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__mult_sel_ex) 
         | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__div_sel_ex))) {
        if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q) 
                      >> 2U)))) {
            if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))) {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_d 
                        = (0x1ffffffffULL & ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))
                                              ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__next_quotient
                                              : ((1U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))
                                                  ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_q
                                                  : 
                                                 (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_q 
                                                  << 1U))));
                }
            } else {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_d = 0ULL;
                } else {
                    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator) 
                                  >> 1U)))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_d 
                            = (0x1ffffffffULL & ((1U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))
                                                  ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_ext
                                                  : 
                                                 (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_ext 
                                                  << 1U)));
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_count_d 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_count_q;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__accum_window_d 
        = (0x1ffffffffULL & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
           [0U]);
    if (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__mult_sel_ex) 
         | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__div_sel_ex))) {
        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))) {
                    if ((2U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__accum_window_d 
                            = (0x1ffffffffULL & ((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_a) 
                                                   ^ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_b)) 
                                                  & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__div_by_zero_q)))
                                                  ? (QData)((IData)(
                                                                    (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                     >> 1U)))
                                                  : 
                                                 vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                                                 [0U]));
                    } else {
                        if ((3U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__accum_window_d 
                                = (0x1ffffffffULL & 
                                   ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_a)
                                     ? (QData)((IData)(
                                                       (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 1U)))
                                     : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                                    [0U]));
                        }
                    }
                } else {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__accum_window_d 
                        = (0x1ffffffffULL & ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))
                                                  ? (QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__next_remainder))
                                                  : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__next_quotient)
                                              : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext));
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))) {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_count_d 
                        = (0x1fU & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_count_q) 
                                    - (IData)(1U)));
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__accum_window_d 
                        = (0x1ffffffffULL & ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))
                                              ? (((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__next_remainder)) 
                                                  << 1U) 
                                                 | (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                                                                               [1U] 
                                                                               >> (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_count_d)))))))
                                              : ((1U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))
                                                  ? 
                                                 (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 1U)
                                                  : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext)));
                } else {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__accum_window_d 
                        = (QData)((IData)((1U & (IData)(
                                                        (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                                                         [1U] 
                                                         >> 0x1fU)))));
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q)))) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__accum_window_d 
                        = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))
                            ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))
                                ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_ext
                                : 0x1ffffffffULL) : 
                           ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))
                             ? (0x100000000ULL | (QData)((IData)(
                                                                 ((0x80000000U 
                                                                   & ((~ 
                                                                       ((IData)(
                                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_ext 
                                                                                >> 0x20U)) 
                                                                        & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc)) 
                                                                      << 0x1fU)) 
                                                                  | (0x7fffffffU 
                                                                     & ((IData)(
                                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_ext 
                                                                                >> 1U)) 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc)))))))))
                             : (((QData)((IData)((1U 
                                                  & (~ 
                                                     ((IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_ext 
                                                               >> 0x20U)) 
                                                      & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_ext) 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc)))))))));
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_count_d = 0x1fU;
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__result_ex 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
            ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_id)
                ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                          [0U]) : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext))
            : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_result);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__perf_tbranch = 0U;
    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req_branch)))) {
                        if (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_set_d) 
                             | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set))) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__perf_tbranch 
                                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_set_d;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__perf_jump = 0U;
    if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req_branch)))) {
                        if (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_set_d) 
                             | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set))) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__perf_jump 
                                = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set = 0U;
    if ((8U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set = 1U;
                } else {
                    if ((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                >> 2U) | (0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set = 1U;
                    }
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set = 1U;
                    }
                } else {
                    if ((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set = 1U;
                        if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                        if (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                             | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set = 1U;
                        } else {
                            if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req_branch)))) {
                        if (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_set_d) 
                             | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set))) {
                            vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set = 1U;
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set = 1U;
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_req_addr
        [0U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_req_addr
        [1U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_slow__DOT__multdiv_i__imd_val_d_o[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__accum_window_d;
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0U] 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel)
            ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int
                : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__result_ex)
            : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__result_ex);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_mtvec_init 
        = ((0U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_mux_id)) 
           & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__discard_req_d 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q) 
           & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set) 
              | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__discard_req_q)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req 
        = ((((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set_spec) 
                 & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set)))) 
             & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_req_int)) 
            & ((~ (IData)((3U == (3U & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                         >> 1U) | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev)))))) 
               | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set))) 
           & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q) 
                 >> 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
               [0U]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                  [0U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                         [0U])));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                       [0U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                               [0U] 
                                               >> 2U))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                       [0U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                               [0U] 
                                               >> 2U))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [0U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [1U]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                   [1U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                          [1U])) << 1U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [1U] 
                                                >> 2U))) 
              << 1U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [1U] 
                                                >> 2U))) 
              << 1U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [0U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [2U]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                   [2U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                          [2U])) << 2U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [2U] 
                                                >> 2U))) 
              << 2U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [2U] 
                                                >> 2U))) 
              << 2U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [0U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [3U]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                   [3U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                          [3U])) << 3U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [3U] 
                                                >> 2U))) 
              << 3U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [3U] 
                                                >> 2U))) 
              << 3U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [0U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [4U]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                   [4U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                          [4U])) << 4U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [4U] 
                                                >> 2U))) 
              << 4U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [4U] 
                                                >> 2U))) 
              << 4U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [0U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [5U]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                   [5U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                          [5U])) << 5U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [5U] 
                                                >> 2U))) 
              << 5U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [5U] 
                                                >> 2U))) 
              << 5U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [0U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [6U]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                   [6U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                          [6U])) << 6U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [6U] 
                                                >> 2U))) 
              << 6U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [6U] 
                                                >> 2U))) 
              << 6U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [0U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [7U]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                   [7U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                          [7U])) << 7U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [7U] 
                                                >> 2U))) 
              << 7U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [7U] 
                                                >> 2U))) 
              << 7U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [0U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [8U]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                   [8U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                          [8U])) << 8U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [8U] 
                                                >> 2U))) 
              << 8U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [8U] 
                                                >> 2U))) 
              << 8U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [0U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [9U]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                   [9U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                          [9U])) << 9U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [9U] 
                                                >> 2U))) 
              << 9U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [9U] 
                                                >> 2U))) 
              << 9U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [0U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [0xaU]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                     [0xaU] >> 2U)) 
                            & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                            [0xaU])) << 0xaU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [0xaU] 
                                                >> 2U))) 
              << 0xaU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [0xaU] 
                                                >> 2U))) 
              << 0xaU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [0U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [0xbU]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                     [0xbU] >> 2U)) 
                            & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                            [0xbU])) << 0xbU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [0xbU] 
                                                >> 2U))) 
              << 0xbU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [0xbU] 
                                                >> 2U))) 
              << 0xbU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [0U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [0xcU]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                     [0xcU] >> 2U)) 
                            & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                            [0xcU])) << 0xcU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [0xcU] 
                                                >> 2U))) 
              << 0xcU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [0xcU] 
                                                >> 2U))) 
              << 0xcU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [0U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [0xdU]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                     [0xdU] >> 2U)) 
                            & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                            [0xdU])) << 0xdU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [0xdU] 
                                                >> 2U))) 
              << 0xdU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [0xdU] 
                                                >> 2U))) 
              << 0xdU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [0U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [0xeU]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                     [0xeU] >> 2U)) 
                            & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                            [0xeU])) << 0xeU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [0xeU] 
                                                >> 2U))) 
              << 0xeU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [0xeU] 
                                                >> 2U))) 
              << 0xeU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [0U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [0xfU]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                     [0xfU] >> 2U)) 
                            & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                            [0xfU])) << 0xfU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [0xfU] 
                                                >> 2U))) 
              << 0xfU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [0U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [0xfU] 
                                                >> 2U))) 
              << 0xfU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [1U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [0U]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                   [0U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                          [0U])) << 0x10U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [0U] 
                                                >> 2U))) 
              << 0x10U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [0U] 
                                                >> 2U))) 
              << 0x10U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [1U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [1U]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                   [1U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                          [1U])) << 0x11U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [1U] 
                                                >> 2U))) 
              << 0x11U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [1U] 
                                                >> 2U))) 
              << 0x11U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [1U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [2U]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                   [2U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                          [2U])) << 0x12U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [2U] 
                                                >> 2U))) 
              << 0x12U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [2U] 
                                                >> 2U))) 
              << 0x12U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [1U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [3U]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                   [3U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                          [3U])) << 0x13U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [3U] 
                                                >> 2U))) 
              << 0x13U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [3U] 
                                                >> 2U))) 
              << 0x13U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [1U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [4U]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                   [4U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                          [4U])) << 0x14U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [4U] 
                                                >> 2U))) 
              << 0x14U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [4U] 
                                                >> 2U))) 
              << 0x14U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [1U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [5U]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                   [5U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                          [5U])) << 0x15U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [5U] 
                                                >> 2U))) 
              << 0x15U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [5U] 
                                                >> 2U))) 
              << 0x15U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [1U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [6U]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                   [6U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                          [6U])) << 0x16U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [6U] 
                                                >> 2U))) 
              << 0x16U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [6U] 
                                                >> 2U))) 
              << 0x16U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [1U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [7U]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                   [7U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                          [7U])) << 0x17U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [7U] 
                                                >> 2U))) 
              << 0x17U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [7U] 
                                                >> 2U))) 
              << 0x17U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [1U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [8U]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                   [8U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                          [8U])) << 0x18U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [8U] 
                                                >> 2U))) 
              << 0x18U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [8U] 
                                                >> 2U))) 
              << 0x18U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [1U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [9U]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                   [9U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                          [9U])) << 0x19U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [9U] 
                                                >> 2U))) 
              << 0x19U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [9U] 
                                                >> 2U))) 
              << 0x19U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [1U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [0xaU]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                     [0xaU] >> 2U)) 
                            & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                            [0xaU])) << 0x1aU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [0xaU] 
                                                >> 2U))) 
              << 0x1aU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [0xaU] 
                                                >> 2U))) 
              << 0x1aU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [1U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [0xbU]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                     [0xbU] >> 2U)) 
                            & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                            [0xbU])) << 0x1bU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [0xbU] 
                                                >> 2U))) 
              << 0x1bU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [0xbU] 
                                                >> 2U))) 
              << 0x1bU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [1U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [0xcU]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                     [0xcU] >> 2U)) 
                            & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                            [0xcU])) << 0x1cU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [0xcU] 
                                                >> 2U))) 
              << 0x1cU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [0xcU] 
                                                >> 2U))) 
              << 0x1cU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [1U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [0xdU]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                     [0xdU] >> 2U)) 
                            & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                            [0xdU])) << 0x1dU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [0xdU] 
                                                >> 2U))) 
              << 0x1dU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [0xdU] 
                                                >> 2U))) 
              << 0x1dU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [1U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [0xeU]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                     [0xeU] >> 2U)) 
                            & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                            [0xeU])) << 0x1eU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [0xeU] 
                                                >> 2U))) 
              << 0x1eU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [0xeU] 
                                                >> 2U))) 
              << 0x1eU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
           | ((((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                         [1U] >> 2U)) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                [0xfU]) == ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                     [0xfU] >> 2U)) 
                            & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                            [0xfU])) << 0x1fU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) > (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr
                                                [0xfU] 
                                                >> 2U))) 
              << 0x1fU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
           | (((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i
                        [1U] >> 2U)) < (IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i
                                                [0xfU] 
                                                >> 2U))) 
              << 0x1fU));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_slow__DOT__multdiv_i__imd_val_d_o
        [0U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_slow__DOT__multdiv_i__imd_val_d_o
        [1U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_d 
        = (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set)
             ? (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)
             : (0xfffffffcU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_q)) 
           + (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req) 
               & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q))) 
              << 2U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q) 
           | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (1U & ((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                     [0U]) ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq
                     : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                         [0U] >> 3U) & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                         | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                        & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt)))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffffffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (2U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                      [1U]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [1U]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                         >> 1U) : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                   >> 1U))
                      : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                          [1U] >> 3U) & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                           | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                         >> 1U))) << 1U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffffffbU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (4U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                      [2U]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [2U]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                         >> 2U) : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                   >> 2U))
                      : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                          [2U] >> 3U) & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                           | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                         >> 2U))) << 2U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffffff7U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (8U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                      [3U]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [3U]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                         >> 3U) : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                   >> 3U))
                      : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                          [3U] >> 3U) & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                           | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                         >> 3U))) << 3U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffffffefU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x10U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                         [4U]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                   [4U]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                            >> 4U) : 
                                  (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                   >> 4U)) : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [4U] 
                                               >> 3U) 
                                              & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                   | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                                  & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                                 >> 4U))) 
                       << 4U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffffffdfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x20U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                         [5U]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                   [5U]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                            >> 5U) : 
                                  (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                   >> 5U)) : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [5U] 
                                               >> 3U) 
                                              & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                   | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                                  & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                                 >> 5U))) 
                       << 5U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffffffbfU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x40U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                         [6U]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                   [6U]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                            >> 6U) : 
                                  (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                   >> 6U)) : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [6U] 
                                               >> 3U) 
                                              & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                   | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                                  & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                                 >> 6U))) 
                       << 6U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffffff7fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x80U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                         [7U]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                   [7U]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                            >> 7U) : 
                                  (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                   >> 7U)) : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                               [7U] 
                                               >> 3U) 
                                              & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                   | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                                  & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                                 >> 7U))) 
                       << 7U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffffeffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x100U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                          [8U]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                    [8U]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                             >> 8U)
                                    : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                       >> 8U)) : ((
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [8U] 
                                                   >> 3U) 
                                                  & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                       | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                                      & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                                     >> 8U))) 
                        << 8U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffffdffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x200U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                          [9U]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                    [9U]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                             >> 9U)
                                    : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                       >> 9U)) : ((
                                                   vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                                   [9U] 
                                                   >> 3U) 
                                                  & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                       | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                                      & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                                     >> 9U))) 
                        << 9U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffffbffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x400U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                          [0xaU]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                      [0xaU]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                 >> 0xaU)
                                      : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                         >> 0xaU)) : 
                         ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                           [0xaU] >> 3U) & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                              | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                             & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                            >> 0xaU))) 
                        << 0xaU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffff7ffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x800U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                          [0xbU]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                      [0xbU]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                 >> 0xbU)
                                      : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                         >> 0xbU)) : 
                         ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                           [0xbU] >> 3U) & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                              | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                             & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                            >> 0xbU))) 
                        << 0xbU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffffefffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x1000U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                           [0xcU]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                       [0xcU]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                  >> 0xcU)
                                       : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                          >> 0xcU))
                           : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                               [0xcU] >> 3U) & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                  | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                                 & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                                >> 0xcU))) 
                         << 0xcU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffffdfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x2000U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                           [0xdU]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                       [0xdU]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                  >> 0xdU)
                                       : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                          >> 0xdU))
                           : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                               [0xdU] >> 3U) & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                  | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                                 & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                                >> 0xdU))) 
                         << 0xdU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffffbfffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x4000U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                           [0xeU]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                       [0xeU]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                  >> 0xeU)
                                       : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                          >> 0xeU))
                           : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                               [0xeU] >> 3U) & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                  | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                                 & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                                >> 0xeU))) 
                         << 0xeU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffff7fffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x8000U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                           [0xfU]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                       [0xfU]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                  >> 0xfU)
                                       : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                          >> 0xfU))
                           : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                               [0xfU] >> 3U) & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                  | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                                 & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                                >> 0xfU))) 
                         << 0xfU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffeffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x10000U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                            [0U]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                      [0U]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                               >> 0x10U)
                                      : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                         >> 0x10U))
                            : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [0U] >> 3U) & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                 | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                                & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                               >> 0x10U))) 
                          << 0x10U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffdffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x20000U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                            [1U]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                      [1U]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                               >> 0x11U)
                                      : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                         >> 0x11U))
                            : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [1U] >> 3U) & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                 | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                                & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                               >> 0x11U))) 
                          << 0x11U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffbffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x40000U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                            [2U]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                      [2U]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                               >> 0x12U)
                                      : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                         >> 0x12U))
                            : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [2U] >> 3U) & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                 | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                                & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                               >> 0x12U))) 
                          << 0x12U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfff7ffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x80000U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                            [3U]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                      [3U]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                               >> 0x13U)
                                      : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                         >> 0x13U))
                            : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                [3U] >> 3U) & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                 | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                                & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                               >> 0x13U))) 
                          << 0x13U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffefffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x100000U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                             [4U]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                       [4U]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                >> 0x14U)
                                       : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                          >> 0x14U))
                             : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                 [4U] >> 3U) & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                  | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                                 & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                                >> 0x14U))) 
                           << 0x14U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffdfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x200000U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                             [5U]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                       [5U]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                >> 0x15U)
                                       : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                          >> 0x15U))
                             : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                 [5U] >> 3U) & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                  | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                                 & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                                >> 0x15U))) 
                           << 0x15U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffbfffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x400000U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                             [6U]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                       [6U]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                >> 0x16U)
                                       : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                          >> 0x16U))
                             : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                 [6U] >> 3U) & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                  | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                                 & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                                >> 0x16U))) 
                           << 0x16U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xff7fffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x800000U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                             [7U]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                       [7U]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                >> 0x17U)
                                       : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                          >> 0x17U))
                             : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                 [7U] >> 3U) & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                  | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                                 & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                                >> 0x17U))) 
                           << 0x17U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfeffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x1000000U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                              [8U]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [8U]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                 >> 0x18U)
                                        : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                           >> 0x18U))
                              : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                  [8U] >> 3U) & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                   | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                                  & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                                 >> 0x18U))) 
                            << 0x18U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfdffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x2000000U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                              [9U]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [9U]) ? (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                 >> 0x19U)
                                        : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                           >> 0x19U))
                              : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                  [9U] >> 3U) & (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                   | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                                  & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                                 >> 0x19U))) 
                            << 0x19U)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfbffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x4000000U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                              [0xaU]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [0xaU]) ? 
                                         (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                          >> 0x1aU)
                                          : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                             >> 0x1aU))
                              : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                  [0xaU] >> 3U) & (
                                                   ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                     | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                                    & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                                   >> 0x1aU))) 
                            << 0x1aU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xf7ffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x8000000U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                              [0xbU]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                          [0xbU]) ? 
                                         (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                          >> 0x1bU)
                                          : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                             >> 0x1bU))
                              : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                  [0xbU] >> 3U) & (
                                                   ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                     | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                                    & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                                   >> 0x1bU))) 
                            << 0x1bU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xefffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x10000000U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                               [0xcU]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                           [0xcU]) ? 
                                          (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                           >> 0x1cU)
                                           : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                              >> 0x1cU))
                               : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                   [0xcU] >> 3U) & 
                                  (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                     | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                    & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                   >> 0x1cU))) << 0x1cU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xdfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x20000000U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                               [0xdU]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                           [0xdU]) ? 
                                          (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                           >> 0x1dU)
                                           : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                              >> 0x1dU))
                               : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                   [0xdU] >> 3U) & 
                                  (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                     | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                    & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                   >> 0x1dU))) << 0x1dU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xbfffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x40000000U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                               [0xeU]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                           [0xeU]) ? 
                                          (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                           >> 0x1eU)
                                           : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                              >> 0x1eU))
                               : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                   [0xeU] >> 3U) & 
                                  (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                     | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                    & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                   >> 0x1eU))) << 0x1eU)));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x7fffffffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (0x80000000U & (((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                               [0xfU]) ? ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                           [0xfU]) ? 
                                          (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                           >> 0x1fU)
                                           : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                              >> 0x1fU))
                               : ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                   [0xfU] >> 3U) & 
                                  (((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                     | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt) 
                                    & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt) 
                                   >> 0x1fU))) << 0x1fU)));
    if (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__ex_block_i__imd_val_d_o[0U] 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d
            [0U];
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__ex_block_i__imd_val_d_o[1U] 
            = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d
            [1U];
    } else {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__ex_block_i__imd_val_d_o[0U] 
            = (QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d
                              [0U]));
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__ex_block_i__imd_val_d_o[1U] 
            = (QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d
                              [1U]));
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
        = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
           | (3U != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
              [0U]));
    if ((0x8000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (1U & ((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                         [0U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                   [0xfU] >> 5U) & 
                                  (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                      >> 0xfU))) : 
                        (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                            >> 0xfU)))));
    }
    if ((0x4000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (1U & ((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                         [0U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                   [0xeU] >> 5U) & 
                                  (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                      >> 0xeU))) : 
                        (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                            >> 0xeU)))));
    }
    if ((0x2000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (1U & ((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                         [0U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                   [0xdU] >> 5U) & 
                                  (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                      >> 0xdU))) : 
                        (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                            >> 0xdU)))));
    }
    if ((0x1000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (1U & ((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                         [0U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                   [0xcU] >> 5U) & 
                                  (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                      >> 0xcU))) : 
                        (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                            >> 0xcU)))));
    }
    if ((0x800U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (1U & ((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                         [0U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                   [0xbU] >> 5U) & 
                                  (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                      >> 0xbU))) : 
                        (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                            >> 0xbU)))));
    }
    if ((0x400U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (1U & ((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                         [0U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                   [0xaU] >> 5U) & 
                                  (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                      >> 0xaU))) : 
                        (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                            >> 0xaU)))));
    }
    if ((0x200U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (1U & ((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                         [0U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                   [9U] >> 5U) & (~ 
                                                  (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                                   >> 9U)))
                         : (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                               >> 9U)))));
    }
    if ((0x100U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (1U & ((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                         [0U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                   [8U] >> 5U) & (~ 
                                                  (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                                   >> 8U)))
                         : (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                               >> 8U)))));
    }
    if ((0x80U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (1U & ((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                         [0U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                   [7U] >> 5U) & (~ 
                                                  (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                                   >> 7U)))
                         : (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                               >> 7U)))));
    }
    if ((0x40U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (1U & ((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                         [0U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                   [6U] >> 5U) & (~ 
                                                  (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                                   >> 6U)))
                         : (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                               >> 6U)))));
    }
    if ((0x20U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (1U & ((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                         [0U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                   [5U] >> 5U) & (~ 
                                                  (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                                   >> 5U)))
                         : (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                               >> 5U)))));
    }
    if ((0x10U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (1U & ((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                         [0U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                   [4U] >> 5U) & (~ 
                                                  (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                                   >> 4U)))
                         : (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                               >> 4U)))));
    }
    if ((8U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (1U & ((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                         [0U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                   [3U] >> 5U) & (~ 
                                                  (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                                   >> 3U)))
                         : (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                               >> 3U)))));
    }
    if ((4U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (1U & ((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                         [0U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                   [2U] >> 5U) & (~ 
                                                  (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                                   >> 2U)))
                         : (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                               >> 2U)))));
    }
    if ((2U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (1U & ((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                         [0U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                   [1U] >> 5U) & (~ 
                                                  (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                                   >> 1U)))
                         : (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                               >> 1U)))));
    }
    if ((1U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (1U & ((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                         [0U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                   [0U] >> 5U) & (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check))
                         : (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check))));
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
        = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
           | ((3U != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
               [1U]) << 1U));
    if ((0x80000000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (2U & (((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                          [1U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                    [0xfU] >> 5U) & 
                                   (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                       >> 0x1fU))) : 
                         (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                             >> 0x1fU))) << 1U)));
    }
    if ((0x40000000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (2U & (((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                          [1U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                    [0xeU] >> 5U) & 
                                   (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                       >> 0x1eU))) : 
                         (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                             >> 0x1eU))) << 1U)));
    }
    if ((0x20000000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (2U & (((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                          [1U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                    [0xdU] >> 5U) & 
                                   (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                       >> 0x1dU))) : 
                         (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                             >> 0x1dU))) << 1U)));
    }
    if ((0x10000000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (2U & (((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                          [1U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                    [0xcU] >> 5U) & 
                                   (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                       >> 0x1cU))) : 
                         (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                             >> 0x1cU))) << 1U)));
    }
    if ((0x8000000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (2U & (((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                          [1U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                    [0xbU] >> 5U) & 
                                   (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                       >> 0x1bU))) : 
                         (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                             >> 0x1bU))) << 1U)));
    }
    if ((0x4000000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (2U & (((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                          [1U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                    [0xaU] >> 5U) & 
                                   (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                       >> 0x1aU))) : 
                         (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                             >> 0x1aU))) << 1U)));
    }
    if ((0x2000000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (2U & (((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                          [1U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                    [9U] >> 5U) & (~ 
                                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                                    >> 0x19U)))
                          : (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                >> 0x19U))) << 1U)));
    }
    if ((0x1000000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (2U & (((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                          [1U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                    [8U] >> 5U) & (~ 
                                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                                    >> 0x18U)))
                          : (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                >> 0x18U))) << 1U)));
    }
    if ((0x800000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (2U & (((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                          [1U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                    [7U] >> 5U) & (~ 
                                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                                    >> 0x17U)))
                          : (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                >> 0x17U))) << 1U)));
    }
    if ((0x400000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (2U & (((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                          [1U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                    [6U] >> 5U) & (~ 
                                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                                    >> 0x16U)))
                          : (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                >> 0x16U))) << 1U)));
    }
    if ((0x200000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (2U & (((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                          [1U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                    [5U] >> 5U) & (~ 
                                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                                    >> 0x15U)))
                          : (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                >> 0x15U))) << 1U)));
    }
    if ((0x100000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (2U & (((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                          [1U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                    [4U] >> 5U) & (~ 
                                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                                    >> 0x14U)))
                          : (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                >> 0x14U))) << 1U)));
    }
    if ((0x80000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (2U & (((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                          [1U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                    [3U] >> 5U) & (~ 
                                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                                    >> 0x13U)))
                          : (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                >> 0x13U))) << 1U)));
    }
    if ((0x40000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (2U & (((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                          [1U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                    [2U] >> 5U) & (~ 
                                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                                    >> 0x12U)))
                          : (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                >> 0x12U))) << 1U)));
    }
    if ((0x20000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (2U & (((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                          [1U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                    [1U] >> 5U) & (~ 
                                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                                    >> 0x11U)))
                          : (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                >> 0x11U))) << 1U)));
    }
    if ((0x10000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all)) {
        vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault 
            = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault)) 
               | (2U & (((3U == vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                          [1U]) ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                    [0U] >> 5U) & (~ 
                                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                                    >> 0x10U)))
                          : (~ (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                                >> 0x10U))) << 1U)));
    }
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_d_ex[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__ex_block_i__imd_val_d_o
        [0U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_d_ex[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__ex_block_i__imd_val_d_o
        [1U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__g_pmp__DOT__pmp_i__pmp_req_err_o[0U] 
        = (1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__g_pmp__DOT__pmp_i__pmp_req_err_o[1U] 
        = (1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault) 
                 >> 1U));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_d_ex
        [0U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_d_ex
        [1U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pmp_req_err[0U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__g_pmp__DOT__pmp_i__pmp_req_err_o
        [0U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pmp_req_err[1U] 
        = vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__g_pmp__DOT__pmp_i__pmp_req_err_o
        [1U];
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_n 
        = ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_n)) 
           | (1U & ((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req) 
                      & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q))) 
                     & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pmp_req_err
                     [0U]) | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_q))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_n 
        = ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_n)) 
           | (2U & ((((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req) 
                        & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q) 
                              >> 1U))) & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pmp_req_err
                       [0U]) & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                     << 1U) | (0xfffffffeU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_q)))));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__instr_req 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req) 
           & (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pmp_req_err
              [0U]));
    vlTOPp->azadi_soc_top__DOT__u_top__DOT__data_req 
        = ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__data_req_out) 
           & (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pmp_req_err
              [1U]));
    vlTOPp->azadi_soc_top__DOT__ifu_to_xbar[0U] = 1U;
    vlTOPp->azadi_soc_top__DOT__ifu_to_xbar[1U] = (0x1eU 
                                                   | (0xffffff80U 
                                                      & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_addr 
                                                         << 5U)));
    vlTOPp->azadi_soc_top__DOT__ifu_to_xbar[2U] = (
                                                   (0xffffffe0U 
                                                    & (0x104000U 
                                                       | (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__instr_req) 
                                                           << 0x15U) 
                                                          | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk2__DOT__source_q) 
                                                             << 5U)))) 
                                                   | (0x1fU 
                                                      & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_addr 
                                                         >> 0x1bU)));
    __Vtemp16[0U] = (IData)((1ULL | (((QData)((IData)(
                                                      ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we)
                                                        ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be)
                                                        : 0xfU))) 
                                      << 0x21U) | ((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 2U)))
                                                                     ? 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)))
                                                                      ? 
                                                                     ((0xff000000U 
                                                                       & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                                          << 0x18U)) 
                                                                      | (0xffffffU 
                                                                         & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                                            >> 8U)))
                                                                      : 
                                                                     ((0xffff0000U 
                                                                       & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                                          << 0x10U)) 
                                                                      | (0xffffU 
                                                                         & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                                            >> 0x10U))))
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)))
                                                                      ? 
                                                                     ((0xffffff00U 
                                                                       & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                                          << 8U)) 
                                                                      | (0xffU 
                                                                         & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                                            >> 0x18U)))
                                                                      : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc)))) 
                                                   << 1U))));
    __Vtemp16[1U] = ((0xffffff80U & ((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                              >> 3U)) 
                                     << 7U)) | (IData)(
                                                       ((1ULL 
                                                         | (((QData)((IData)(
                                                                             ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we)
                                                                               ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be)
                                                                               : 0xfU))) 
                                                             << 0x21U) 
                                                            | ((QData)((IData)(
                                                                               ((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 2U)))
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)))
                                                                                 ? 
                                                                                ((0xff000000U 
                                                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                                                << 0x18U)) 
                                                                                | (0xffffffU 
                                                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                                                >> 8U)))
                                                                                 : 
                                                                                ((0xffff0000U 
                                                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                                                << 0x10U)) 
                                                                                | (0xffffU 
                                                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                                                >> 0x10U))))
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)))
                                                                                 ? 
                                                                                ((0xffffff00U 
                                                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                                                >> 0x18U)))
                                                                                 : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc)))) 
                                                               << 1U))) 
                                                        >> 0x20U)));
    vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[0U] = __Vtemp16[0U];
    vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[1U] = __Vtemp16[1U];
    vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[2U] = (
                                                   (0xffffffe0U 
                                                    & (0x4000U 
                                                       | (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__data_req) 
                                                           << 0x15U) 
                                                          | ((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we)
                                                                ? 
                                                               ((0xfU 
                                                                 == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be))
                                                                 ? 0U
                                                                 : 1U)
                                                                : 4U) 
                                                              << 0x12U) 
                                                             | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk2__DOT__source_q) 
                                                                << 5U))))) 
                                                   | (0x1fU 
                                                      & ((IData)(
                                                                 (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                  >> 3U)) 
                                                         >> 0x19U)));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U]) 
           | (0x200000U & vlTOPp->azadi_soc_top__DOT__ifu_to_xbar[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[0U]) 
           | (1U & vlTOPp->azadi_soc_top__DOT__ifu_to_xbar[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h1 = 3U;
    if ((0U == (0xffff0000U & ((vlTOPp->azadi_soc_top__DOT__ifu_to_xbar[2U] 
                                << 0x1bU) | (vlTOPp->azadi_soc_top__DOT__ifu_to_xbar[1U] 
                                             >> 5U))))) {
        vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h1 = 0U;
    } else {
        if ((0x10040000U == (0xffff0000U & ((vlTOPp->azadi_soc_top__DOT__ifu_to_xbar[2U] 
                                             << 0x1bU) 
                                            | (vlTOPp->azadi_soc_top__DOT__ifu_to_xbar[1U] 
                                               >> 5U))))) {
            vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h1 = 1U;
        } else {
            if ((0x10080000U == (0xffff0000U & ((vlTOPp->azadi_soc_top__DOT__ifu_to_xbar[2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->azadi_soc_top__DOT__ifu_to_xbar[1U] 
                                                   >> 5U))))) {
                vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h1 = 2U;
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]) 
           | (0x200000U & vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U]) 
           | (1U & vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h2 = 9U;
    if ((0x10000000U == (0xffff0000U & ((vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[1U] 
                                           >> 5U))))) {
        vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h2 = 0U;
    } else {
        if ((0x10080000U == (0xffff0000U & ((vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[2U] 
                                             << 0x1bU) 
                                            | (vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[1U] 
                                               >> 5U))))) {
            vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h2 = 1U;
        } else {
            if ((0x40000000U == (0xffff0000U & ((vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[1U] 
                                                   >> 5U))))) {
                vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h2 = 2U;
            } else {
                if ((0x40010000U == (0xffff0000U & 
                                     ((vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[1U] 
                                       >> 5U))))) {
                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h2 = 3U;
                } else {
                    if ((0x40020000U == (0xffff0000U 
                                         & ((vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[2U] 
                                             << 0x1bU) 
                                            | (vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[1U] 
                                               >> 5U))))) {
                        vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h2 = 4U;
                    } else {
                        if ((0x40030000U == (0xffff0000U 
                                             & ((vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[1U] 
                                                   >> 5U))))) {
                            vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h2 = 5U;
                        } else {
                            if ((0x40040000U == (0xffff0000U 
                                                 & ((vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[2U] 
                                                     << 0x1bU) 
                                                    | (vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[1U] 
                                                       >> 5U))))) {
                                vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h2 = 6U;
                            } else {
                                if ((0x40050000U == 
                                     (0xffff0000U & 
                                      ((vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[1U] 
                                        >> 5U))))) {
                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h2 = 7U;
                                } else {
                                    if ((0x40060000U 
                                         <= (0xffff0000U 
                                             & ((vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[1U] 
                                                   >> 5U))))) {
                                        vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h2 = 8U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U] 
        = ((0xfffffffcU & (vlTOPp->azadi_soc_top__DOT__ifu_to_xbar[0U] 
                           << 1U)) | (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h1));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
        = ((3U & ((2U & (vlTOPp->azadi_soc_top__DOT__ifu_to_xbar[1U] 
                         << 1U)) | (vlTOPp->azadi_soc_top__DOT__ifu_to_xbar[0U] 
                                    >> 0x1fU))) | (0xfffffffcU 
                                                   & (vlTOPp->azadi_soc_top__DOT__ifu_to_xbar[1U] 
                                                      << 1U)));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
        = ((3U & ((2U & (vlTOPp->azadi_soc_top__DOT__ifu_to_xbar[2U] 
                         << 1U)) | (vlTOPp->azadi_soc_top__DOT__ifu_to_xbar[1U] 
                                    >> 0x1fU))) | (0x3ffffcU 
                                                   & (vlTOPp->azadi_soc_top__DOT__ifu_to_xbar[2U] 
                                                      << 1U)));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U] 
        = ((0xfffffff0U & (vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[0U] 
                           << 3U)) | (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h2));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
        = ((0xfU & ((8U & (vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[1U] 
                           << 3U)) | (vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[0U] 
                                      >> 0x1dU))) | 
           (0xfffffff0U & (vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[1U] 
                           << 3U)));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
        = ((0xfU & ((8U & (vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[2U] 
                           << 3U)) | (vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[1U] 
                                      >> 0x1dU))) | 
           (0xfffff0U & (vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[2U] 
                         << 3U)));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__hold_all_requests 
        = ((0U != vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__num_req_outstanding) 
           & ((3U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]) 
              != (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__dev_select_outstanding)));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[0U]) 
           | (0xfffffffeU & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
                              << 0x1fU) | (0x7ffffffeU 
                                           & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U] 
                                              >> 1U)))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[1U] 
        = ((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
                  >> 1U)) | (0xfffffffeU & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
                                             << 0x1fU) 
                                            | (0x7ffffffeU 
                                               & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
                                                  >> 1U)))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U] 
        = ((0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U]) 
           | ((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
                     >> 1U)) | (0x1ffffeU & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
                                             >> 1U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__hold_all_requests 
        = ((0U != vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding) 
           & ((0xfU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U]) 
              != (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__dev_select_outstanding)));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U]) 
           | (0xfffffffeU & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
                              << 0x1dU) | (0x1ffffffeU 
                                           & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U] 
                                              >> 3U)))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U] 
        = ((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
                  >> 3U)) | (0xfffffffeU & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
                                             << 0x1dU) 
                                            | (0x1ffffffeU 
                                               & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[1U] 
                                                  >> 3U)))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
        = ((0x200000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]) 
           | ((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
                     >> 3U)) | (0x1ffffeU & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[2U] 
                                             >> 3U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[0U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [0U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[0U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [0U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[0U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [0U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[0U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [0U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[0U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [0U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[0U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [0U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[0U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [0U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[0U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [0U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[0U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [0U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[1U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [1U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[1U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [1U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[1U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [1U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[1U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [1U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[1U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [1U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[1U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [1U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[1U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [1U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[1U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [1U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[1U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [1U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[2U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [2U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[2U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [2U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[2U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [2U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[2U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [2U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[2U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [2U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[2U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [2U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[2U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [2U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[2U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [2U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[2U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [2U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[0U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [0U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[1U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [1U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[2U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [2U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[3U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [3U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[3U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [3U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[3U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [3U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[3U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [3U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[3U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [3U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[3U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [3U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[3U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [3U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[3U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [3U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[3U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [3U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[3U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [3U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[0U][2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [0U][2U]) | (0xffe00000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U] 
                                         & ((0U == 
                                             (3U & 
                                              vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__hold_all_requests)) 
                                           << 0x15U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[1U][2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [1U][2U]) | (0xffe00000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U] 
                                         & ((1U == 
                                             (3U & 
                                              vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__hold_all_requests)) 
                                           << 0x15U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[2U][2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [2U][2U]) | (0xffe00000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U] 
                                         & ((2U == 
                                             (3U & 
                                              vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__hold_all_requests)) 
                                           << 0x15U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o[3U][2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
            [3U][2U]) | (0xffe00000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o[2U] 
                                         & ((3U == 
                                             (3U & 
                                              vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__hold_all_requests)) 
                                           << 0x15U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[0U][2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [0U][2U]) | (0xffe00000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                         & ((0U == 
                                             (0xfU 
                                              & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__hold_all_requests)) 
                                           << 0x15U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[0U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [0U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[0U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [0U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[0U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [0U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[0U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [0U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[0U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [0U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[0U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [0U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[0U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [0U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[0U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [0U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[0U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [0U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[1U][2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [1U][2U]) | (0xffe00000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                         & ((1U == 
                                             (0xfU 
                                              & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__hold_all_requests)) 
                                           << 0x15U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[1U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [1U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[1U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [1U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[1U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [1U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[1U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [1U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[1U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [1U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[1U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [1U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[1U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [1U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[1U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [1U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[1U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [1U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[2U][2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [2U][2U]) | (0xffe00000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                         & ((2U == 
                                             (0xfU 
                                              & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__hold_all_requests)) 
                                           << 0x15U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[2U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [2U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[2U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [2U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[2U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [2U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[2U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [2U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[2U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [2U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[2U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [2U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[2U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [2U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[2U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [2U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[2U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [2U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[3U][2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [3U][2U]) | (0xffe00000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                         & ((3U == 
                                             (0xfU 
                                              & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__hold_all_requests)) 
                                           << 0x15U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[3U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [3U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[3U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [3U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[3U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [3U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[3U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [3U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[3U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [3U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[3U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [3U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[3U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [3U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[3U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [3U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[3U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [3U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[4U][2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [4U][2U]) | (0xffe00000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                         & ((4U == 
                                             (0xfU 
                                              & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__hold_all_requests)) 
                                           << 0x15U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[4U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [4U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[4U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [4U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[4U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [4U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[4U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [4U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[4U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [4U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[4U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [4U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[4U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [4U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[4U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [4U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[4U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [4U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[5U][2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [5U][2U]) | (0xffe00000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                         & ((5U == 
                                             (0xfU 
                                              & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__hold_all_requests)) 
                                           << 0x15U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[5U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [5U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[5U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [5U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[5U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [5U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[5U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [5U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[5U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [5U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[5U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [5U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[5U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [5U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[5U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [5U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[5U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [5U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[6U][2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [6U][2U]) | (0xffe00000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                         & ((6U == 
                                             (0xfU 
                                              & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__hold_all_requests)) 
                                           << 0x15U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[6U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [6U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[6U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [6U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[6U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [6U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[6U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [6U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[6U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [6U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[6U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [6U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[6U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [6U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[6U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [6U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[6U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [6U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[7U][2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [7U][2U]) | (0xffe00000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                         & ((7U == 
                                             (0xfU 
                                              & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__hold_all_requests)) 
                                           << 0x15U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[7U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [7U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[7U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [7U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[7U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [7U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[7U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [7U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[7U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [7U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[7U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [7U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[7U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [7U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[7U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [7U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[7U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [7U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[8U][2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [8U][2U]) | (0xffe00000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                         & ((8U == 
                                             (0xfU 
                                              & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__hold_all_requests)) 
                                           << 0x15U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[8U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [8U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[8U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [8U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[8U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [8U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[8U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [8U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[8U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [8U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[8U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [8U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[8U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [8U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[8U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [8U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[8U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [8U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[0U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [0U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[1U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [1U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[2U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [2U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[3U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [3U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[4U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [4U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[5U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [5U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[6U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [6U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[7U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [7U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[8U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [8U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[9U][0U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [9U][0U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[9U][2U] 
        = ((0x1fffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [9U][2U]) | (0xffe00000U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                         & ((9U == 
                                             (0xfU 
                                              & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])) 
                                            << 0x15U)) 
                                        & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__hold_all_requests)) 
                                           << 0x15U))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[9U][2U] 
        = ((0x23ffffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [9U][2U]) | (0x1c0000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[9U][2U] 
        = ((0x3c7fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [9U][2U]) | (0x38000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[9U][2U] 
        = ((0x3f9fffU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [9U][2U]) | (0x6000U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[9U][2U] 
        = ((0x3fe01fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [9U][2U]) | (0x1fe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[9U][1U] 
        = ((0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [9U][1U]) | (0xffffffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[9U][2U] 
        = ((0x3fffe0U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [9U][2U]) | (0x1fU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[9U][1U] 
        = ((0xffffffe1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [9U][1U]) | (0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[9U][0U] 
        = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [9U][0U]) | (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o[9U][1U] 
        = ((0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
            [9U][1U]) | (1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U]));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o 
        = ((0xffffffffffffeULL & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o) 
           | (IData)((IData)((1U & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_rsp_pending)) 
                                    & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_req_pending) 
                                          & (~ vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [3U][0U]))))))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o 
        = ((0xffffffffffffeULL & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o) 
           | (IData)((IData)((1U & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending)) 
                                    & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_req_pending) 
                                          & (~ vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [9U][0U]))))))));
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_i[3U] 
        = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o;
    vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_i[9U] 
        = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o;
}
