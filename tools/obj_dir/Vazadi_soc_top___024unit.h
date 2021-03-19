// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vazadi_soc_top.h for the primary calling header

#ifndef _VAZADI_SOC_TOP___024UNIT_H_
#define _VAZADI_SOC_TOP___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vazadi_soc_top__Syms;
class Vazadi_soc_top_VerilatedVcd;


//----------

VL_MODULE(Vazadi_soc_top___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    Vazadi_soc_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vazadi_soc_top___024unit);  ///< Copying not allowed
  public:
    Vazadi_soc_top___024unit(const char* name = "TOP");
    ~Vazadi_soc_top___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(Vazadi_soc_top__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
