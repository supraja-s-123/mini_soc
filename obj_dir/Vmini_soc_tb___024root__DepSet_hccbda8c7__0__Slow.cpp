// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmini_soc_tb.h for the primary calling header

#include "Vmini_soc_tb__pch.h"
#include "Vmini_soc_tb___024root.h"

VL_ATTR_COLD void Vmini_soc_tb___024root___eval_static__TOP(Vmini_soc_tb___024root* vlSelf);

VL_ATTR_COLD void Vmini_soc_tb___024root___eval_static(Vmini_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_static\n"); );
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmini_soc_tb___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__mini_soc_tb__DOT__clk__0 = 0U;
}

VL_ATTR_COLD void Vmini_soc_tb___024root___eval_static__TOP(Vmini_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_static__TOP\n"); );
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mini_soc_tb__DOT__clk = 0U;
    vlSelfRef.mini_soc_tb__DOT__rst = 1U;
    vlSelfRef.mini_soc_tb__DOT__alu_sel = 0U;
    vlSelfRef.mini_soc_tb__DOT__mux_sel = 0U;
}

VL_ATTR_COLD void Vmini_soc_tb___024root___eval_final(Vmini_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_final\n"); );
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmini_soc_tb___024root___dump_triggers__stl(Vmini_soc_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmini_soc_tb___024root___eval_phase__stl(Vmini_soc_tb___024root* vlSelf);

VL_ATTR_COLD void Vmini_soc_tb___024root___eval_settle(Vmini_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_settle\n"); );
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vmini_soc_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("mini_soc_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmini_soc_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmini_soc_tb___024root___dump_triggers__stl(Vmini_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___dump_triggers__stl\n"); );
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vmini_soc_tb___024root___act_sequent__TOP__0(Vmini_soc_tb___024root* vlSelf);

VL_ATTR_COLD void Vmini_soc_tb___024root___eval_stl(Vmini_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_stl\n"); );
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vmini_soc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vmini_soc_tb___024root___eval_triggers__stl(Vmini_soc_tb___024root* vlSelf);

VL_ATTR_COLD bool Vmini_soc_tb___024root___eval_phase__stl(Vmini_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_phase__stl\n"); );
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmini_soc_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vmini_soc_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmini_soc_tb___024root___dump_triggers__act(Vmini_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___dump_triggers__act\n"); );
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge mini_soc_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmini_soc_tb___024root___dump_triggers__nba(Vmini_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___dump_triggers__nba\n"); );
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge mini_soc_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmini_soc_tb___024root___ctor_var_reset(Vmini_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___ctor_var_reset\n"); );
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->mini_soc_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10022745824932500218ull);
    vlSelf->mini_soc_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4049076770788761030ull);
    vlSelf->mini_soc_tb__DOT__alu_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4872317257931937833ull);
    vlSelf->mini_soc_tb__DOT__mux_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5928130395891176042ull);
    vlSelf->mini_soc_tb__DOT__dut__DOT__count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1747579235660627619ull);
    vlSelf->mini_soc_tb__DOT__dut__DOT__alu_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4698820809009738203ull);
    vlSelf->mini_soc_tb__DOT__dut__DOT____Vcellout__u_alu__result = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18188248012824604423ull);
    vlSelf->__Vtrigprevexpr___TOP__mini_soc_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11784065017284984278ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
