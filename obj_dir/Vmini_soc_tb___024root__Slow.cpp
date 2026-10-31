// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmini_soc_tb.h for the primary calling header

#include "Vmini_soc_tb__pch.h"
#include "Vmini_soc_tb__Syms.h"
#include "Vmini_soc_tb___024root.h"

void Vmini_soc_tb___024root___ctor_var_reset(Vmini_soc_tb___024root* vlSelf);

Vmini_soc_tb___024root::Vmini_soc_tb___024root(Vmini_soc_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmini_soc_tb___024root___ctor_var_reset(this);
}

void Vmini_soc_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmini_soc_tb___024root::~Vmini_soc_tb___024root() {
}
