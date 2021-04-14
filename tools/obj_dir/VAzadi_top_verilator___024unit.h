// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAzadi_top_verilator.h for the primary calling header

#ifndef _VAZADI_TOP_VERILATOR___024UNIT_H_
#define _VAZADI_TOP_VERILATOR___024UNIT_H_  // guard

#include "verilated_heavy.h"
#include "verilated_threads.h"
#include "VAzadi_top_verilator__Dpi.h"

//==========

class VAzadi_top_verilator__Syms;
<<<<<<< HEAD
class VAzadi_top_verilator_VerilatedFst;
=======
class VAzadi_top_verilator_VerilatedVcd;
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d


//----------

VL_MODULE(VAzadi_top_verilator___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VAzadi_top_verilator__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAzadi_top_verilator___024unit);  ///< Copying not allowed
  public:
    VAzadi_top_verilator___024unit(const char* name = "TOP");
    ~VAzadi_top_verilator___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VAzadi_top_verilator__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
<<<<<<< HEAD
    static void traceInit(void* userp, VerilatedFst* tracep, uint32_t code) VL_ATTR_COLD;
=======
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
>>>>>>> 8883d9b324c489ad01ca11f681acb89fb7eab79d
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
