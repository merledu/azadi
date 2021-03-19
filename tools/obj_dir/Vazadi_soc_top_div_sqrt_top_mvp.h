// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vazadi_soc_top.h for the primary calling header

#ifndef _VAZADI_SOC_TOP_DIV_SQRT_TOP_MVP_H_
#define _VAZADI_SOC_TOP_DIV_SQRT_TOP_MVP_H_  // guard

#include "verilated_heavy.h"

//==========

class Vazadi_soc_top__Syms;
class Vazadi_soc_top_VerilatedVcd;


//----------

VL_MODULE(Vazadi_soc_top_div_sqrt_top_mvp) {
  public:
    
    // PORTS
    VL_IN8(Clk_CI,0,0);
    VL_IN8(Rst_RBI,0,0);
    VL_IN8(Div_start_SI,0,0);
    VL_IN8(Sqrt_start_SI,0,0);
    VL_IN8(RM_SI,2,0);
    VL_IN8(Precision_ctl_SI,5,0);
    VL_IN8(Format_sel_SI,1,0);
    VL_IN8(Kill_SI,0,0);
    VL_OUT8(Fflags_SO,4,0);
    VL_OUT8(Ready_SO,0,0);
    VL_OUT8(Done_SO,0,0);
    VL_IN64(Operand_a_DI,63,0);
    VL_IN64(Operand_b_DI,63,0);
    VL_OUT64(Result_DO,63,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__Div_enable_S;
        CData/*0:0*/ __PVT__Sqrt_enable_S;
        CData/*0:0*/ __PVT__Special_case_SB;
        CData/*0:0*/ __PVT__Special_case_dly_SB;
        CData/*0:0*/ __PVT__preprocess_U0__DOT__Sign_a_D;
        CData/*0:0*/ __PVT__preprocess_U0__DOT__Start_S;
        CData/*0:0*/ __PVT__preprocess_U0__DOT__Mant_a_prenorm_zero_S;
        CData/*0:0*/ __PVT__preprocess_U0__DOT__Mant_b_prenorm_zero_S;
        CData/*0:0*/ __PVT__preprocess_U0__DOT__Exp_a_prenorm_Inf_NaN_S;
        CData/*0:0*/ __PVT__preprocess_U0__DOT__Exp_b_prenorm_Inf_NaN_S;
        CData/*0:0*/ __PVT__preprocess_U0__DOT__Zero_a_SN;
        CData/*0:0*/ __PVT__preprocess_U0__DOT__Zero_a_SP;
        CData/*0:0*/ __PVT__preprocess_U0__DOT__Zero_b_SN;
        CData/*0:0*/ __PVT__preprocess_U0__DOT__Zero_b_SP;
        CData/*0:0*/ __PVT__preprocess_U0__DOT__Inf_a_SN;
        CData/*0:0*/ __PVT__preprocess_U0__DOT__Inf_a_SP;
        CData/*0:0*/ __PVT__preprocess_U0__DOT__Inf_b_SN;
        CData/*0:0*/ __PVT__preprocess_U0__DOT__Inf_b_SP;
        CData/*0:0*/ __PVT__preprocess_U0__DOT__NaN_a_SN;
        CData/*0:0*/ __PVT__preprocess_U0__DOT__NaN_a_SP;
        CData/*0:0*/ __PVT__preprocess_U0__DOT__NaN_b_SN;
        CData/*0:0*/ __PVT__preprocess_U0__DOT__NaN_b_SP;
        CData/*0:0*/ __PVT__preprocess_U0__DOT__SNaN_SN;
        CData/*0:0*/ __PVT__preprocess_U0__DOT__SNaN_SP;
        CData/*0:0*/ __PVT__preprocess_U0__DOT__Sign_z_DN;
        CData/*0:0*/ __PVT__preprocess_U0__DOT__Sign_z_DP;
        CData/*2:0*/ __PVT__preprocess_U0__DOT__RM_DN;
        CData/*2:0*/ __PVT__preprocess_U0__DOT__RM_DP;
        WData/*317:0*/ __PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_lut[10];
        WData/*383:0*/ __PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[12];
        WData/*317:0*/ __PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_lut[10];
        WData/*383:0*/ __PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[12];
        CData/*1:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S;
        CData/*5:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Precision_ctl_S;
        CData/*5:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__State_ctl_S;
        CData/*0:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_S;
        CData/*0:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_start_dly_S;
        CData/*5:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Crtl_cnt_S;
        CData/*0:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Start_dly_S;
        CData/*0:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S;
        CData/*0:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Final_state_S;
        CData/*2:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_0;
        CData/*4:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_1;
        CData/*7:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_2;
        CData/*0:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_carry_DO;
        CData/*3:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S;
        CData/*0:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sel_b_for_fou_S;
        CData/*0:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__DOT__Cin_D;
        CData/*0:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__DOT__Cin_D;
        CData/*0:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__DOT__Cin_D;
        CData/*0:0*/ __PVT__fpu_norm_U0__DOT__Sign_res_D;
        CData/*0:0*/ __PVT__fpu_norm_U0__DOT__Exp_OF_S;
        CData/*1:0*/ __PVT__fpu_norm_U0__DOT__Mant_lower_D;
        CData/*0:0*/ __PVT__fpu_norm_U0__DOT__Mant_sticky_bit_D;
        CData/*0:0*/ __PVT__fpu_norm_U0__DOT__Mant_roundUp_S;
        CData/*0:0*/ __PVT__fpu_norm_U0__DOT__Mant_rounded_S;
        SData/*10:0*/ __PVT__preprocess_U0__DOT__Exp_a_D;
        SData/*10:0*/ __PVT__preprocess_U0__DOT__Exp_b_D;
        SData/*11:0*/ __PVT__preprocess_U0__DOT__Exp_a_norm_DN;
        SData/*11:0*/ __PVT__preprocess_U0__DOT__Exp_a_norm_DP;
        SData/*11:0*/ __PVT__preprocess_U0__DOT__Exp_b_norm_DN;
        SData/*11:0*/ __PVT__preprocess_U0__DOT__Exp_b_norm_DP;
        SData/*10:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_3;
        SData/*13:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_4;
    };
    struct {
        SData/*12:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DN;
        SData/*12:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Exp_result_prenorm_DP;
        SData/*10:0*/ __PVT__fpu_norm_U0__DOT__Exp_res_norm_D;
        SData/*10:0*/ __PVT__fpu_norm_U0__DOT__Exp_before_format_ctl_D;
        IData/*16:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_5;
        IData/*19:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_6;
        IData/*22:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_7;
        IData/*25:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_8;
        IData/*28:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_9;
        IData/*31:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_10;
        IData/*31:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_BIAS_AONE;
        IData/*31:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_HALF_BIAS;
        QData/*56:0*/ __PVT__Mant_z_D;
        QData/*51:0*/ __PVT__preprocess_U0__DOT__Mant_a_NonH_D;
        QData/*51:0*/ __PVT__preprocess_U0__DOT__Mant_b_NonH_D;
        QData/*52:0*/ __PVT__preprocess_U0__DOT__Mant_a_D;
        QData/*52:0*/ __PVT__preprocess_U0__DOT__Mant_b_D;
        QData/*52:0*/ __PVT__preprocess_U0__DOT__Mant_a_norm_DN;
        QData/*52:0*/ __PVT__preprocess_U0__DOT__Mant_a_norm_DP;
        QData/*52:0*/ __PVT__preprocess_U0__DOT__Mant_b_norm_DN;
        QData/*52:0*/ __PVT__preprocess_U0__DOT__Mant_b_norm_DP;
        QData/*63:0*/ __PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__sel_nodes;
        QData/*52:0*/ __PVT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__in_tmp;
        QData/*63:0*/ __PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__sel_nodes;
        QData/*52:0*/ __PVT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__in_tmp;
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DN;
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP;
        QData/*56:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DP;
        QData/*53:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_DB;
        QData/*53:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Mant_D_sqrt_Norm;
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_one_58;
        QData/*58:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_one_59;
        QData/*59:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_one_60;
        QData/*34:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_11;
        QData/*37:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_12;
        QData/*40:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_13;
        QData/*43:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_14;
        QData/*46:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_15;
        QData/*49:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_16;
        QData/*52:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_17;
        QData/*55:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_18;
        QData/*61:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Qcnt_three_20;
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q0;
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt0;
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_0;
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q1;
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt1;
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_1;
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q2;
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt2;
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_2;
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_Q3;
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt3;
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Q_sqrt_com_3;
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Denominator_se_format_DB;
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__First_iteration_cell_div_a_D;
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fou_iteration_cell_div_a_D;
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fou_iteration_cell_div_b_D;
        QData/*56:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Quotient_DN;
        QData/*52:0*/ __PVT__fpu_norm_U0__DOT__Mant_res_norm_D;
        QData/*56:0*/ __PVT__fpu_norm_U0__DOT__Mant_forround_D;
        QData/*52:0*/ __PVT__fpu_norm_U0__DOT__Mant_upper_D;
        QData/*53:0*/ __PVT__fpu_norm_U0__DOT__Mant_upperRounded_D;
        QData/*51:0*/ __PVT__fpu_norm_U0__DOT__Mant_before_format_ctl_D;
    };
    struct {
        CData/*1:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI[4];
        CData/*1:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DO[4];
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_D[4];
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_D[4];
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_a_BMASK_D[4];
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_b_BMASK_D[4];
        CData/*0:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D[4];
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_D[4];
        QData/*57:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D[4];
        CData/*0:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_enable_SI[4];
        CData/*0:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Div_start_dly_SI[4];
        CData/*0:0*/ __PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_enable_SI[4];
    };
    
    // LOCAL VARIABLES
    CData/*0:0*/ preprocess_U0__DOT__LOD_Ua__DOT____Vlvbound1;
    CData/*0:0*/ preprocess_U0__DOT__LOD_Ub__DOT____Vlvbound1;
    CData/*1:0*/ nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__0__KET____DOT__iteration_div_sqrt__D_DO;
    CData/*1:0*/ nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__1__KET____DOT__iteration_div_sqrt__D_DO;
    CData/*1:0*/ nrbd_nrsc_U0__DOT__control_U0__DOT____Vcellout__genblk4__BRA__2__KET____DOT__iteration_div_sqrt__D_DO;
    CData/*7:0*/ __Vtableidx1;
    CData/*1:0*/ __Vtableidx2;
    CData/*7:0*/ __Vtableidx3;
    CData/*1:0*/ __Vtableidx4;
    static CData/*5:0*/ __Vtable1___PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__State_ctl_S[256];
    static IData/*31:0*/ __Vtable2___PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_BIAS_AONE[4];
    static IData/*31:0*/ __Vtable2___PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_HALF_BIAS[4];
    static CData/*5:0*/ __Vtable3___PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__State_ctl_S[256];
    static IData/*31:0*/ __Vtable4___PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_BIAS_AONE[4];
    static IData/*31:0*/ __Vtable4___PVT__nrbd_nrsc_U0__DOT__control_U0__DOT__C_HALF_BIAS[4];
    
    // INTERNAL VARIABLES
  private:
    Vazadi_soc_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vazadi_soc_top_div_sqrt_top_mvp);  ///< Copying not allowed
  public:
    Vazadi_soc_top_div_sqrt_top_mvp(const char* name = "TOP");
    ~Vazadi_soc_top_div_sqrt_top_mvp();
    
    // INTERNAL METHODS
    void __Vconfigure(Vazadi_soc_top__Syms* symsp, bool first);
    void _combo__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__15(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _combo__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__4(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _combo__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__9(Vazadi_soc_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _multiclk__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__11(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _multiclk__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__10(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__12(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__7(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__6(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__2(Vazadi_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__3(Vazadi_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__azadi_soc_top__DOT__u_top__DOT__u_core__DOT__i_fpnew_top__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__1(Vazadi_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
