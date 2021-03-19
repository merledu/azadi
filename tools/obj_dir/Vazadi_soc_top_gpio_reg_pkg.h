// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vazadi_soc_top.h for the primary calling header

#ifndef _VAZADI_SOC_TOP_GPIO_REG_PKG_H_
#define _VAZADI_SOC_TOP_GPIO_REG_PKG_H_  // guard

#include "verilated_heavy.h"

//==========

class Vazadi_soc_top__Syms;
class Vazadi_soc_top_VerilatedVcd;


//----------

VL_MODULE(Vazadi_soc_top_gpio_reg_pkg) {
  public:
    
    // INTERNAL VARIABLES
  private:
    Vazadi_soc_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    CData/*3:0*/ __PVT__GPIO_PERMIT[15];
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vazadi_soc_top_gpio_reg_pkg);  ///< Copying not allowed
  public:
    Vazadi_soc_top_gpio_reg_pkg(const char* name = "TOP");
    ~Vazadi_soc_top_gpio_reg_pkg();
    
    // INTERNAL METHODS
    void __Vconfigure(Vazadi_soc_top__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__gpio_reg_pkg__1(Vazadi_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
