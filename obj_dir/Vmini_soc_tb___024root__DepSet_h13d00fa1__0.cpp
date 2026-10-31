// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmini_soc_tb.h for the primary calling header

#include "Vmini_soc_tb__pch.h"
#include "Vmini_soc_tb__Syms.h"
#include "Vmini_soc_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vmini_soc_tb___024root___eval_initial__TOP__Vtiming__0(Vmini_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "mini_soc_tb.v", 
                                         17);
    vlSelfRef.mini_soc_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "mini_soc_tb.v", 
                                         18);
    vlSelfRef.mini_soc_tb__DOT__alu_sel = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x1eULL, nullptr, 
                                         "mini_soc_tb.v", 
                                         19);
    vlSelfRef.mini_soc_tb__DOT__mux_sel = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x28ULL, nullptr, 
                                         "mini_soc_tb.v", 
                                         20);
    vlSelfRef.mini_soc_tb__DOT__alu_sel = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "mini_soc_tb.v", 
                                         21);
    vlSelfRef.mini_soc_tb__DOT__mux_sel = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "mini_soc_tb.v", 
                                         22);
    VL_FINISH_MT("mini_soc_tb.v", 22, "");
}

VL_INLINE_OPT VlCoroutine Vmini_soc_tb___024root___eval_initial__TOP__Vtiming__1(Vmini_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "mini_soc_tb.v", 
                                             7);
        vlSelfRef.mini_soc_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.mini_soc_tb__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmini_soc_tb___024root___dump_triggers__act(Vmini_soc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmini_soc_tb___024root___eval_triggers__act(Vmini_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_triggers__act\n"); );
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.mini_soc_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mini_soc_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__mini_soc_tb__DOT__clk__0 
        = vlSelfRef.mini_soc_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmini_soc_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
