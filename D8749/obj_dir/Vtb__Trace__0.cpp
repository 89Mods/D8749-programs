// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


void Vtb___024root__trace_chg_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_top_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb___024root__trace_chg_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->tb__DOT__P1_dir),8);
        bufp->chgCData(oldp+1,(vlSelf->tb__DOT__P2_dir),8);
        bufp->chgCData(oldp+2,(vlSelf->tb__DOT__P1_o),8);
        bufp->chgCData(oldp+3,(vlSelf->tb__DOT__P2_o),8);
        bufp->chgSData(oldp+4,(((0U == (IData)(vlSelf->tb__DOT__P874x__DOT__state))
                                 ? (IData)(vlSelf->tb__DOT__P874x__DOT__PC)
                                 : ((0xa3U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr))
                                     ? ((0x700U & (IData)(vlSelf->tb__DOT__P874x__DOT__PC)) 
                                        | (IData)(vlSelf->tb__DOT__P874x__DOT__A))
                                     : ((0xe3U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr))
                                         ? (0x300U 
                                            | (IData)(vlSelf->tb__DOT__P874x__DOT__A))
                                         : (IData)(vlSelf->tb__DOT__P874x__DOT__PC))))),11);
        bufp->chgCData(oldp+5,(vlSelf->tb__DOT__ROM_val),8);
        bufp->chgIData(oldp+6,(vlSelf->tb__DOT__RAM[0]),32);
        bufp->chgIData(oldp+7,(vlSelf->tb__DOT__RAM[1]),32);
        bufp->chgIData(oldp+8,(vlSelf->tb__DOT__RAM[2]),32);
        bufp->chgIData(oldp+9,(vlSelf->tb__DOT__RAM[3]),32);
        bufp->chgIData(oldp+10,(vlSelf->tb__DOT__RAM[4]),32);
        bufp->chgIData(oldp+11,(vlSelf->tb__DOT__RAM[5]),32);
        bufp->chgIData(oldp+12,(vlSelf->tb__DOT__RAM[6]),32);
        bufp->chgIData(oldp+13,(vlSelf->tb__DOT__RAM[7]),32);
        bufp->chgIData(oldp+14,(vlSelf->tb__DOT__RAM[8]),32);
        bufp->chgIData(oldp+15,(vlSelf->tb__DOT__RAM[9]),32);
        bufp->chgIData(oldp+16,(vlSelf->tb__DOT__RAM[10]),32);
        bufp->chgIData(oldp+17,(vlSelf->tb__DOT__RAM[11]),32);
        bufp->chgIData(oldp+18,(vlSelf->tb__DOT__RAM[12]),32);
        bufp->chgIData(oldp+19,(vlSelf->tb__DOT__RAM[13]),32);
        bufp->chgIData(oldp+20,(vlSelf->tb__DOT__RAM[14]),32);
        bufp->chgIData(oldp+21,(vlSelf->tb__DOT__RAM[15]),32);
        bufp->chgIData(oldp+22,(vlSelf->tb__DOT__RAM[16]),32);
        bufp->chgIData(oldp+23,(vlSelf->tb__DOT__RAM[17]),32);
        bufp->chgIData(oldp+24,(vlSelf->tb__DOT__RAM[18]),32);
        bufp->chgIData(oldp+25,(vlSelf->tb__DOT__RAM[19]),32);
        bufp->chgIData(oldp+26,(vlSelf->tb__DOT__RAM[20]),32);
        bufp->chgIData(oldp+27,(vlSelf->tb__DOT__RAM[21]),32);
        bufp->chgIData(oldp+28,(vlSelf->tb__DOT__RAM[22]),32);
        bufp->chgIData(oldp+29,(vlSelf->tb__DOT__RAM[23]),32);
        bufp->chgIData(oldp+30,(vlSelf->tb__DOT__RAM[24]),32);
        bufp->chgIData(oldp+31,(vlSelf->tb__DOT__RAM[25]),32);
        bufp->chgIData(oldp+32,(vlSelf->tb__DOT__RAM[26]),32);
        bufp->chgIData(oldp+33,(vlSelf->tb__DOT__RAM[27]),32);
        bufp->chgIData(oldp+34,(vlSelf->tb__DOT__RAM[28]),32);
        bufp->chgIData(oldp+35,(vlSelf->tb__DOT__RAM[29]),32);
        bufp->chgIData(oldp+36,(vlSelf->tb__DOT__RAM[30]),32);
        bufp->chgIData(oldp+37,(vlSelf->tb__DOT__RAM[31]),32);
        bufp->chgCData(oldp+38,(vlSelf->tb__DOT__RAM_addr),7);
        bufp->chgIData(oldp+39,(vlSelf->tb__DOT__RAM_r),32);
        bufp->chgCData(oldp+40,(vlSelf->tb__DOT__RAM_wen),2);
        bufp->chgSData(oldp+41,(vlSelf->tb__DOT__RAM_wval),16);
        bufp->chgCData(oldp+42,(vlSelf->tb__DOT__RAM_waddr),7);
        bufp->chgSData(oldp+43,(vlSelf->tb__DOT__RAM_read),16);
        bufp->chgIData(oldp+44,(vlSelf->tb__DOT__RAM_oldval),32);
        bufp->chgIData(oldp+45,(vlSelf->tb__DOT__RAM_newval),32);
        bufp->chgSData(oldp+46,(((0xff00U & ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->tb__DOT__RAM_wen) 
                                                            >> 1U)))) 
                                             << 8U)) 
                                 | (0xffU & (- (IData)(
                                                       (1U 
                                                        & (IData)(vlSelf->tb__DOT__RAM_wen))))))),16);
        bufp->chgSData(oldp+47,(vlSelf->tb__DOT__wmask1),16);
        bufp->chgSData(oldp+48,(vlSelf->tb__DOT__masked_wval),16);
        bufp->chgBit(oldp+49,(vlSelf->tb__DOT__RDb));
        bufp->chgBit(oldp+50,(vlSelf->tb__DOT__WRb));
        bufp->chgCData(oldp+51,(vlSelf->tb__DOT__DB_out),8);
        bufp->chgBit(oldp+52,(vlSelf->tb__DOT__DB_oeb));
        bufp->chgCData(oldp+53,(vlSelf->tb__DOT__BUS),8);
        bufp->chgBit(oldp+54,(vlSelf->tb__DOT__U_rst_prev));
        bufp->chgBit(oldp+55,(vlSelf->tb__DOT__U_txe));
        bufp->chgCData(oldp+56,(vlSelf->tb__DOT__tx_timeout),3);
        bufp->chgBit(oldp+57,((1U & (~ (IData)(vlSelf->tb__DOT__P874x__DOT__ent0)))));
        bufp->chgCData(oldp+58,(((IData)(vlSelf->tb__DOT__RDb)
                                  ? 0U : 0xaaU)),8);
        bufp->chgCData(oldp+59,(vlSelf->tb__DOT__P874x__DOT__A),8);
        bufp->chgBit(oldp+60,(vlSelf->tb__DOT__P874x__DOT__carry));
        bufp->chgBit(oldp+61,(vlSelf->tb__DOT__P874x__DOT__F0));
        bufp->chgBit(oldp+62,(vlSelf->tb__DOT__P874x__DOT__F1));
        bufp->chgBit(oldp+63,(vlSelf->tb__DOT__P874x__DOT__reg_bank));
        bufp->chgBit(oldp+64,(vlSelf->tb__DOT__P874x__DOT__intr_en));
        bufp->chgBit(oldp+65,(vlSelf->tb__DOT__P874x__DOT__intr_en_delay));
        bufp->chgBit(oldp+66,(vlSelf->tb__DOT__P874x__DOT__trupt_en));
        bufp->chgBit(oldp+67,(vlSelf->tb__DOT__P874x__DOT__timer_en));
        bufp->chgBit(oldp+68,(vlSelf->tb__DOT__P874x__DOT__counter_en));
        bufp->chgBit(oldp+69,(vlSelf->tb__DOT__P874x__DOT__ent0));
        bufp->chgCData(oldp+70,(vlSelf->tb__DOT__P874x__DOT__SP),3);
        bufp->chgCData(oldp+71,(vlSelf->tb__DOT__P874x__DOT__timer),8);
        bufp->chgCData(oldp+72,(vlSelf->tb__DOT__P874x__DOT__last_timer),8);
        bufp->chgCData(oldp+73,((0xffU & ((IData)(1U) 
                                          + (IData)(vlSelf->tb__DOT__P874x__DOT__timer)))),8);
        bufp->chgSData(oldp+74,(vlSelf->tb__DOT__P874x__DOT__PC),11);
        bufp->chgSData(oldp+75,((0x7ffU & ((IData)(1U) 
                                           + (IData)(vlSelf->tb__DOT__P874x__DOT__PC)))),11);
        bufp->chgCData(oldp+76,((7U & ((IData)(1U) 
                                       + (IData)(vlSelf->tb__DOT__P874x__DOT__SP)))),3);
        bufp->chgCData(oldp+77,((7U & ((IData)(vlSelf->tb__DOT__P874x__DOT__SP) 
                                       - (IData)(1U)))),3);
        bufp->chgCData(oldp+78,(vlSelf->tb__DOT__P874x__DOT__PSW),8);
        bufp->chgCData(oldp+79,(vlSelf->tb__DOT__P874x__DOT__in_intr),2);
        bufp->chgCData(oldp+80,(vlSelf->tb__DOT__P874x__DOT__index_regs[0]),8);
        bufp->chgCData(oldp+81,(vlSelf->tb__DOT__P874x__DOT__index_regs[1]),8);
        bufp->chgCData(oldp+82,(vlSelf->tb__DOT__P874x__DOT__index_regs[2]),8);
        bufp->chgCData(oldp+83,(vlSelf->tb__DOT__P874x__DOT__index_regs[3]),8);
        bufp->chgCData(oldp+84,(vlSelf->tb__DOT__P874x__DOT__RAM_val),8);
        bufp->chgCData(oldp+85,(vlSelf->tb__DOT__P874x__DOT__instr),8);
        bufp->chgCData(oldp+86,((7U & (IData)(vlSelf->tb__DOT__P874x__DOT__instr))),3);
        bufp->chgBit(oldp+87,((5U == (0xfU & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))));
        bufp->chgBit(oldp+88,((7U == (0xfU & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))));
        bufp->chgBit(oldp+89,((3U == (0xfU & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))));
        bufp->chgBit(oldp+90,((0xa3U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr))));
        bufp->chgBit(oldp+91,((0xe3U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr))));
        bufp->chgBit(oldp+92,((4U == (0xfU & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))));
        bufp->chgBit(oldp+93,(vlSelf->tb__DOT__P874x__DOT__is_jump));
        bufp->chgBit(oldp+94,((IData)((0x14U == (0x1fU 
                                                 & (IData)(vlSelf->tb__DOT__P874x__DOT__instr))))));
        bufp->chgBit(oldp+95,(vlSelf->tb__DOT__P874x__DOT__is_ret));
        bufp->chgBit(oldp+96,(vlSelf->tb__DOT__P874x__DOT__is_djnz));
        bufp->chgBit(oldp+97,((2U == (3U & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                            >> 2U)))));
        bufp->chgBit(oldp+98,(vlSelf->tb__DOT__P874x__DOT__to_port));
        bufp->chgBit(oldp+99,(vlSelf->tb__DOT__P874x__DOT__is_imm));
        bufp->chgBit(oldp+100,(vlSelf->tb__DOT__P874x__DOT__mem_op));
        bufp->chgBit(oldp+101,(((IData)(vlSelf->tb__DOT__P874x__DOT__mem_op) 
                                & ((1U == (7U & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                 >> 5U))) 
                                   | (5U == (7U & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                   >> 5U)))))));
        bufp->chgBit(oldp+102,(((~ ((IData)(vlSelf->tb__DOT__P874x__DOT__mem_op) 
                                    & ((1U == (7U & 
                                               ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                >> 5U))) 
                                       | (5U == (7U 
                                                 & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                    >> 5U)))))) 
                                & (IData)(vlSelf->tb__DOT__P874x__DOT__mem_op))));
        bufp->chgBit(oldp+103,(vlSelf->tb__DOT__P874x__DOT__to_accum));
        bufp->chgBit(oldp+104,(((IData)(vlSelf->tb__DOT__P874x__DOT____VdfgTmp_h93293e77__0) 
                                & ((1U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                   >> 4U))) 
                                   | ((0xaU == (0xfU 
                                                & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                   >> 4U))) 
                                      | ((0xbU == (0xfU 
                                                   & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                      >> 4U))) 
                                         | ((0xcU == 
                                             (0xfU 
                                              & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                 >> 4U))) 
                                            | (0xeU 
                                               == (0xfU 
                                                   & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                      >> 4U))))))))));
        bufp->chgCData(oldp+105,(vlSelf->tb__DOT__P874x__DOT__ALU_in1),8);
        bufp->chgCData(oldp+106,(vlSelf->tb__DOT__P874x__DOT__ALU_in2),8);
        bufp->chgSData(oldp+107,(vlSelf->tb__DOT__P874x__DOT__add_res),9);
        bufp->chgSData(oldp+108,(vlSelf->tb__DOT__P874x__DOT__addc_res),9);
        bufp->chgCData(oldp+109,(vlSelf->tb__DOT__P874x__DOT__or_res),8);
        bufp->chgCData(oldp+110,(vlSelf->tb__DOT__P874x__DOT__and_res),8);
        bufp->chgSData(oldp+111,(vlSelf->tb__DOT__P874x__DOT__ALU_res),9);
        bufp->chgCData(oldp+112,(((IData)(vlSelf->tb__DOT__P874x__DOT__reg_bank)
                                   ? 3U : 0U)),2);
        bufp->chgCData(oldp+113,(((((IData)(vlSelf->tb__DOT__P874x__DOT__reg_bank)
                                     ? 3U : 0U) << 3U) 
                                  | (7U & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))),8);
        bufp->chgBit(oldp+114,(((8U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr)) 
                                | ((0x88U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr)) 
                                   | (0x98U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr))))));
        bufp->chgBit(oldp+115,(vlSelf->tb__DOT__P874x__DOT__last_t0));
        bufp->chgSData(oldp+116,(vlSelf->tb__DOT__P874x__DOT__timer_div),9);
        bufp->chgCData(oldp+117,(vlSelf->tb__DOT__P874x__DOT__state),2);
        bufp->chgBit(oldp+118,(vlSelf->tb__DOT__P874x__DOT__needs_trupt));
    }
    bufp->chgBit(oldp+119,(vlSelf->clk));
    bufp->chgBit(oldp+120,(vlSelf->rst));
    bufp->chgBit(oldp+121,(vlSelf->intb));
    bufp->chgCData(oldp+122,(vlSelf->P1_out),8);
    bufp->chgCData(oldp+123,(vlSelf->P2_out),8);
    bufp->chgCData(oldp+124,(vlSelf->P1_in),8);
    bufp->chgCData(oldp+125,(vlSelf->P2_in),8);
    bufp->chgBit(oldp+126,((1U & (IData)(vlSelf->P2_out))));
    bufp->chgBit(oldp+127,((1U & ((IData)(vlSelf->P2_out) 
                                  >> 1U))));
    bufp->chgBit(oldp+128,((1U & ((IData)(vlSelf->P2_out) 
                                  >> 2U))));
    bufp->chgCData(oldp+129,((0xffU & ((~ (IData)(vlSelf->tb__DOT__P1_dir)) 
                                       | (IData)(vlSelf->P1_in)))),8);
    bufp->chgCData(oldp+130,((0xffU & ((0xf7U & (IData)(vlSelf->P2_in)) 
                                       | ((~ (IData)(vlSelf->tb__DOT__P2_dir)) 
                                          | ((IData)(vlSelf->tb__DOT__U_txe) 
                                             << 3U))))),8);
    bufp->chgBit(oldp+131,(vlSelf->tb__DOT__P874x__DOT__jump_cond_tbl));
    bufp->chgBit(oldp+132,((1U & ((IData)(vlSelf->tb__DOT__P874x__DOT__is_djnz)
                                   ? (1U != (IData)(vlSelf->tb__DOT__P874x__DOT__RAM_val))
                                   : ((2U == (0xfU 
                                              & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))
                                       ? ((IData)(vlSelf->tb__DOT__P874x__DOT__A) 
                                          >> (7U & 
                                              ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                               >> 5U)))
                                       : ((6U != (0xfU 
                                                  & (IData)(vlSelf->tb__DOT__P874x__DOT__instr))) 
                                          | (IData)(vlSelf->tb__DOT__P874x__DOT__jump_cond_tbl)))))));
}

void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_cleanup\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
