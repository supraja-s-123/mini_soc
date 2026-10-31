// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmini_soc_tb.h for the primary calling header

#include "Vmini_soc_tb__pch.h"
#include "Vmini_soc_tb___024root.h"

VlCoroutine Vmini_soc_tb___024root___eval_initial__TOP__Vtiming__0(Vmini_soc_tb___024root* vlSelf);
VlCoroutine Vmini_soc_tb___024root___eval_initial__TOP__Vtiming__1(Vmini_soc_tb___024root* vlSelf);

void Vmini_soc_tb___024root___eval_initial(Vmini_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_initial\n"); );
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmini_soc_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vmini_soc_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vmini_soc_tb___024root___act_sequent__TOP__0(Vmini_soc_tb___024root* vlSelf);

void Vmini_soc_tb___024root___eval_act(Vmini_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_act\n"); );
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vmini_soc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vmini_soc_tb___024root___act_sequent__TOP__0(Vmini_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___act_sequent__TOP__0\n"); );
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.mini_soc_tb__DOT__alu_sel) {
        if (vlSelfRef.mini_soc_tb__DOT__alu_sel) {
            vlSelfRef.mini_soc_tb__DOT__dut__DOT____Vcellout__u_alu__result 
                = (3U & (((IData)(vlSelfRef.mini_soc_tb__DOT__dut__DOT__count) 
                          >> 2U) - (IData)(vlSelfRef.mini_soc_tb__DOT__dut__DOT__count)));
        }
    } else {
        vlSelfRef.mini_soc_tb__DOT__dut__DOT____Vcellout__u_alu__result 
            = (3U & (((IData)(vlSelfRef.mini_soc_tb__DOT__dut__DOT__count) 
                      >> 2U) + (IData)(vlSelfRef.mini_soc_tb__DOT__dut__DOT__count)));
    }
}

void Vmini_soc_tb___024root___nba_sequent__TOP__0(Vmini_soc_tb___024root* vlSelf);

void Vmini_soc_tb___024root___eval_nba(Vmini_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_nba\n"); );
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmini_soc_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmini_soc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vmini_soc_tb___024root___nba_sequent__TOP__0(Vmini_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___nba_sequent__TOP__0\n"); );
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mini_soc_tb__DOT__dut__DOT__count = ((IData)(vlSelfRef.mini_soc_tb__DOT__rst)
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelfRef.mini_soc_tb__DOT__dut__DOT__count))));
}

void Vmini_soc_tb___024root___timing_resume(Vmini_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___timing_resume\n"); );
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vmini_soc_tb___024root___eval_triggers__act(Vmini_soc_tb___024root* vlSelf);

bool Vmini_soc_tb___024root___eval_phase__act(Vmini_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_phase__act\n"); );
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmini_soc_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmini_soc_tb___024root___timing_resume(vlSelf);
        Vmini_soc_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmini_soc_tb___024root___eval_phase__nba(Vmini_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_phase__nba\n"); );
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmini_soc_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmini_soc_tb___024root___dump_triggers__nba(Vmini_soc_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmini_soc_tb___024root___dump_triggers__act(Vmini_soc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmini_soc_tb___024root___eval(Vmini_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval\n"); );
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmini_soc_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("mini_soc_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmini_soc_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("mini_soc_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmini_soc_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmini_soc_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmini_soc_tb___024root___eval_debug_assertions(Vmini_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_debug_assertions\n"); );
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
