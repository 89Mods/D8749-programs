// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "verilated.h"

#include "Vtb__Syms.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___eval_static__TOP(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_static(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static\n"); );
    // Body
    Vtb___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtb___024root___eval_static__TOP(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb__DOT__U_rst_prev = 0U;
}

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    // Body
    Vtb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_heee779fa__0;
    // Body
    __Vtemp_heee779fa__0[0U] = 0x2e747874U;
    __Vtemp_heee779fa__0[1U] = 0x2e62696eU;
    __Vtemp_heee779fa__0[2U] = 0x74657374U;
    __Vtemp_heee779fa__0[3U] = 0x2e2e2fU;
    VL_READMEM_N(true, 8, 2048, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_heee779fa__0)
                 ,  &(vlSelf->tb__DOT__ROM), 0, ~0ULL);
}

VL_ATTR_COLD void Vtb___024root___eval_final(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb___024root___eval_triggers__stl(Vtb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb___024root___eval_stl(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_settle(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("tb.v", 4, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb__DOT__P874x__DOT____VdfgTmp_h140fb42c__0;
    tb__DOT__P874x__DOT____VdfgTmp_h140fb42c__0 = 0;
    // Body
    vlSelf->tb__DOT__P874x__DOT__reg_bank_addr = ((IData)(vlSelf->tb__DOT__P874x__DOT__reg_bank)
                                                   ? 3U
                                                   : 0U);
    vlSelf->tb__DOT__P874x__DOT__PC_next = (0x7ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelf->tb__DOT__P874x__DOT__PC)));
    vlSelf->tb__DOT__P874x__DOT__is_long_jump = (4U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)));
    vlSelf->tb__DOT__P874x__DOT__is_call = (IData)(
                                                   (0x14U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->tb__DOT__P874x__DOT__instr))));
    vlSelf->tb__DOT__P874x__DOT__SP_up = (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->tb__DOT__P874x__DOT__SP)));
    vlSelf->tb__DOT__P874x__DOT__SP_down = (7U & ((IData)(vlSelf->tb__DOT__P874x__DOT__SP) 
                                                  - (IData)(1U)));
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
    vlSelf->tb__DOT__P874x__DOT__timer_next = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->tb__DOT__P874x__DOT__timer)));
    vlSelf->P1_out = ((IData)(vlSelf->tb__DOT__P1_dir) 
                      | (IData)(vlSelf->tb__DOT__P1_o));
    vlSelf->P2_out = ((IData)(vlSelf->tb__DOT__P2_dir) 
                      | (IData)(vlSelf->tb__DOT__P2_o));
    vlSelf->tb__DOT____Vcellinp__P874x__P1_in = (0xffU 
                                                 & ((~ (IData)(vlSelf->tb__DOT__P1_dir)) 
                                                    | (IData)(vlSelf->P1_in)));
    vlSelf->tb__DOT__BUS = ((IData)(vlSelf->tb__DOT__DB_oeb)
                             ? 0U : (IData)(vlSelf->tb__DOT__DB_out));
    vlSelf->tb__DOT____Vcellinp__P874x__P2_in = (0xffU 
                                                 & ((0xf7U 
                                                     & (IData)(vlSelf->P2_in)) 
                                                    | ((~ (IData)(vlSelf->tb__DOT__P2_dir)) 
                                                       | ((IData)(vlSelf->tb__DOT__U_txe) 
                                                          << 3U))));
    vlSelf->tb__DOT__P874x__DOT__PSW = (8U | (((IData)(vlSelf->tb__DOT__P874x__DOT__carry) 
                                               << 7U) 
                                              | (((IData)(vlSelf->tb__DOT__P874x__DOT__F0) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->tb__DOT__P874x__DOT__reg_bank) 
                                                     << 4U) 
                                                    | (IData)(vlSelf->tb__DOT__P874x__DOT__SP)))));
    vlSelf->tb__DOT__wmask1 = ((0xff00U & ((- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->tb__DOT__RAM_wen) 
                                                           >> 1U))))) 
                                           << 8U)) 
                               | (0xffU & (- (IData)(
                                                     (1U 
                                                      & (~ (IData)(vlSelf->tb__DOT__RAM_wen)))))));
    vlSelf->tb__DOT__RAM_oldval = vlSelf->tb__DOT__RAM
        [(0x1fU & ((IData)(vlSelf->tb__DOT__RAM_waddr) 
                   >> 2U))];
    vlSelf->tb__DOT__masked_wval = (((0xff00U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->tb__DOT__RAM_wen) 
                                                                >> 1U)))) 
                                                 << 8U)) 
                                     | (0xffU & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->tb__DOT__RAM_wen)))))) 
                                    & (IData)(vlSelf->tb__DOT__RAM_wval));
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
    vlSelf->tb__DOT__RAM_r = vlSelf->tb__DOT__RAM[(0x1fU 
                                                   & ((IData)(vlSelf->tb__DOT__RAM_addr) 
                                                      >> 2U))];
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

VL_ATTR_COLD void Vtb___024root___eval_stl(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__ico(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___ctor_var_reset(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->intb = VL_RAND_RESET_I(1);
    vlSelf->P1_out = VL_RAND_RESET_I(8);
    vlSelf->P2_out = VL_RAND_RESET_I(8);
    vlSelf->P1_in = VL_RAND_RESET_I(8);
    vlSelf->P2_in = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__P1_dir = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__P2_dir = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__P1_o = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__P2_o = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__ROM_val = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb__DOT__ROM[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb__DOT__RAM_addr = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__RAM_r = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__RAM_wen = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__RAM_wval = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__RAM_waddr = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__RAM_read = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__RAM_oldval = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__RAM_newval = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__wmask1 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__masked_wval = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__RDb = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__WRb = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__DB_out = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__DB_oeb = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__BUS = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__U_rst_prev = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__U_txe = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__tx_timeout = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT____Vcellinp__P874x__P2_in = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT____Vcellinp__P874x__P1_in = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__P874x__DOT__A = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__P874x__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__F0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__F1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__reg_bank = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__intr_en = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__intr_en_delay = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__trupt_en = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__timer_en = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__counter_en = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__ent0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__SP = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__P874x__DOT__timer = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__P874x__DOT__last_timer = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__P874x__DOT__timer_next = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__P874x__DOT__PC = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__P874x__DOT__PC_next = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__P874x__DOT__SP_up = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__P874x__DOT__SP_down = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__P874x__DOT__PSW = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__P874x__DOT__in_intr = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb__DOT__P874x__DOT__index_regs[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb__DOT__P874x__DOT__RAM_val = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__P874x__DOT__instr = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__P874x__DOT__reg_idx = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__P874x__DOT__special1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__special2 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__movp = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__movp3 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__is_long_jump = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__is_jump = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__is_call = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__is_ret = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__is_djnz = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__jump_cond_tbl = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__jump_cond = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__to_port = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__is_imm = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__mem_op = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__to_accum = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__to_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__ALU_in1 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__P874x__DOT__ALU_in2 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__P874x__DOT__add_res = VL_RAND_RESET_I(9);
    vlSelf->tb__DOT__P874x__DOT__addc_res = VL_RAND_RESET_I(9);
    vlSelf->tb__DOT__P874x__DOT__or_res = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__P874x__DOT__and_res = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__P874x__DOT__ALU_res = VL_RAND_RESET_I(9);
    vlSelf->tb__DOT__P874x__DOT__reg_bank_addr = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__P874x__DOT__bus_in = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__last_t0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT__timer_div = VL_RAND_RESET_I(9);
    vlSelf->tb__DOT__P874x__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__P874x__DOT__needs_trupt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__P874x__DOT____VdfgTmp_h93293e77__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
