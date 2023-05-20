// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "verilated.h"

#include "Vtb__Syms.h"
#include "Vtb___024root.h"

VL_INLINE_OPT void Vtb___024root___ico_sequent__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb__DOT____Vcellinp__P874x__P1_in = (0xffU 
                                                 & ((~ (IData)(vlSelf->tb__DOT__P1_dir)) 
                                                    | (IData)(vlSelf->P1_in)));
    vlSelf->tb__DOT____Vcellinp__P874x__P2_in = (0xffU 
                                                 & ((0xf7U 
                                                     & (IData)(vlSelf->P2_in)) 
                                                    | ((~ (IData)(vlSelf->tb__DOT__P2_dir)) 
                                                       | ((IData)(vlSelf->tb__DOT__U_txe) 
                                                          << 3U))));
    vlSelf->tb__DOT__P874x__DOT__jump_cond_tbl = (1U 
                                                  & (((((((((2U 
                                                             == 
                                                             (0xfU 
                                                              & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                                 >> 4U))) 
                                                            | (3U 
                                                               == 
                                                               (0xfU 
                                                                & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                                   >> 4U)))) 
                                                           | (4U 
                                                              == 
                                                              (0xfU 
                                                               & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                                  >> 4U)))) 
                                                          | (5U 
                                                             == 
                                                             (0xfU 
                                                              & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                                 >> 4U)))) 
                                                         | (7U 
                                                            == 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                                >> 4U)))) 
                                                        | (8U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                               >> 4U)))) 
                                                       | (9U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                              >> 4U)))) 
                                                      | (0xbU 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                             >> 4U))))
                                                      ? 
                                                     ((2U 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                           >> 4U))) 
                                                      | ((3U 
                                                          != 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                              >> 4U))) 
                                                         & ((4U 
                                                             != 
                                                             (0xfU 
                                                              & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                                 >> 4U))) 
                                                            & ((5U 
                                                                == 
                                                                (0xfU 
                                                                 & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                                    >> 4U))) 
                                                               | ((7U 
                                                                   == 
                                                                   (0xfU 
                                                                    & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                                       >> 4U)))
                                                                   ? (IData)(vlSelf->tb__DOT__P874x__DOT__F1)
                                                                   : 
                                                                  ((8U 
                                                                    == 
                                                                    (0xfU 
                                                                     & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                                        >> 4U)))
                                                                    ? (IData)(vlSelf->intb)
                                                                    : 
                                                                   ((9U 
                                                                     == 
                                                                     (0xfU 
                                                                      & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                                         >> 4U)))
                                                                     ? 
                                                                    (0U 
                                                                     != (IData)(vlSelf->tb__DOT__P874x__DOT__A))
                                                                     : (IData)(vlSelf->tb__DOT__P874x__DOT__F0))))))))
                                                      : 
                                                     ((0xcU 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                           >> 4U)))
                                                       ? 
                                                      (0U 
                                                       == (IData)(vlSelf->tb__DOT__P874x__DOT__A))
                                                       : 
                                                      ((0xeU 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                            >> 4U)))
                                                        ? 
                                                       (~ (IData)(vlSelf->tb__DOT__P874x__DOT__carry))
                                                        : (IData)(
                                                                  ((0xf0U 
                                                                    == 
                                                                    (0xf0U 
                                                                     & (IData)(vlSelf->tb__DOT__P874x__DOT__instr))) 
                                                                   & (IData)(vlSelf->tb__DOT__P874x__DOT__carry)))))));
    vlSelf->tb__DOT__P874x__DOT__jump_cond = (1U & 
                                              ((IData)(vlSelf->tb__DOT__P874x__DOT__is_djnz)
                                                ? (1U 
                                                   != (IData)(vlSelf->tb__DOT__P874x__DOT__RAM_val))
                                                : (
                                                   (2U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))
                                                    ? 
                                                   ((IData)(vlSelf->tb__DOT__P874x__DOT__A) 
                                                    >> 
                                                    (7U 
                                                     & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                        >> 5U)))
                                                    : 
                                                   ((6U 
                                                     != 
                                                     (0xfU 
                                                      & (IData)(vlSelf->tb__DOT__P874x__DOT__instr))) 
                                                    | (IData)(vlSelf->tb__DOT__P874x__DOT__jump_cond_tbl)))));
}

void Vtb___024root___eval_ico(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb__DOT__P874x__DOT____VdfgTmp_h140fb42c__0;
    tb__DOT__P874x__DOT____VdfgTmp_h140fb42c__0 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb__DOT__RAM__v0;
    __Vdlyvdim0__tb__DOT__RAM__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__RAM__v0;
    __Vdlyvval__tb__DOT__RAM__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__RAM__v0;
    __Vdlyvset__tb__DOT__RAM__v0 = 0;
    CData/*2:0*/ __Vdly__tb__DOT__tx_timeout;
    __Vdly__tb__DOT__tx_timeout = 0;
    SData/*8:0*/ __Vdly__tb__DOT__P874x__DOT__timer_div;
    __Vdly__tb__DOT__P874x__DOT__timer_div = 0;
    CData/*7:0*/ __Vdly__tb__DOT__P874x__DOT__timer;
    __Vdly__tb__DOT__P874x__DOT__timer = 0;
    CData/*7:0*/ __Vdly__tb__DOT__P874x__DOT__last_timer;
    __Vdly__tb__DOT__P874x__DOT__last_timer = 0;
    CData/*0:0*/ __Vdly__tb__DOT__P874x__DOT__needs_trupt;
    __Vdly__tb__DOT__P874x__DOT__needs_trupt = 0;
    SData/*10:0*/ __Vdly__tb__DOT__P874x__DOT__PC;
    __Vdly__tb__DOT__P874x__DOT__PC = 0;
    CData/*7:0*/ __Vdly__tb__DOT__P874x__DOT__A;
    __Vdly__tb__DOT__P874x__DOT__A = 0;
    CData/*0:0*/ __Vdly__tb__DOT__P874x__DOT__carry;
    __Vdly__tb__DOT__P874x__DOT__carry = 0;
    CData/*7:0*/ __Vdly__tb__DOT__P1_dir;
    __Vdly__tb__DOT__P1_dir = 0;
    CData/*7:0*/ __Vdly__tb__DOT__P2_dir;
    __Vdly__tb__DOT__P2_dir = 0;
    CData/*0:0*/ __Vdly__tb__DOT__P874x__DOT__F0;
    __Vdly__tb__DOT__P874x__DOT__F0 = 0;
    CData/*0:0*/ __Vdly__tb__DOT__P874x__DOT__F1;
    __Vdly__tb__DOT__P874x__DOT__F1 = 0;
    CData/*2:0*/ __Vdly__tb__DOT__P874x__DOT__SP;
    __Vdly__tb__DOT__P874x__DOT__SP = 0;
    CData/*0:0*/ __Vdly__tb__DOT__P874x__DOT__intr_en;
    __Vdly__tb__DOT__P874x__DOT__intr_en = 0;
    CData/*0:0*/ __Vdly__tb__DOT__P874x__DOT__trupt_en;
    __Vdly__tb__DOT__P874x__DOT__trupt_en = 0;
    CData/*0:0*/ __Vdly__tb__DOT__P874x__DOT__reg_bank;
    __Vdly__tb__DOT__P874x__DOT__reg_bank = 0;
    CData/*1:0*/ __Vdly__tb__DOT__P874x__DOT__in_intr;
    __Vdly__tb__DOT__P874x__DOT__in_intr = 0;
    CData/*0:0*/ __Vdly__tb__DOT__P874x__DOT__intr_en_delay;
    __Vdly__tb__DOT__P874x__DOT__intr_en_delay = 0;
    CData/*1:0*/ __Vdly__tb__DOT__P874x__DOT__state;
    __Vdly__tb__DOT__P874x__DOT__state = 0;
    CData/*6:0*/ __Vdly__tb__DOT__RAM_addr;
    __Vdly__tb__DOT__RAM_addr = 0;
    CData/*7:0*/ __Vdly__tb__DOT__P874x__DOT__instr;
    __Vdly__tb__DOT__P874x__DOT__instr = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__P874x__DOT__index_regs__v0;
    __Vdlyvdim0__tb__DOT__P874x__DOT__index_regs__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__P874x__DOT__index_regs__v0;
    __Vdlyvval__tb__DOT__P874x__DOT__index_regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__P874x__DOT__index_regs__v0;
    __Vdlyvset__tb__DOT__P874x__DOT__index_regs__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__P874x__DOT__index_regs__v1;
    __Vdlyvdim0__tb__DOT__P874x__DOT__index_regs__v1 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__P874x__DOT__index_regs__v1;
    __Vdlyvval__tb__DOT__P874x__DOT__index_regs__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__P874x__DOT__index_regs__v1;
    __Vdlyvset__tb__DOT__P874x__DOT__index_regs__v1 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__P874x__DOT__index_regs__v2;
    __Vdlyvdim0__tb__DOT__P874x__DOT__index_regs__v2 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__P874x__DOT__index_regs__v2;
    __Vdlyvval__tb__DOT__P874x__DOT__index_regs__v2 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__P874x__DOT__index_regs__v2;
    __Vdlyvset__tb__DOT__P874x__DOT__index_regs__v2 = 0;
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__P874x__DOT__index_regs__v3;
    __Vdlyvdim0__tb__DOT__P874x__DOT__index_regs__v3 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__P874x__DOT__index_regs__v3;
    __Vdlyvval__tb__DOT__P874x__DOT__index_regs__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__P874x__DOT__index_regs__v3;
    __Vdlyvset__tb__DOT__P874x__DOT__index_regs__v3 = 0;
    // Body
    __Vdly__tb__DOT__P874x__DOT__intr_en_delay = vlSelf->tb__DOT__P874x__DOT__intr_en_delay;
    __Vdly__tb__DOT__P874x__DOT__trupt_en = vlSelf->tb__DOT__P874x__DOT__trupt_en;
    __Vdly__tb__DOT__P874x__DOT__intr_en = vlSelf->tb__DOT__P874x__DOT__intr_en;
    __Vdly__tb__DOT__P874x__DOT__needs_trupt = vlSelf->tb__DOT__P874x__DOT__needs_trupt;
    __Vdly__tb__DOT__P874x__DOT__last_timer = vlSelf->tb__DOT__P874x__DOT__last_timer;
    __Vdly__tb__DOT__P874x__DOT__timer_div = vlSelf->tb__DOT__P874x__DOT__timer_div;
    __Vdly__tb__DOT__P874x__DOT__timer = vlSelf->tb__DOT__P874x__DOT__timer;
    __Vdly__tb__DOT__P1_dir = vlSelf->tb__DOT__P1_dir;
    __Vdly__tb__DOT__P2_dir = vlSelf->tb__DOT__P2_dir;
    __Vdly__tb__DOT__P874x__DOT__SP = vlSelf->tb__DOT__P874x__DOT__SP;
    __Vdly__tb__DOT__P874x__DOT__F1 = vlSelf->tb__DOT__P874x__DOT__F1;
    __Vdly__tb__DOT__P874x__DOT__F0 = vlSelf->tb__DOT__P874x__DOT__F0;
    __Vdly__tb__DOT__P874x__DOT__carry = vlSelf->tb__DOT__P874x__DOT__carry;
    __Vdly__tb__DOT__tx_timeout = vlSelf->tb__DOT__tx_timeout;
    __Vdly__tb__DOT__P874x__DOT__in_intr = vlSelf->tb__DOT__P874x__DOT__in_intr;
    __Vdly__tb__DOT__P874x__DOT__state = vlSelf->tb__DOT__P874x__DOT__state;
    __Vdly__tb__DOT__P874x__DOT__PC = vlSelf->tb__DOT__P874x__DOT__PC;
    __Vdly__tb__DOT__P874x__DOT__reg_bank = vlSelf->tb__DOT__P874x__DOT__reg_bank;
    __Vdlyvset__tb__DOT__P874x__DOT__index_regs__v0 = 0U;
    __Vdlyvset__tb__DOT__P874x__DOT__index_regs__v1 = 0U;
    __Vdlyvset__tb__DOT__P874x__DOT__index_regs__v2 = 0U;
    __Vdlyvset__tb__DOT__P874x__DOT__index_regs__v3 = 0U;
    __Vdly__tb__DOT__P874x__DOT__A = vlSelf->tb__DOT__P874x__DOT__A;
    __Vdly__tb__DOT__RAM_addr = vlSelf->tb__DOT__RAM_addr;
    __Vdly__tb__DOT__P874x__DOT__instr = vlSelf->tb__DOT__P874x__DOT__instr;
    __Vdlyvset__tb__DOT__RAM__v0 = 0U;
    if ((0U != (IData)(vlSelf->tb__DOT__RAM_wen))) {
        __Vdlyvval__tb__DOT__RAM__v0 = vlSelf->tb__DOT__RAM_newval;
        __Vdlyvset__tb__DOT__RAM__v0 = 1U;
        __Vdlyvdim0__tb__DOT__RAM__v0 = (0x1fU & ((IData)(vlSelf->tb__DOT__RAM_waddr) 
                                                  >> 2U));
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if ((1U & (IData)(vlSelf->P2_out))) {
            if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb__DOT__U_rst_prev))))) {
                VL_WRITEF("P8251 reset!\n");
            }
            vlSelf->tb__DOT__U_txe = 1U;
            __Vdly__tb__DOT__tx_timeout = 0U;
            vlSelf->tb__DOT__U_rst_prev = (1U & (IData)(vlSelf->P2_out));
        } else {
            if ((0U != (IData)(vlSelf->tb__DOT__tx_timeout))) {
                __Vdly__tb__DOT__tx_timeout = (7U & 
                                               ((IData)(vlSelf->tb__DOT__tx_timeout) 
                                                - (IData)(1U)));
                if ((1U == (IData)(vlSelf->tb__DOT__tx_timeout))) {
                    vlSelf->tb__DOT__U_txe = 1U;
                }
            }
            if ((1U & (~ (IData)(vlSelf->tb__DOT__WRb)))) {
                if (VL_LIKELY((4U & (IData)(vlSelf->P2_out)))) {
                    VL_WRITEF("P8251 command: %b\n",
                              8,vlSelf->tb__DOT__BUS);
                } else {
                    VL_WRITEF("%c",8,vlSelf->tb__DOT__BUS);
                    Verilated::runFlushCallbacks();
                    vlSelf->tb__DOT__U_txe = 0U;
                    __Vdly__tb__DOT__tx_timeout = 7U;
                }
            }
        }
    }
    if (__Vdlyvset__tb__DOT__RAM__v0) {
        vlSelf->tb__DOT__RAM[__Vdlyvdim0__tb__DOT__RAM__v0] 
            = __Vdlyvval__tb__DOT__RAM__v0;
    }
    vlSelf->tb__DOT__tx_timeout = __Vdly__tb__DOT__tx_timeout;
    vlSelf->tb__DOT__RDb = 1U;
    vlSelf->tb__DOT__WRb = 1U;
    vlSelf->tb__DOT__RAM_wen = 0U;
    __Vdly__tb__DOT__P874x__DOT__timer_div = (0x1ffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->tb__DOT__P874x__DOT__timer_div)));
    if ((0x100U & (IData)(vlSelf->tb__DOT__P874x__DOT__timer_div))) {
        __Vdly__tb__DOT__P874x__DOT__timer_div = 0U;
        if (vlSelf->tb__DOT__P874x__DOT__timer_en) {
            __Vdly__tb__DOT__P874x__DOT__timer = vlSelf->tb__DOT__P874x__DOT__timer_next;
        }
    }
    vlSelf->tb__DOT__P874x__DOT__last_t0 = 0U;
    __Vdly__tb__DOT__P874x__DOT__last_timer = vlSelf->tb__DOT__P874x__DOT__timer;
    if (((0U == (IData)(vlSelf->tb__DOT__P874x__DOT__timer)) 
         & (0xffU == (IData)(vlSelf->tb__DOT__P874x__DOT__last_timer)))) {
        __Vdly__tb__DOT__P874x__DOT__needs_trupt = 1U;
    }
    if (vlSelf->rst) {
        __Vdly__tb__DOT__P874x__DOT__PC = 0U;
        __Vdly__tb__DOT__P874x__DOT__A = 0U;
        __Vdly__tb__DOT__P874x__DOT__carry = 0U;
        vlSelf->tb__DOT__P874x__DOT__last_t0 = 0U;
        vlSelf->tb__DOT__P1_o = 0U;
        vlSelf->tb__DOT__P2_o = 0U;
        __Vdly__tb__DOT__P1_dir = 0xffU;
        __Vdly__tb__DOT__P2_dir = 0xffU;
        vlSelf->tb__DOT__DB_out = 0U;
        __Vdly__tb__DOT__P874x__DOT__F0 = 0U;
        vlSelf->tb__DOT__DB_oeb = 1U;
        __Vdly__tb__DOT__P874x__DOT__F1 = 0U;
        vlSelf->tb__DOT__P874x__DOT__ent0 = 0U;
        __Vdly__tb__DOT__P874x__DOT__SP = 0U;
        __Vdly__tb__DOT__P874x__DOT__timer_div = 0U;
        __Vdly__tb__DOT__P874x__DOT__intr_en = 0U;
        __Vdly__tb__DOT__P874x__DOT__trupt_en = 0U;
        __Vdly__tb__DOT__P874x__DOT__reg_bank = 0U;
        vlSelf->tb__DOT__P874x__DOT__timer_en = 0U;
        vlSelf->tb__DOT__P874x__DOT__counter_en = 0U;
        __Vdly__tb__DOT__P874x__DOT__timer = 0U;
        __Vdly__tb__DOT__P874x__DOT__needs_trupt = 0U;
        __Vdly__tb__DOT__P874x__DOT__last_timer = 0U;
        __Vdly__tb__DOT__P874x__DOT__in_intr = 0U;
        __Vdly__tb__DOT__P874x__DOT__intr_en_delay = 0U;
        __Vdly__tb__DOT__P874x__DOT__state = 0U;
    } else if ((0U == (IData)(vlSelf->tb__DOT__P874x__DOT__state))) {
        __Vdly__tb__DOT__P874x__DOT__intr_en = vlSelf->tb__DOT__P874x__DOT__intr_en_delay;
        __Vdly__tb__DOT__P874x__DOT__in_intr = 0U;
        __Vdly__tb__DOT__P874x__DOT__state = 2U;
        __Vdly__tb__DOT__RAM_addr = (0x7fU & ((0U == 
                                               (7U 
                                                & ((IData)(vlSelf->tb__DOT__ROM_val) 
                                                   >> 1U)))
                                               ? vlSelf->tb__DOT__P874x__DOT__index_regs
                                              [(((IData)(vlSelf->tb__DOT__P874x__DOT__reg_bank) 
                                                 << 1U) 
                                                | (1U 
                                                   & (IData)(vlSelf->tb__DOT__ROM_val)))]
                                               : (((IData)(vlSelf->tb__DOT__P874x__DOT__reg_bank_addr) 
                                                   << 3U) 
                                                  | (7U 
                                                     & (IData)(vlSelf->tb__DOT__ROM_val)))));
        __Vdly__tb__DOT__P874x__DOT__instr = vlSelf->tb__DOT__ROM_val;
        if (vlSelf->tb__DOT__P874x__DOT__needs_trupt) {
            __Vdly__tb__DOT__P874x__DOT__needs_trupt = 0U;
            if (vlSelf->tb__DOT__P874x__DOT__trupt_en) {
                __Vdly__tb__DOT__P874x__DOT__in_intr = 1U;
                __Vdly__tb__DOT__P874x__DOT__instr = 0x14U;
            } else {
                __Vdly__tb__DOT__P874x__DOT__PC = vlSelf->tb__DOT__P874x__DOT__PC_next;
            }
        } else if ((((~ (IData)(vlSelf->tb__DOT__P874x__DOT__needs_trupt)) 
                     & (~ (IData)(vlSelf->intb))) & (IData)(vlSelf->tb__DOT__P874x__DOT__intr_en))) {
            __Vdly__tb__DOT__P874x__DOT__intr_en = 0U;
            __Vdly__tb__DOT__P874x__DOT__intr_en_delay = 0U;
            __Vdly__tb__DOT__P874x__DOT__in_intr = 2U;
            __Vdly__tb__DOT__P874x__DOT__instr = 0x14U;
        } else {
            __Vdly__tb__DOT__P874x__DOT__PC = vlSelf->tb__DOT__P874x__DOT__PC_next;
        }
    } else if ((2U == (IData)(vlSelf->tb__DOT__P874x__DOT__state))) {
        if (vlSelf->tb__DOT__P874x__DOT__is_jump) {
            if (vlSelf->tb__DOT__P874x__DOT__jump_cond) {
                __Vdly__tb__DOT__P874x__DOT__PC = ((IData)(vlSelf->tb__DOT__P874x__DOT__is_long_jump)
                                                    ? 
                                                   ((0x700U 
                                                     & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                        << 3U)) 
                                                    | ((1U 
                                                        == (IData)(vlSelf->tb__DOT__P874x__DOT__in_intr))
                                                        ? 7U
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlSelf->tb__DOT__P874x__DOT__in_intr))
                                                         ? 3U
                                                         : (IData)(vlSelf->tb__DOT__ROM_val))))
                                                    : 
                                                   ((0x700U 
                                                     & (IData)(vlSelf->tb__DOT__P874x__DOT__PC)) 
                                                    | (IData)(vlSelf->tb__DOT__ROM_val)));
                if (vlSelf->tb__DOT__P874x__DOT__is_call) {
                    vlSelf->tb__DOT__RAM_wen = 3U;
                    vlSelf->tb__DOT__RAM_wval = ((0xf000U 
                                                  & ((IData)(vlSelf->tb__DOT__P874x__DOT__PSW) 
                                                     << 8U)) 
                                                 | ((0U 
                                                     != (IData)(vlSelf->tb__DOT__P874x__DOT__in_intr))
                                                     ? (IData)(vlSelf->tb__DOT__P874x__DOT__PC)
                                                     : (IData)(vlSelf->tb__DOT__P874x__DOT__PC_next)));
                    vlSelf->tb__DOT__RAM_waddr = (0x7fU 
                                                  & ((IData)(8U) 
                                                     + 
                                                     ((IData)(vlSelf->tb__DOT__P874x__DOT__SP) 
                                                      << 1U)));
                    __Vdly__tb__DOT__P874x__DOT__SP 
                        = vlSelf->tb__DOT__P874x__DOT__SP_up;
                }
            } else {
                __Vdly__tb__DOT__P874x__DOT__PC = vlSelf->tb__DOT__P874x__DOT__PC_next;
            }
        }
        if (vlSelf->tb__DOT__P874x__DOT__bus_in) {
            vlSelf->tb__DOT__RDb = 0U;
        }
        if ((0xb3U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr))) {
            __Vdly__tb__DOT__P874x__DOT__PC = ((0x700U 
                                                & (IData)(__Vdly__tb__DOT__P874x__DOT__PC)) 
                                               | (IData)(vlSelf->tb__DOT__P874x__DOT__A));
        }
        if (vlSelf->tb__DOT__P874x__DOT__is_ret) {
            __Vdly__tb__DOT__RAM_addr = (0x7fU & ((IData)(8U) 
                                                  + 
                                                  ((IData)(vlSelf->tb__DOT__P874x__DOT__SP_down) 
                                                   << 1U)));
            __Vdly__tb__DOT__P874x__DOT__SP = vlSelf->tb__DOT__P874x__DOT__SP_down;
        }
        if (vlSelf->tb__DOT__P874x__DOT__special1) {
            if (((((((((0U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                       >> 4U))) | (1U 
                                                   == 
                                                   (0xfU 
                                                    & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                       >> 4U)))) 
                      | (2U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                        >> 4U)))) | 
                     (3U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                     >> 4U)))) | (4U 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                      >> 4U)))) 
                   | (5U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                     >> 4U)))) | (6U 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                      >> 4U)))) 
                 | (7U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                   >> 4U))))) {
                if ((0U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                    >> 4U)))) {
                    __Vdly__tb__DOT__P874x__DOT__intr_en_delay = 1U;
                } else if ((1U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                           >> 4U)))) {
                    __Vdly__tb__DOT__P874x__DOT__intr_en_delay = 0U;
                } else if ((2U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                           >> 4U)))) {
                    __Vdly__tb__DOT__P874x__DOT__trupt_en = 1U;
                } else if ((3U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                           >> 4U)))) {
                    __Vdly__tb__DOT__P874x__DOT__trupt_en = 0U;
                } else if ((4U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                           >> 4U)))) {
                    vlSelf->tb__DOT__P874x__DOT__counter_en = 1U;
                } else if ((5U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                           >> 4U)))) {
                    vlSelf->tb__DOT__P874x__DOT__timer_en = 1U;
                } else if ((6U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                           >> 4U)))) {
                    vlSelf->tb__DOT__P874x__DOT__counter_en = 0U;
                    vlSelf->tb__DOT__P874x__DOT__timer_en = 0U;
                } else {
                    vlSelf->tb__DOT__P874x__DOT__ent0 = 1U;
                }
            } else if ((8U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                       >> 4U)))) {
                __Vdly__tb__DOT__P874x__DOT__F0 = 0U;
            } else if ((9U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                       >> 4U)))) {
                __Vdly__tb__DOT__P874x__DOT__F0 = (1U 
                                                   & (~ (IData)(vlSelf->tb__DOT__P874x__DOT__F0)));
            } else if ((0xaU == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                         >> 4U)))) {
                __Vdly__tb__DOT__P874x__DOT__F1 = 0U;
            } else if ((0xbU == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                         >> 4U)))) {
                __Vdly__tb__DOT__P874x__DOT__F1 = (1U 
                                                   & (~ (IData)(vlSelf->tb__DOT__P874x__DOT__F1)));
            } else if ((0xcU == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                         >> 4U)))) {
                __Vdly__tb__DOT__P874x__DOT__reg_bank = 0U;
            } else if ((0xdU == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                         >> 4U)))) {
                __Vdly__tb__DOT__P874x__DOT__reg_bank = 1U;
            }
        }
        if (vlSelf->tb__DOT__P874x__DOT__special2) {
            if (((((((((0U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                       >> 4U))) | (1U 
                                                   == 
                                                   (0xfU 
                                                    & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                       >> 4U)))) 
                      | (2U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                        >> 4U)))) | 
                     (3U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                     >> 4U)))) | (4U 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                      >> 4U)))) 
                   | (6U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                     >> 4U)))) | (7U 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                      >> 4U)))) 
                 | (8U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                   >> 4U))))) {
                if ((0U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                    >> 4U)))) {
                    __Vdly__tb__DOT__P874x__DOT__A 
                        = (0xffU & ((IData)(vlSelf->tb__DOT__P874x__DOT__A) 
                                    - (IData)(1U)));
                } else if ((1U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                           >> 4U)))) {
                    __Vdly__tb__DOT__P874x__DOT__A 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__P874x__DOT__A)));
                } else if ((2U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                           >> 4U)))) {
                    __Vdly__tb__DOT__P874x__DOT__A = 0U;
                } else if ((3U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                           >> 4U)))) {
                    __Vdly__tb__DOT__P874x__DOT__A 
                        = (0xffU & (~ (IData)(vlSelf->tb__DOT__P874x__DOT__A)));
                } else if ((4U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                           >> 4U)))) {
                    __Vdly__tb__DOT__P874x__DOT__A 
                        = ((0xf0U & ((IData)(vlSelf->tb__DOT__P874x__DOT__A) 
                                     << 4U)) | (0xfU 
                                                & ((IData)(vlSelf->tb__DOT__P874x__DOT__A) 
                                                   >> 4U)));
                } else if ((6U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                           >> 4U)))) {
                    __Vdly__tb__DOT__P874x__DOT__carry 
                        = (1U & (IData)(vlSelf->tb__DOT__P874x__DOT__A));
                    __Vdly__tb__DOT__P874x__DOT__A 
                        = (((IData)(vlSelf->tb__DOT__P874x__DOT__carry) 
                            << 7U) | (0x7fU & ((IData)(vlSelf->tb__DOT__P874x__DOT__A) 
                                               >> 1U)));
                } else if ((7U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                           >> 4U)))) {
                    __Vdly__tb__DOT__P874x__DOT__A 
                        = ((0x80U & ((IData)(vlSelf->tb__DOT__P874x__DOT__A) 
                                     << 7U)) | (0x7fU 
                                                & ((IData)(vlSelf->tb__DOT__P874x__DOT__A) 
                                                   >> 1U)));
                } else {
                    __Vdly__tb__DOT__P1_dir = vlSelf->tb__DOT__P874x__DOT__A;
                }
            } else if ((9U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                       >> 4U)))) {
                __Vdly__tb__DOT__P874x__DOT__carry = 0U;
            } else if ((0xaU == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                         >> 4U)))) {
                __Vdly__tb__DOT__P874x__DOT__carry 
                    = (1U & (~ (IData)(vlSelf->tb__DOT__P874x__DOT__carry)));
            } else if ((0xbU == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                         >> 4U)))) {
                __Vdly__tb__DOT__P2_dir = vlSelf->tb__DOT__P874x__DOT__A;
            } else if ((0xcU == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                         >> 4U)))) {
                __Vdly__tb__DOT__P874x__DOT__A = vlSelf->tb__DOT__P874x__DOT__PSW;
            } else if ((0xdU == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                         >> 4U)))) {
                __Vdly__tb__DOT__P874x__DOT__carry 
                    = (1U & ((IData)(vlSelf->tb__DOT__P874x__DOT__A) 
                             >> 7U));
                __Vdly__tb__DOT__P874x__DOT__F0 = (1U 
                                                   & ((IData)(vlSelf->tb__DOT__P874x__DOT__A) 
                                                      >> 5U));
                __Vdly__tb__DOT__P874x__DOT__reg_bank 
                    = (1U & ((IData)(vlSelf->tb__DOT__P874x__DOT__A) 
                             >> 4U));
                __Vdly__tb__DOT__P874x__DOT__SP = (7U 
                                                   & (IData)(vlSelf->tb__DOT__P874x__DOT__A));
            } else if ((0xeU == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                         >> 4U)))) {
                __Vdly__tb__DOT__P874x__DOT__A = ((0xfeU 
                                                   & ((IData)(vlSelf->tb__DOT__P874x__DOT__A) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->tb__DOT__P874x__DOT__A) 
                                                        >> 7U)));
            } else if ((0xfU == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                         >> 4U)))) {
                __Vdly__tb__DOT__P874x__DOT__carry 
                    = (1U & ((IData)(vlSelf->tb__DOT__P874x__DOT__A) 
                             >> 7U));
                __Vdly__tb__DOT__P874x__DOT__A = ((0xfeU 
                                                   & ((IData)(vlSelf->tb__DOT__P874x__DOT__A) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->tb__DOT__P874x__DOT__carry));
            }
        }
        if ((0x42U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr))) {
            __Vdly__tb__DOT__P874x__DOT__A = vlSelf->tb__DOT__P874x__DOT__timer;
        }
        if ((0x62U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr))) {
            __Vdly__tb__DOT__P874x__DOT__timer = vlSelf->tb__DOT__P874x__DOT__A;
        }
        if ((9U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr))) {
            __Vdly__tb__DOT__P874x__DOT__A = ((IData)(vlSelf->tb__DOT____Vcellinp__P874x__P1_in) 
                                              & (IData)(vlSelf->tb__DOT__P1_dir));
        }
        if ((0xaU == (IData)(vlSelf->tb__DOT__P874x__DOT__instr))) {
            __Vdly__tb__DOT__P874x__DOT__A = ((IData)(vlSelf->tb__DOT____Vcellinp__P874x__P2_in) 
                                              & (IData)(vlSelf->tb__DOT__P2_dir));
        }
        if (VL_UNLIKELY((1U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))) {
            VL_FINISH_MT("d8749.v", 351, "");
            __Vdly__tb__DOT__P874x__DOT__state = 1U;
        } else {
            __Vdly__tb__DOT__P874x__DOT__state = 3U;
        }
    } else if ((3U == (IData)(vlSelf->tb__DOT__P874x__DOT__state))) {
        if (vlSelf->tb__DOT__P874x__DOT__to_accum) {
            __Vdly__tb__DOT__P874x__DOT__A = (0xffU 
                                              & (IData)(vlSelf->tb__DOT__P874x__DOT__ALU_res));
            __Vdly__tb__DOT__P874x__DOT__carry = (1U 
                                                  & ((IData)(vlSelf->tb__DOT__P874x__DOT__ALU_res) 
                                                     >> 8U));
        }
        __Vdly__tb__DOT__P874x__DOT__state = 0U;
        if (((IData)(vlSelf->tb__DOT__P874x__DOT__is_imm) 
             & (~ (IData)(vlSelf->tb__DOT__P874x__DOT__is_jump)))) {
            __Vdly__tb__DOT__P874x__DOT__PC = vlSelf->tb__DOT__P874x__DOT__PC_next;
        }
        if (((IData)(vlSelf->tb__DOT__P874x__DOT__movp) 
             | (IData)(vlSelf->tb__DOT__P874x__DOT__movp3))) {
            __Vdly__tb__DOT__P874x__DOT__A = vlSelf->tb__DOT__ROM_val;
        }
        if (((IData)(((0x20U == (0xf0U & (IData)(vlSelf->tb__DOT__P874x__DOT__instr))) 
                      & (IData)(vlSelf->tb__DOT__P874x__DOT__to_accum))) 
             & (~ (IData)(vlSelf->tb__DOT__P874x__DOT__is_imm)))) {
            vlSelf->tb__DOT__RAM_waddr = vlSelf->tb__DOT__RAM_addr;
            vlSelf->tb__DOT__RAM_wval = vlSelf->tb__DOT__P874x__DOT__A;
            vlSelf->tb__DOT__RAM_wen = 1U;
            if ((0U == (IData)(vlSelf->tb__DOT__P874x__DOT__reg_idx))) {
                __Vdlyvval__tb__DOT__P874x__DOT__index_regs__v0 
                    = vlSelf->tb__DOT__P874x__DOT__A;
                __Vdlyvset__tb__DOT__P874x__DOT__index_regs__v0 = 1U;
                __Vdlyvdim0__tb__DOT__P874x__DOT__index_regs__v0 
                    = ((IData)(vlSelf->tb__DOT__P874x__DOT__reg_bank)
                        ? 2U : 0U);
            } else if ((1U == (IData)(vlSelf->tb__DOT__P874x__DOT__reg_idx))) {
                __Vdlyvval__tb__DOT__P874x__DOT__index_regs__v1 
                    = vlSelf->tb__DOT__P874x__DOT__A;
                __Vdlyvset__tb__DOT__P874x__DOT__index_regs__v1 = 1U;
                __Vdlyvdim0__tb__DOT__P874x__DOT__index_regs__v1 
                    = ((IData)(vlSelf->tb__DOT__P874x__DOT__reg_bank)
                        ? 3U : 1U);
            }
        }
        if (vlSelf->tb__DOT__P874x__DOT__to_reg) {
            vlSelf->tb__DOT__RAM_waddr = vlSelf->tb__DOT__RAM_addr;
            vlSelf->tb__DOT__RAM_wval = (0xffU & (IData)(vlSelf->tb__DOT__P874x__DOT__ALU_res));
            vlSelf->tb__DOT__RAM_wen = 1U;
            if ((0U != (7U & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                              >> 1U)))) {
                if ((0U == (IData)(vlSelf->tb__DOT__P874x__DOT__reg_idx))) {
                    __Vdlyvval__tb__DOT__P874x__DOT__index_regs__v2 
                        = (0xffU & (IData)(vlSelf->tb__DOT__P874x__DOT__ALU_res));
                    __Vdlyvset__tb__DOT__P874x__DOT__index_regs__v2 = 1U;
                    __Vdlyvdim0__tb__DOT__P874x__DOT__index_regs__v2 
                        = ((IData)(vlSelf->tb__DOT__P874x__DOT__reg_bank)
                            ? 2U : 0U);
                } else if ((1U == (IData)(vlSelf->tb__DOT__P874x__DOT__reg_idx))) {
                    __Vdlyvval__tb__DOT__P874x__DOT__index_regs__v3 
                        = (0xffU & (IData)(vlSelf->tb__DOT__P874x__DOT__ALU_res));
                    __Vdlyvset__tb__DOT__P874x__DOT__index_regs__v3 = 1U;
                    __Vdlyvdim0__tb__DOT__P874x__DOT__index_regs__v3 
                        = ((IData)(vlSelf->tb__DOT__P874x__DOT__reg_bank)
                            ? 3U : 1U);
                }
            }
        }
        if ((2U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr))) {
            vlSelf->tb__DOT__DB_out = vlSelf->tb__DOT__P874x__DOT__A;
            vlSelf->tb__DOT__WRb = 0U;
            vlSelf->tb__DOT__DB_oeb = 0U;
        }
        if (vlSelf->tb__DOT__P874x__DOT__to_port) {
            if ((0U == (3U & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))) {
                vlSelf->tb__DOT__DB_out = (0xffU & (IData)(vlSelf->tb__DOT__P874x__DOT__ALU_res));
                vlSelf->tb__DOT__WRb = 0U;
                vlSelf->tb__DOT__DB_oeb = 0U;
            } else if ((1U == (3U & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))) {
                vlSelf->tb__DOT__P1_o = (0xffU & (IData)(vlSelf->tb__DOT__P874x__DOT__ALU_res));
            } else if ((2U == (3U & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))) {
                vlSelf->tb__DOT__P2_o = (0xffU & (IData)(vlSelf->tb__DOT__P874x__DOT__ALU_res));
            }
        }
        if (vlSelf->tb__DOT__P874x__DOT__is_ret) {
            __Vdly__tb__DOT__P874x__DOT__PC = (0x7ffU 
                                               & (IData)(vlSelf->tb__DOT__RAM_read));
            if ((1U & (IData)(vlSelf->tb__DOT__P874x__DOT__instr))) {
                __Vdly__tb__DOT__P874x__DOT__F0 = (1U 
                                                   & ((IData)(vlSelf->tb__DOT__RAM_read) 
                                                      >> 0xdU));
                __Vdly__tb__DOT__P874x__DOT__reg_bank 
                    = (1U & ((IData)(vlSelf->tb__DOT__RAM_read) 
                             >> 0xcU));
                __Vdly__tb__DOT__P874x__DOT__carry 
                    = (1U & ((IData)(vlSelf->tb__DOT__RAM_read) 
                             >> 0xfU));
            }
        }
    }
    vlSelf->tb__DOT__P874x__DOT__timer_div = __Vdly__tb__DOT__P874x__DOT__timer_div;
    vlSelf->tb__DOT__P874x__DOT__last_timer = __Vdly__tb__DOT__P874x__DOT__last_timer;
    vlSelf->tb__DOT__P874x__DOT__needs_trupt = __Vdly__tb__DOT__P874x__DOT__needs_trupt;
    vlSelf->tb__DOT__P874x__DOT__intr_en = __Vdly__tb__DOT__P874x__DOT__intr_en;
    vlSelf->tb__DOT__P874x__DOT__trupt_en = __Vdly__tb__DOT__P874x__DOT__trupt_en;
    vlSelf->tb__DOT__P874x__DOT__intr_en_delay = __Vdly__tb__DOT__P874x__DOT__intr_en_delay;
    vlSelf->tb__DOT__P874x__DOT__timer = __Vdly__tb__DOT__P874x__DOT__timer;
    vlSelf->tb__DOT__P1_dir = __Vdly__tb__DOT__P1_dir;
    vlSelf->tb__DOT__P2_dir = __Vdly__tb__DOT__P2_dir;
    vlSelf->tb__DOT__P874x__DOT__SP = __Vdly__tb__DOT__P874x__DOT__SP;
    vlSelf->tb__DOT__P874x__DOT__F1 = __Vdly__tb__DOT__P874x__DOT__F1;
    vlSelf->tb__DOT__P874x__DOT__F0 = __Vdly__tb__DOT__P874x__DOT__F0;
    vlSelf->tb__DOT__P874x__DOT__carry = __Vdly__tb__DOT__P874x__DOT__carry;
    vlSelf->tb__DOT__P874x__DOT__in_intr = __Vdly__tb__DOT__P874x__DOT__in_intr;
    vlSelf->tb__DOT__P874x__DOT__state = __Vdly__tb__DOT__P874x__DOT__state;
    vlSelf->tb__DOT__P874x__DOT__PC = __Vdly__tb__DOT__P874x__DOT__PC;
    vlSelf->tb__DOT__P874x__DOT__reg_bank = __Vdly__tb__DOT__P874x__DOT__reg_bank;
    if (__Vdlyvset__tb__DOT__P874x__DOT__index_regs__v0) {
        vlSelf->tb__DOT__P874x__DOT__index_regs[__Vdlyvdim0__tb__DOT__P874x__DOT__index_regs__v0] 
            = __Vdlyvval__tb__DOT__P874x__DOT__index_regs__v0;
    }
    if (__Vdlyvset__tb__DOT__P874x__DOT__index_regs__v1) {
        vlSelf->tb__DOT__P874x__DOT__index_regs[__Vdlyvdim0__tb__DOT__P874x__DOT__index_regs__v1] 
            = __Vdlyvval__tb__DOT__P874x__DOT__index_regs__v1;
    }
    if (__Vdlyvset__tb__DOT__P874x__DOT__index_regs__v2) {
        vlSelf->tb__DOT__P874x__DOT__index_regs[__Vdlyvdim0__tb__DOT__P874x__DOT__index_regs__v2] 
            = __Vdlyvval__tb__DOT__P874x__DOT__index_regs__v2;
    }
    if (__Vdlyvset__tb__DOT__P874x__DOT__index_regs__v3) {
        vlSelf->tb__DOT__P874x__DOT__index_regs[__Vdlyvdim0__tb__DOT__P874x__DOT__index_regs__v3] 
            = __Vdlyvval__tb__DOT__P874x__DOT__index_regs__v3;
    }
    vlSelf->tb__DOT__P874x__DOT__A = __Vdly__tb__DOT__P874x__DOT__A;
    vlSelf->tb__DOT__RAM_addr = __Vdly__tb__DOT__RAM_addr;
    vlSelf->tb__DOT__P874x__DOT__instr = __Vdly__tb__DOT__P874x__DOT__instr;
    vlSelf->tb__DOT__P874x__DOT__timer_next = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->tb__DOT__P874x__DOT__timer)));
    vlSelf->tb__DOT__BUS = ((IData)(vlSelf->tb__DOT__DB_oeb)
                             ? 0U : (IData)(vlSelf->tb__DOT__DB_out));
    vlSelf->tb__DOT____Vcellinp__P874x__P1_in = (0xffU 
                                                 & ((~ (IData)(vlSelf->tb__DOT__P1_dir)) 
                                                    | (IData)(vlSelf->P1_in)));
    vlSelf->tb__DOT____Vcellinp__P874x__P2_in = (0xffU 
                                                 & ((0xf7U 
                                                     & (IData)(vlSelf->P2_in)) 
                                                    | ((~ (IData)(vlSelf->tb__DOT__P2_dir)) 
                                                       | ((IData)(vlSelf->tb__DOT__U_txe) 
                                                          << 3U))));
    vlSelf->tb__DOT__P874x__DOT__SP_up = (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->tb__DOT__P874x__DOT__SP)));
    vlSelf->tb__DOT__P874x__DOT__SP_down = (7U & ((IData)(vlSelf->tb__DOT__P874x__DOT__SP) 
                                                  - (IData)(1U)));
    vlSelf->tb__DOT__RAM_oldval = vlSelf->tb__DOT__RAM
        [(0x1fU & ((IData)(vlSelf->tb__DOT__RAM_waddr) 
                   >> 2U))];
    vlSelf->tb__DOT__wmask1 = ((0xff00U & ((- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->tb__DOT__RAM_wen) 
                                                           >> 1U))))) 
                                           << 8U)) 
                               | (0xffU & (- (IData)(
                                                     (1U 
                                                      & (~ (IData)(vlSelf->tb__DOT__RAM_wen)))))));
    vlSelf->tb__DOT__masked_wval = (((0xff00U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->tb__DOT__RAM_wen) 
                                                                >> 1U)))) 
                                                 << 8U)) 
                                     | (0xffU & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->tb__DOT__RAM_wen)))))) 
                                    & (IData)(vlSelf->tb__DOT__RAM_wval));
    vlSelf->P1_out = ((IData)(vlSelf->tb__DOT__P1_dir) 
                      | (IData)(vlSelf->tb__DOT__P1_o));
    vlSelf->P2_out = ((IData)(vlSelf->tb__DOT__P2_dir) 
                      | (IData)(vlSelf->tb__DOT__P2_o));
    vlSelf->tb__DOT__P874x__DOT__PC_next = (0x7ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelf->tb__DOT__P874x__DOT__PC)));
    vlSelf->tb__DOT__P874x__DOT__reg_bank_addr = ((IData)(vlSelf->tb__DOT__P874x__DOT__reg_bank)
                                                   ? 3U
                                                   : 0U);
    vlSelf->tb__DOT__P874x__DOT__PSW = (8U | (((IData)(vlSelf->tb__DOT__P874x__DOT__carry) 
                                               << 7U) 
                                              | (((IData)(vlSelf->tb__DOT__P874x__DOT__F0) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->tb__DOT__P874x__DOT__reg_bank) 
                                                     << 4U) 
                                                    | (IData)(vlSelf->tb__DOT__P874x__DOT__SP)))));
    vlSelf->tb__DOT__RAM_r = vlSelf->tb__DOT__RAM[(0x1fU 
                                                   & ((IData)(vlSelf->tb__DOT__RAM_addr) 
                                                      >> 2U))];
    vlSelf->tb__DOT__P874x__DOT__is_long_jump = (4U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)));
    vlSelf->tb__DOT__P874x__DOT__is_call = (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->tb__DOT__P874x__DOT__instr))));
    vlSelf->tb__DOT__P874x__DOT__special1 = (5U == 
                                             (0xfU 
                                              & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)));
    vlSelf->tb__DOT__P874x__DOT__special2 = (7U == 
                                             (0xfU 
                                              & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)));
    vlSelf->tb__DOT__P874x__DOT__bus_in = ((8U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr)) 
                                           | ((0x88U 
                                               == (IData)(vlSelf->tb__DOT__P874x__DOT__instr)) 
                                              | (0x98U 
                                                 == (IData)(vlSelf->tb__DOT__P874x__DOT__instr))));
    vlSelf->tb__DOT__P874x__DOT__movp = (0xa3U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr));
    vlSelf->tb__DOT__P874x__DOT__movp3 = (0xe3U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr));
    vlSelf->tb__DOT__P874x__DOT__reg_idx = (7U & (IData)(vlSelf->tb__DOT__P874x__DOT__instr));
    vlSelf->tb__DOT__P874x__DOT__mem_op = (IData)((
                                                   (0U 
                                                    == 
                                                    (0xeU 
                                                     & (IData)(vlSelf->tb__DOT__P874x__DOT__instr))) 
                                                   & (0U 
                                                      != (IData)(vlSelf->tb__DOT__P874x__DOT__instr))));
    vlSelf->tb__DOT__P874x__DOT____VdfgTmp_h93293e77__0 
        = (1U & (((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                  >> 3U) | (0U == (7U & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                         >> 1U)))));
    vlSelf->tb__DOT__P874x__DOT__jump_cond_tbl = (1U 
                                                  & (((((((((2U 
                                                             == 
                                                             (0xfU 
                                                              & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                                 >> 4U))) 
                                                            | (3U 
                                                               == 
                                                               (0xfU 
                                                                & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                                   >> 4U)))) 
                                                           | (4U 
                                                              == 
                                                              (0xfU 
                                                               & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                                  >> 4U)))) 
                                                          | (5U 
                                                             == 
                                                             (0xfU 
                                                              & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                                 >> 4U)))) 
                                                         | (7U 
                                                            == 
                                                            (0xfU 
                                                             & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                                >> 4U)))) 
                                                        | (8U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                               >> 4U)))) 
                                                       | (9U 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                              >> 4U)))) 
                                                      | (0xbU 
                                                         == 
                                                         (0xfU 
                                                          & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                             >> 4U))))
                                                      ? 
                                                     ((2U 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                           >> 4U))) 
                                                      | ((3U 
                                                          != 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                              >> 4U))) 
                                                         & ((4U 
                                                             != 
                                                             (0xfU 
                                                              & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                                 >> 4U))) 
                                                            & ((5U 
                                                                == 
                                                                (0xfU 
                                                                 & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                                    >> 4U))) 
                                                               | ((7U 
                                                                   == 
                                                                   (0xfU 
                                                                    & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                                       >> 4U)))
                                                                   ? (IData)(vlSelf->tb__DOT__P874x__DOT__F1)
                                                                   : 
                                                                  ((8U 
                                                                    == 
                                                                    (0xfU 
                                                                     & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                                        >> 4U)))
                                                                    ? (IData)(vlSelf->intb)
                                                                    : 
                                                                   ((9U 
                                                                     == 
                                                                     (0xfU 
                                                                      & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                                         >> 4U)))
                                                                     ? 
                                                                    (0U 
                                                                     != (IData)(vlSelf->tb__DOT__P874x__DOT__A))
                                                                     : (IData)(vlSelf->tb__DOT__P874x__DOT__F0))))))))
                                                      : 
                                                     ((0xcU 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                           >> 4U)))
                                                       ? 
                                                      (0U 
                                                       == (IData)(vlSelf->tb__DOT__P874x__DOT__A))
                                                       : 
                                                      ((0xeU 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                            >> 4U)))
                                                        ? 
                                                       (~ (IData)(vlSelf->tb__DOT__P874x__DOT__carry))
                                                        : (IData)(
                                                                  ((0xf0U 
                                                                    == 
                                                                    (0xf0U 
                                                                     & (IData)(vlSelf->tb__DOT__P874x__DOT__instr))) 
                                                                   & (IData)(vlSelf->tb__DOT__P874x__DOT__carry)))))));
    vlSelf->tb__DOT__ROM_val = vlSelf->tb__DOT__ROM
        [((0U == (IData)(vlSelf->tb__DOT__P874x__DOT__state))
           ? (IData)(vlSelf->tb__DOT__P874x__DOT__PC)
           : ((0xa3U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr))
               ? ((0x700U & (IData)(vlSelf->tb__DOT__P874x__DOT__PC)) 
                  | (IData)(vlSelf->tb__DOT__P874x__DOT__A))
               : ((0xe3U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr))
                   ? (0x300U | (IData)(vlSelf->tb__DOT__P874x__DOT__A))
                   : (IData)(vlSelf->tb__DOT__P874x__DOT__PC))))];
    tb__DOT__P874x__DOT____VdfgTmp_h140fb42c__0 = (
                                                   (8U 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                        >> 4U))) 
                                                   | (9U 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                          >> 4U))));
    vlSelf->tb__DOT__P874x__DOT__is_djnz = (IData)(
                                                   (0xe8U 
                                                    == 
                                                    (0xf8U 
                                                     & (IData)(vlSelf->tb__DOT__P874x__DOT__instr))));
    if ((0U == (3U & (IData)(vlSelf->tb__DOT__RAM_waddr)))) {
        vlSelf->tb__DOT__RAM_newval = ((0xffff0000U 
                                        & vlSelf->tb__DOT__RAM_oldval) 
                                       | ((IData)(vlSelf->tb__DOT__masked_wval) 
                                          | ((IData)(vlSelf->tb__DOT__wmask1) 
                                             & vlSelf->tb__DOT__RAM_oldval)));
    } else if ((1U == (3U & (IData)(vlSelf->tb__DOT__RAM_waddr)))) {
        vlSelf->tb__DOT__RAM_newval = ((0xff000000U 
                                        & vlSelf->tb__DOT__RAM_oldval) 
                                       | ((((IData)(vlSelf->tb__DOT__masked_wval) 
                                            << 8U) 
                                           | (0xffffff00U 
                                              & (((IData)(vlSelf->tb__DOT__wmask1) 
                                                  << 8U) 
                                                 & vlSelf->tb__DOT__RAM_oldval))) 
                                          | (0xffU 
                                             & vlSelf->tb__DOT__RAM_oldval)));
    } else if ((2U == (3U & (IData)(vlSelf->tb__DOT__RAM_waddr)))) {
        vlSelf->tb__DOT__RAM_newval = ((((IData)(vlSelf->tb__DOT__masked_wval) 
                                         << 0x10U) 
                                        | (0xffff0000U 
                                           & (((IData)(vlSelf->tb__DOT__wmask1) 
                                               << 0x10U) 
                                              & vlSelf->tb__DOT__RAM_oldval))) 
                                       | (0xffffU & vlSelf->tb__DOT__RAM_oldval));
    } else if ((3U == (3U & (IData)(vlSelf->tb__DOT__RAM_waddr)))) {
        vlSelf->tb__DOT__RAM_newval = ((0xff000000U 
                                        & (((IData)(vlSelf->tb__DOT__masked_wval) 
                                            << 0x18U) 
                                           | (0xff000000U 
                                              & (((- (IData)(
                                                             (1U 
                                                              & (~ (IData)(vlSelf->tb__DOT__RAM_wen))))) 
                                                  << 0x18U) 
                                                 & vlSelf->tb__DOT__RAM_oldval)))) 
                                       | (0xffffffU 
                                          & vlSelf->tb__DOT__RAM_oldval));
    }
    if ((0U == (3U & (IData)(vlSelf->tb__DOT__RAM_addr)))) {
        vlSelf->tb__DOT__RAM_read = (0xffffU & vlSelf->tb__DOT__RAM_r);
    } else if ((1U == (3U & (IData)(vlSelf->tb__DOT__RAM_addr)))) {
        vlSelf->tb__DOT__RAM_read = (0xffffU & (vlSelf->tb__DOT__RAM_r 
                                                >> 8U));
    } else if ((2U == (3U & (IData)(vlSelf->tb__DOT__RAM_addr)))) {
        vlSelf->tb__DOT__RAM_read = (vlSelf->tb__DOT__RAM_r 
                                     >> 0x10U);
    } else if ((3U == (3U & (IData)(vlSelf->tb__DOT__RAM_addr)))) {
        vlSelf->tb__DOT__RAM_read = (vlSelf->tb__DOT__RAM_r 
                                     >> 0x18U);
    }
    vlSelf->tb__DOT__P874x__DOT__to_accum = ((((IData)(vlSelf->tb__DOT__P874x__DOT____VdfgTmp_h93293e77__0) 
                                               | (3U 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))) 
                                              & ((0U 
                                                  != (IData)(vlSelf->tb__DOT__P874x__DOT__instr)) 
                                                 & ((2U 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                         >> 4U))) 
                                                    | ((4U 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                            >> 4U))) 
                                                       | ((5U 
                                                           == 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                               >> 4U))) 
                                                          | ((6U 
                                                              == 
                                                              (0xfU 
                                                               & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                                  >> 4U))) 
                                                             | ((7U 
                                                                 == 
                                                                 (0xfU 
                                                                  & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                                     >> 4U))) 
                                                                | ((0xdU 
                                                                    == 
                                                                    (0xfU 
                                                                     & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                                        >> 4U))) 
                                                                   | (0xfU 
                                                                      == 
                                                                      (0xfU 
                                                                       & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                                          >> 4U))))))))))) 
                                             | ((3U 
                                                 == (IData)(vlSelf->tb__DOT__P874x__DOT__instr)) 
                                                | (0x13U 
                                                   == (IData)(vlSelf->tb__DOT__P874x__DOT__instr))));
    vlSelf->tb__DOT__P874x__DOT__to_reg = ((IData)(vlSelf->tb__DOT__P874x__DOT____VdfgTmp_h93293e77__0) 
                                           & ((1U == 
                                               (0xfU 
                                                & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                   >> 4U))) 
                                              | ((0xaU 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                      >> 4U))) 
                                                 | ((0xbU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                         >> 4U))) 
                                                    | ((0xcU 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                            >> 4U))) 
                                                       | (0xeU 
                                                          == 
                                                          (0xfU 
                                                           & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                              >> 4U))))))));
    vlSelf->tb__DOT__P874x__DOT__is_ret = ((3U == (0xfU 
                                                   & (IData)(vlSelf->tb__DOT__P874x__DOT__instr))) 
                                           & (IData)(tb__DOT__P874x__DOT____VdfgTmp_h140fb42c__0));
    vlSelf->tb__DOT__P874x__DOT__to_port = (IData)(
                                                   ((8U 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->tb__DOT__P874x__DOT__instr))) 
                                                    & ((3U 
                                                        == 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                            >> 4U))) 
                                                       | (IData)(tb__DOT__P874x__DOT____VdfgTmp_h140fb42c__0))));
    vlSelf->tb__DOT__P874x__DOT__is_jump = ((IData)(
                                                    (0x12U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))) 
                                            | ((6U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSelf->tb__DOT__P874x__DOT__instr))) 
                                               | ((4U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->tb__DOT__P874x__DOT__instr))) 
                                                  | (IData)(vlSelf->tb__DOT__P874x__DOT__is_djnz))));
    vlSelf->tb__DOT__P874x__DOT__RAM_val = (0xffU & 
                                            ((0U == 
                                              (0x3fU 
                                               & ((IData)(vlSelf->tb__DOT__RAM_addr) 
                                                  >> 1U)))
                                              ? vlSelf->tb__DOT__P874x__DOT__index_regs
                                             [(((IData)(vlSelf->tb__DOT__P874x__DOT__reg_bank) 
                                                << 1U) 
                                               | (1U 
                                                  & (IData)(vlSelf->tb__DOT__RAM_addr)))]
                                              : (IData)(vlSelf->tb__DOT__RAM_read)));
    vlSelf->tb__DOT__P874x__DOT__ALU_in1 = (((IData)(vlSelf->tb__DOT__P874x__DOT__to_port) 
                                             & (3U 
                                                != 
                                                (0xfU 
                                                 & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                    >> 4U))))
                                             ? ((1U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))
                                                 ? (IData)(vlSelf->tb__DOT__P1_o)
                                                 : 
                                                ((2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))
                                                  ? (IData)(vlSelf->tb__DOT__P2_o)
                                                  : 
                                                 ((IData)(vlSelf->tb__DOT__RDb)
                                                   ? 0U
                                                   : 0xaaU)))
                                             : (IData)(vlSelf->tb__DOT__P874x__DOT__A));
    vlSelf->tb__DOT__P874x__DOT__is_imm = (((4U == 
                                             (0xfU 
                                              & (IData)(vlSelf->tb__DOT__P874x__DOT__instr))) 
                                            | ((IData)(
                                                       (0xe8U 
                                                        == 
                                                        (0xf8U 
                                                         & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))) 
                                               | ((IData)(
                                                          (0xb8U 
                                                           == 
                                                           (0xf8U 
                                                            & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))) 
                                                  | ((IData)(
                                                             (0x88U 
                                                              == 
                                                              (0xfcU 
                                                               & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))) 
                                                     | ((IData)(
                                                                (0x98U 
                                                                 == 
                                                                 (0xfcU 
                                                                  & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))) 
                                                        | ((IData)(
                                                                   (3U 
                                                                    == 
                                                                    (0x8fU 
                                                                     & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))) 
                                                           | ((0xd3U 
                                                               == (IData)(vlSelf->tb__DOT__P874x__DOT__instr)) 
                                                              | ((0xb1U 
                                                                  == (IData)(vlSelf->tb__DOT__P874x__DOT__instr)) 
                                                                 | ((0xb0U 
                                                                     == (IData)(vlSelf->tb__DOT__P874x__DOT__instr)) 
                                                                    | (IData)(vlSelf->tb__DOT__P874x__DOT__is_jump)))))))))) 
                                           & (0U == (IData)(vlSelf->tb__DOT__P874x__DOT__in_intr)));
    vlSelf->tb__DOT__P874x__DOT__jump_cond = (1U & 
                                              ((IData)(vlSelf->tb__DOT__P874x__DOT__is_djnz)
                                                ? (1U 
                                                   != (IData)(vlSelf->tb__DOT__P874x__DOT__RAM_val))
                                                : (
                                                   (2U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))
                                                    ? 
                                                   ((IData)(vlSelf->tb__DOT__P874x__DOT__A) 
                                                    >> 
                                                    (7U 
                                                     & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                        >> 5U)))
                                                    : 
                                                   ((6U 
                                                     != 
                                                     (0xfU 
                                                      & (IData)(vlSelf->tb__DOT__P874x__DOT__instr))) 
                                                    | (IData)(vlSelf->tb__DOT__P874x__DOT__jump_cond_tbl)))));
    vlSelf->tb__DOT__P874x__DOT__ALU_in2 = (((~ (IData)(vlSelf->tb__DOT__P874x__DOT__is_djnz)) 
                                             & (IData)(vlSelf->tb__DOT__P874x__DOT__is_imm))
                                             ? (IData)(vlSelf->tb__DOT__ROM_val)
                                             : (IData)(vlSelf->tb__DOT__P874x__DOT__RAM_val));
    vlSelf->tb__DOT__P874x__DOT__or_res = ((IData)(vlSelf->tb__DOT__P874x__DOT__ALU_in1) 
                                           | (IData)(vlSelf->tb__DOT__P874x__DOT__ALU_in2));
    vlSelf->tb__DOT__P874x__DOT__and_res = ((IData)(vlSelf->tb__DOT__P874x__DOT__ALU_in1) 
                                            & (IData)(vlSelf->tb__DOT__P874x__DOT__ALU_in2));
    vlSelf->tb__DOT__P874x__DOT__add_res = (0x1ffU 
                                            & ((IData)(vlSelf->tb__DOT__P874x__DOT__ALU_in1) 
                                               + (IData)(vlSelf->tb__DOT__P874x__DOT__ALU_in2)));
    vlSelf->tb__DOT__P874x__DOT__addc_res = (0x1ffU 
                                             & ((IData)(vlSelf->tb__DOT__P874x__DOT__add_res) 
                                                + (IData)(vlSelf->tb__DOT__P874x__DOT__carry)));
    vlSelf->tb__DOT__P874x__DOT__ALU_res = ((((((((
                                                   (0U 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                        >> 4U))) 
                                                   | (1U 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                          >> 4U)))) 
                                                  | (3U 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                         >> 4U)))) 
                                                 | (4U 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                        >> 4U)))) 
                                                | (5U 
                                                   == 
                                                   (0xfU 
                                                    & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                       >> 4U)))) 
                                               | (6U 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                      >> 4U)))) 
                                              | (7U 
                                                 == 
                                                 (0xfU 
                                                  & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                     >> 4U)))) 
                                             | (8U 
                                                == 
                                                (0xfU 
                                                 & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                    >> 4U))))
                                             ? ((0U 
                                                 == 
                                                 (0xfU 
                                                  & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                     >> 4U)))
                                                 ? 
                                                ((3U 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))
                                                  ? (IData)(vlSelf->tb__DOT__P874x__DOT__add_res)
                                                  : 
                                                 (((IData)(vlSelf->tb__DOT__P874x__DOT__carry) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & ((IData)(vlSelf->tb__DOT__P874x__DOT__ALU_in1) 
                                                        - (IData)(1U)))))
                                                 : 
                                                ((1U 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                      >> 4U)))
                                                  ? 
                                                 ((3U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))
                                                   ? (IData)(vlSelf->tb__DOT__P874x__DOT__addc_res)
                                                   : 
                                                  (((IData)(vlSelf->tb__DOT__P874x__DOT__carry) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->tb__DOT__P874x__DOT__ALU_in2)))))
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (0xfU 
                                                    & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                       >> 4U)))
                                                   ? 
                                                  (((IData)(vlSelf->tb__DOT__P874x__DOT__carry) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->tb__DOT__P874x__DOT__ALU_in1))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                        >> 4U)))
                                                    ? 
                                                   (((IData)(vlSelf->tb__DOT__P874x__DOT__carry) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->tb__DOT__P874x__DOT__or_res))
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                         >> 4U)))
                                                     ? 
                                                    (((IData)(vlSelf->tb__DOT__P874x__DOT__carry) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->tb__DOT__P874x__DOT__and_res))
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                          >> 4U)))
                                                      ? (IData)(vlSelf->tb__DOT__P874x__DOT__add_res)
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                           >> 4U)))
                                                       ? (IData)(vlSelf->tb__DOT__P874x__DOT__addc_res)
                                                       : 
                                                      (((IData)(vlSelf->tb__DOT__P874x__DOT__carry) 
                                                        << 8U) 
                                                       | (IData)(vlSelf->tb__DOT__P874x__DOT__or_res)))))))))
                                             : ((9U 
                                                 == 
                                                 (0xfU 
                                                  & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                     >> 4U)))
                                                 ? 
                                                (((IData)(vlSelf->tb__DOT__P874x__DOT__carry) 
                                                  << 8U) 
                                                 | (IData)(vlSelf->tb__DOT__P874x__DOT__and_res))
                                                 : 
                                                ((0xaU 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                      >> 4U)))
                                                  ? 
                                                 (((IData)(vlSelf->tb__DOT__P874x__DOT__carry) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->tb__DOT__P874x__DOT__ALU_in1))
                                                  : 
                                                 ((0xcU 
                                                   == 
                                                   (0xfU 
                                                    & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                       >> 4U)))
                                                   ? 
                                                  (((IData)(vlSelf->tb__DOT__P874x__DOT__carry) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & ((IData)(vlSelf->tb__DOT__P874x__DOT__ALU_in2) 
                                                         - (IData)(1U))))
                                                   : 
                                                  ((0xdU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                        >> 4U)))
                                                    ? 
                                                   (((IData)(vlSelf->tb__DOT__P874x__DOT__carry) 
                                                     << 8U) 
                                                    | ((IData)(vlSelf->tb__DOT__P874x__DOT__ALU_in1) 
                                                       ^ (IData)(vlSelf->tb__DOT__P874x__DOT__ALU_in2)))
                                                    : 
                                                   ((0xeU 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                         >> 4U)))
                                                     ? 
                                                    (((IData)(vlSelf->tb__DOT__P874x__DOT__carry) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & ((IData)(vlSelf->tb__DOT__P874x__DOT__ALU_in2) 
                                                           - (IData)(1U))))
                                                     : 
                                                    ((0xfU 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                          >> 4U)))
                                                      ? 
                                                     (((IData)(vlSelf->tb__DOT__P874x__DOT__carry) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->tb__DOT__P874x__DOT__ALU_in2))
                                                      : 
                                                     (((IData)(vlSelf->tb__DOT__P874x__DOT__carry) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->tb__DOT__P874x__DOT__ALU_in2)))))))));
}

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtb___024root___eval_triggers__ico(Vtb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__ico(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtb___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtb___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("tb.v", 4, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtb___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb.v", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb.v", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->intb & 0xfeU))) {
        Verilated::overWidthError("intb");}
}
#endif  // VL_DEBUG
