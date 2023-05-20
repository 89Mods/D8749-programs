// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


VL_ATTR_COLD void Vtb___024root__trace_init_sub__TOP__0(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+120,"clk", false,-1);
    tracep->declBit(c+121,"rst", false,-1);
    tracep->declBit(c+122,"intb", false,-1);
    tracep->declBus(c+123,"P1_out", false,-1, 7,0);
    tracep->declBus(c+124,"P2_out", false,-1, 7,0);
    tracep->declBus(c+125,"P1_in", false,-1, 7,0);
    tracep->declBus(c+126,"P2_in", false,-1, 7,0);
    tracep->pushNamePrefix("tb ");
    tracep->declBit(c+120,"clk", false,-1);
    tracep->declBit(c+121,"rst", false,-1);
    tracep->declBit(c+122,"intb", false,-1);
    tracep->declBus(c+123,"P1_out", false,-1, 7,0);
    tracep->declBus(c+124,"P2_out", false,-1, 7,0);
    tracep->declBus(c+125,"P1_in", false,-1, 7,0);
    tracep->declBus(c+126,"P2_in", false,-1, 7,0);
    tracep->declBus(c+1,"P1_dir", false,-1, 7,0);
    tracep->declBus(c+2,"P2_dir", false,-1, 7,0);
    tracep->declBus(c+3,"P1_o", false,-1, 7,0);
    tracep->declBus(c+4,"P2_o", false,-1, 7,0);
    tracep->declBus(c+5,"ROM_addr", false,-1, 10,0);
    tracep->declBus(c+6,"ROM_val", false,-1, 7,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+7+i*1,"RAM", true,(i+0), 31,0);
    }
    tracep->declBus(c+39,"RAM_addr", false,-1, 6,0);
    tracep->declBus(c+40,"RAM_r", false,-1, 31,0);
    tracep->declBus(c+41,"RAM_wen", false,-1, 1,0);
    tracep->declBus(c+42,"RAM_wval", false,-1, 15,0);
    tracep->declBus(c+43,"RAM_waddr", false,-1, 6,0);
    tracep->declBus(c+44,"RAM_read", false,-1, 15,0);
    tracep->declBus(c+45,"RAM_oldval", false,-1, 31,0);
    tracep->declBus(c+46,"RAM_newval", false,-1, 31,0);
    tracep->declBus(c+47,"wmask0", false,-1, 15,0);
    tracep->declBus(c+48,"wmask1", false,-1, 15,0);
    tracep->declBus(c+49,"masked_wval", false,-1, 15,0);
    tracep->declBit(c+50,"RDb", false,-1);
    tracep->declBit(c+51,"WRb", false,-1);
    tracep->declBus(c+52,"DB_out", false,-1, 7,0);
    tracep->declBit(c+53,"DB_oeb", false,-1);
    tracep->declBus(c+54,"BUS", false,-1, 7,0);
    tracep->declBit(c+55,"U_rst_prev", false,-1);
    tracep->declBit(c+127,"U_rst", false,-1);
    tracep->declBit(c+128,"U_csb", false,-1);
    tracep->declBit(c+129,"U_cd", false,-1);
    tracep->declBit(c+56,"U_txe", false,-1);
    tracep->declBus(c+57,"tx_timeout", false,-1, 2,0);
    tracep->pushNamePrefix("P874x ");
    tracep->declBit(c+120,"clk", false,-1);
    tracep->declBit(c+121,"rst", false,-1);
    tracep->declBit(c+134,"T0", false,-1);
    tracep->declBit(c+135,"T1", false,-1);
    tracep->declBit(c+122,"INTb", false,-1);
    tracep->declBit(c+120,"T0_out", false,-1);
    tracep->declBit(c+58,"T0_oeb", false,-1);
    tracep->declBit(c+50,"RDb", false,-1);
    tracep->declBit(c+51,"WRb", false,-1);
    tracep->declBus(c+52,"DB_out", false,-1, 7,0);
    tracep->declBus(c+59,"DB_in", false,-1, 7,0);
    tracep->declBit(c+53,"DB_oeb", false,-1);
    tracep->declBus(c+3,"P1_out", false,-1, 7,0);
    tracep->declBus(c+4,"P2_out", false,-1, 7,0);
    tracep->declBus(c+130,"P1_in", false,-1, 7,0);
    tracep->declBus(c+131,"P2_in", false,-1, 7,0);
    tracep->declBus(c+1,"P1_dir", false,-1, 7,0);
    tracep->declBus(c+2,"P2_dir", false,-1, 7,0);
    tracep->declBus(c+5,"ROM_addr", false,-1, 10,0);
    tracep->declBus(c+6,"ROM_val", false,-1, 7,0);
    tracep->declBus(c+39,"RAM_addr", false,-1, 6,0);
    tracep->declBus(c+44,"RAM_val_r", false,-1, 15,0);
    tracep->declBus(c+43,"RAM_waddr", false,-1, 6,0);
    tracep->declBus(c+42,"RAM_wval", false,-1, 15,0);
    tracep->declBus(c+41,"RAM_wen", false,-1, 1,0);
    tracep->declBus(c+60,"A", false,-1, 7,0);
    tracep->declBit(c+61,"carry", false,-1);
    tracep->declBit(c+62,"F0", false,-1);
    tracep->declBit(c+63,"F1", false,-1);
    tracep->declBit(c+64,"reg_bank", false,-1);
    tracep->declBit(c+65,"intr_en", false,-1);
    tracep->declBit(c+66,"intr_en_delay", false,-1);
    tracep->declBit(c+67,"trupt_en", false,-1);
    tracep->declBit(c+68,"timer_en", false,-1);
    tracep->declBit(c+69,"counter_en", false,-1);
    tracep->declBit(c+70,"ent0", false,-1);
    tracep->declBus(c+71,"SP", false,-1, 2,0);
    tracep->declBus(c+72,"timer", false,-1, 7,0);
    tracep->declBus(c+73,"last_timer", false,-1, 7,0);
    tracep->declBus(c+74,"timer_next", false,-1, 7,0);
    tracep->declBus(c+75,"PC", false,-1, 10,0);
    tracep->declBus(c+76,"PC_next", false,-1, 10,0);
    tracep->declBus(c+77,"SP_up", false,-1, 2,0);
    tracep->declBus(c+78,"SP_down", false,-1, 2,0);
    tracep->declBus(c+79,"PSW", false,-1, 7,0);
    tracep->declBus(c+80,"in_intr", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+81+i*1,"index_regs", true,(i+0), 7,0);
    }
    tracep->declBus(c+85,"RAM_val", false,-1, 7,0);
    tracep->declBus(c+86,"instr", false,-1, 7,0);
    tracep->declBus(c+87,"reg_idx", false,-1, 2,0);
    tracep->declBit(c+88,"special1", false,-1);
    tracep->declBit(c+89,"special2", false,-1);
    tracep->declBit(c+90,"special3", false,-1);
    tracep->declBit(c+91,"movp", false,-1);
    tracep->declBit(c+92,"movp3", false,-1);
    tracep->declBit(c+93,"is_long_jump", false,-1);
    tracep->declBit(c+94,"is_jump", false,-1);
    tracep->declBit(c+95,"is_call", false,-1);
    tracep->declBit(c+96,"is_ret", false,-1);
    tracep->declBit(c+97,"is_djnz", false,-1);
    tracep->declBit(c+132,"jump_cond_tbl", false,-1);
    tracep->declBit(c+133,"jump_cond", false,-1);
    tracep->declBit(c+98,"port_col", false,-1);
    tracep->declBit(c+99,"to_port", false,-1);
    tracep->declBit(c+100,"is_imm", false,-1);
    tracep->declBit(c+101,"mem_op", false,-1);
    tracep->declBit(c+102,"wmem", false,-1);
    tracep->declBit(c+103,"rmem", false,-1);
    tracep->declBit(c+104,"to_accum", false,-1);
    tracep->declBit(c+105,"to_reg", false,-1);
    tracep->declBus(c+106,"ALU_in1", false,-1, 7,0);
    tracep->declBus(c+107,"ALU_in2", false,-1, 7,0);
    tracep->declBus(c+108,"add_res", false,-1, 8,0);
    tracep->declBus(c+109,"addc_res", false,-1, 8,0);
    tracep->declBus(c+110,"or_res", false,-1, 7,0);
    tracep->declBus(c+111,"and_res", false,-1, 7,0);
    tracep->declBus(c+112,"ALU_res", false,-1, 8,0);
    tracep->declBus(c+113,"reg_bank_addr", false,-1, 1,0);
    tracep->declBus(c+114,"reg_ram_addr", false,-1, 7,0);
    tracep->declBit(c+115,"bus_in", false,-1);
    tracep->declBit(c+116,"last_t0", false,-1);
    tracep->declBus(c+117,"timer_div", false,-1, 8,0);
    tracep->declBus(c+118,"state", false,-1, 1,0);
    tracep->declBit(c+119,"needs_trupt", false,-1);
    tracep->declBus(c+136,"FETCH", false,-1, 31,0);
    tracep->declBus(c+137,"HALT", false,-1, 31,0);
    tracep->declBus(c+138,"EXECUTE", false,-1, 31,0);
    tracep->declBus(c+139,"WRITEBACK", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtb___024root__trace_init_top(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_init_top\n"); );
    // Body
    Vtb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb___024root__trace_register(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb___024root__trace_full_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_full_top_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb___024root__trace_full_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->tb__DOT__P1_dir),8);
    bufp->fullCData(oldp+2,(vlSelf->tb__DOT__P2_dir),8);
    bufp->fullCData(oldp+3,(vlSelf->tb__DOT__P1_o),8);
    bufp->fullCData(oldp+4,(vlSelf->tb__DOT__P2_o),8);
    bufp->fullSData(oldp+5,(((0U == (IData)(vlSelf->tb__DOT__P874x__DOT__state))
                              ? (IData)(vlSelf->tb__DOT__P874x__DOT__PC)
                              : ((0xa3U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr))
                                  ? ((0x700U & (IData)(vlSelf->tb__DOT__P874x__DOT__PC)) 
                                     | (IData)(vlSelf->tb__DOT__P874x__DOT__A))
                                  : ((0xe3U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr))
                                      ? (0x300U | (IData)(vlSelf->tb__DOT__P874x__DOT__A))
                                      : (IData)(vlSelf->tb__DOT__P874x__DOT__PC))))),11);
    bufp->fullCData(oldp+6,(vlSelf->tb__DOT__ROM_val),8);
    bufp->fullIData(oldp+7,(vlSelf->tb__DOT__RAM[0]),32);
    bufp->fullIData(oldp+8,(vlSelf->tb__DOT__RAM[1]),32);
    bufp->fullIData(oldp+9,(vlSelf->tb__DOT__RAM[2]),32);
    bufp->fullIData(oldp+10,(vlSelf->tb__DOT__RAM[3]),32);
    bufp->fullIData(oldp+11,(vlSelf->tb__DOT__RAM[4]),32);
    bufp->fullIData(oldp+12,(vlSelf->tb__DOT__RAM[5]),32);
    bufp->fullIData(oldp+13,(vlSelf->tb__DOT__RAM[6]),32);
    bufp->fullIData(oldp+14,(vlSelf->tb__DOT__RAM[7]),32);
    bufp->fullIData(oldp+15,(vlSelf->tb__DOT__RAM[8]),32);
    bufp->fullIData(oldp+16,(vlSelf->tb__DOT__RAM[9]),32);
    bufp->fullIData(oldp+17,(vlSelf->tb__DOT__RAM[10]),32);
    bufp->fullIData(oldp+18,(vlSelf->tb__DOT__RAM[11]),32);
    bufp->fullIData(oldp+19,(vlSelf->tb__DOT__RAM[12]),32);
    bufp->fullIData(oldp+20,(vlSelf->tb__DOT__RAM[13]),32);
    bufp->fullIData(oldp+21,(vlSelf->tb__DOT__RAM[14]),32);
    bufp->fullIData(oldp+22,(vlSelf->tb__DOT__RAM[15]),32);
    bufp->fullIData(oldp+23,(vlSelf->tb__DOT__RAM[16]),32);
    bufp->fullIData(oldp+24,(vlSelf->tb__DOT__RAM[17]),32);
    bufp->fullIData(oldp+25,(vlSelf->tb__DOT__RAM[18]),32);
    bufp->fullIData(oldp+26,(vlSelf->tb__DOT__RAM[19]),32);
    bufp->fullIData(oldp+27,(vlSelf->tb__DOT__RAM[20]),32);
    bufp->fullIData(oldp+28,(vlSelf->tb__DOT__RAM[21]),32);
    bufp->fullIData(oldp+29,(vlSelf->tb__DOT__RAM[22]),32);
    bufp->fullIData(oldp+30,(vlSelf->tb__DOT__RAM[23]),32);
    bufp->fullIData(oldp+31,(vlSelf->tb__DOT__RAM[24]),32);
    bufp->fullIData(oldp+32,(vlSelf->tb__DOT__RAM[25]),32);
    bufp->fullIData(oldp+33,(vlSelf->tb__DOT__RAM[26]),32);
    bufp->fullIData(oldp+34,(vlSelf->tb__DOT__RAM[27]),32);
    bufp->fullIData(oldp+35,(vlSelf->tb__DOT__RAM[28]),32);
    bufp->fullIData(oldp+36,(vlSelf->tb__DOT__RAM[29]),32);
    bufp->fullIData(oldp+37,(vlSelf->tb__DOT__RAM[30]),32);
    bufp->fullIData(oldp+38,(vlSelf->tb__DOT__RAM[31]),32);
    bufp->fullCData(oldp+39,(vlSelf->tb__DOT__RAM_addr),7);
    bufp->fullIData(oldp+40,(vlSelf->tb__DOT__RAM_r),32);
    bufp->fullCData(oldp+41,(vlSelf->tb__DOT__RAM_wen),2);
    bufp->fullSData(oldp+42,(vlSelf->tb__DOT__RAM_wval),16);
    bufp->fullCData(oldp+43,(vlSelf->tb__DOT__RAM_waddr),7);
    bufp->fullSData(oldp+44,(vlSelf->tb__DOT__RAM_read),16);
    bufp->fullIData(oldp+45,(vlSelf->tb__DOT__RAM_oldval),32);
    bufp->fullIData(oldp+46,(vlSelf->tb__DOT__RAM_newval),32);
    bufp->fullSData(oldp+47,(((0xff00U & ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->tb__DOT__RAM_wen) 
                                                         >> 1U)))) 
                                          << 8U)) | 
                              (0xffU & (- (IData)((1U 
                                                   & (IData)(vlSelf->tb__DOT__RAM_wen))))))),16);
    bufp->fullSData(oldp+48,(vlSelf->tb__DOT__wmask1),16);
    bufp->fullSData(oldp+49,(vlSelf->tb__DOT__masked_wval),16);
    bufp->fullBit(oldp+50,(vlSelf->tb__DOT__RDb));
    bufp->fullBit(oldp+51,(vlSelf->tb__DOT__WRb));
    bufp->fullCData(oldp+52,(vlSelf->tb__DOT__DB_out),8);
    bufp->fullBit(oldp+53,(vlSelf->tb__DOT__DB_oeb));
    bufp->fullCData(oldp+54,(vlSelf->tb__DOT__BUS),8);
    bufp->fullBit(oldp+55,(vlSelf->tb__DOT__U_rst_prev));
    bufp->fullBit(oldp+56,(vlSelf->tb__DOT__U_txe));
    bufp->fullCData(oldp+57,(vlSelf->tb__DOT__tx_timeout),3);
    bufp->fullBit(oldp+58,((1U & (~ (IData)(vlSelf->tb__DOT__P874x__DOT__ent0)))));
    bufp->fullCData(oldp+59,(((IData)(vlSelf->tb__DOT__RDb)
                               ? 0U : 0xaaU)),8);
    bufp->fullCData(oldp+60,(vlSelf->tb__DOT__P874x__DOT__A),8);
    bufp->fullBit(oldp+61,(vlSelf->tb__DOT__P874x__DOT__carry));
    bufp->fullBit(oldp+62,(vlSelf->tb__DOT__P874x__DOT__F0));
    bufp->fullBit(oldp+63,(vlSelf->tb__DOT__P874x__DOT__F1));
    bufp->fullBit(oldp+64,(vlSelf->tb__DOT__P874x__DOT__reg_bank));
    bufp->fullBit(oldp+65,(vlSelf->tb__DOT__P874x__DOT__intr_en));
    bufp->fullBit(oldp+66,(vlSelf->tb__DOT__P874x__DOT__intr_en_delay));
    bufp->fullBit(oldp+67,(vlSelf->tb__DOT__P874x__DOT__trupt_en));
    bufp->fullBit(oldp+68,(vlSelf->tb__DOT__P874x__DOT__timer_en));
    bufp->fullBit(oldp+69,(vlSelf->tb__DOT__P874x__DOT__counter_en));
    bufp->fullBit(oldp+70,(vlSelf->tb__DOT__P874x__DOT__ent0));
    bufp->fullCData(oldp+71,(vlSelf->tb__DOT__P874x__DOT__SP),3);
    bufp->fullCData(oldp+72,(vlSelf->tb__DOT__P874x__DOT__timer),8);
    bufp->fullCData(oldp+73,(vlSelf->tb__DOT__P874x__DOT__last_timer),8);
    bufp->fullCData(oldp+74,((0xffU & ((IData)(1U) 
                                       + (IData)(vlSelf->tb__DOT__P874x__DOT__timer)))),8);
    bufp->fullSData(oldp+75,(vlSelf->tb__DOT__P874x__DOT__PC),11);
    bufp->fullSData(oldp+76,((0x7ffU & ((IData)(1U) 
                                        + (IData)(vlSelf->tb__DOT__P874x__DOT__PC)))),11);
    bufp->fullCData(oldp+77,((7U & ((IData)(1U) + (IData)(vlSelf->tb__DOT__P874x__DOT__SP)))),3);
    bufp->fullCData(oldp+78,((7U & ((IData)(vlSelf->tb__DOT__P874x__DOT__SP) 
                                    - (IData)(1U)))),3);
    bufp->fullCData(oldp+79,(vlSelf->tb__DOT__P874x__DOT__PSW),8);
    bufp->fullCData(oldp+80,(vlSelf->tb__DOT__P874x__DOT__in_intr),2);
    bufp->fullCData(oldp+81,(vlSelf->tb__DOT__P874x__DOT__index_regs[0]),8);
    bufp->fullCData(oldp+82,(vlSelf->tb__DOT__P874x__DOT__index_regs[1]),8);
    bufp->fullCData(oldp+83,(vlSelf->tb__DOT__P874x__DOT__index_regs[2]),8);
    bufp->fullCData(oldp+84,(vlSelf->tb__DOT__P874x__DOT__index_regs[3]),8);
    bufp->fullCData(oldp+85,(vlSelf->tb__DOT__P874x__DOT__RAM_val),8);
    bufp->fullCData(oldp+86,(vlSelf->tb__DOT__P874x__DOT__instr),8);
    bufp->fullCData(oldp+87,((7U & (IData)(vlSelf->tb__DOT__P874x__DOT__instr))),3);
    bufp->fullBit(oldp+88,((5U == (0xfU & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))));
    bufp->fullBit(oldp+89,((7U == (0xfU & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))));
    bufp->fullBit(oldp+90,((3U == (0xfU & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))));
    bufp->fullBit(oldp+91,((0xa3U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr))));
    bufp->fullBit(oldp+92,((0xe3U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr))));
    bufp->fullBit(oldp+93,((4U == (0xfU & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))));
    bufp->fullBit(oldp+94,(vlSelf->tb__DOT__P874x__DOT__is_jump));
    bufp->fullBit(oldp+95,((IData)((0x14U == (0x1fU 
                                              & (IData)(vlSelf->tb__DOT__P874x__DOT__instr))))));
    bufp->fullBit(oldp+96,(vlSelf->tb__DOT__P874x__DOT__is_ret));
    bufp->fullBit(oldp+97,(vlSelf->tb__DOT__P874x__DOT__is_djnz));
    bufp->fullBit(oldp+98,((2U == (3U & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                         >> 2U)))));
    bufp->fullBit(oldp+99,(vlSelf->tb__DOT__P874x__DOT__to_port));
    bufp->fullBit(oldp+100,(vlSelf->tb__DOT__P874x__DOT__is_imm));
    bufp->fullBit(oldp+101,(vlSelf->tb__DOT__P874x__DOT__mem_op));
    bufp->fullBit(oldp+102,(((IData)(vlSelf->tb__DOT__P874x__DOT__mem_op) 
                             & ((1U == (7U & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                              >> 5U))) 
                                | (5U == (7U & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                >> 5U)))))));
    bufp->fullBit(oldp+103,(((~ ((IData)(vlSelf->tb__DOT__P874x__DOT__mem_op) 
                                 & ((1U == (7U & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                  >> 5U))) 
                                    | (5U == (7U & 
                                              ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                               >> 5U)))))) 
                             & (IData)(vlSelf->tb__DOT__P874x__DOT__mem_op))));
    bufp->fullBit(oldp+104,(vlSelf->tb__DOT__P874x__DOT__to_accum));
    bufp->fullBit(oldp+105,(((IData)(vlSelf->tb__DOT__P874x__DOT____VdfgTmp_h93293e77__0) 
                             & ((1U == (0xfU & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                >> 4U))) 
                                | ((0xaU == (0xfU & 
                                             ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                              >> 4U))) 
                                   | ((0xbU == (0xfU 
                                                & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                   >> 4U))) 
                                      | ((0xcU == (0xfU 
                                                   & ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                                      >> 4U))) 
                                         | (0xeU == 
                                            (0xfU & 
                                             ((IData)(vlSelf->tb__DOT__P874x__DOT__instr) 
                                              >> 4U))))))))));
    bufp->fullCData(oldp+106,(vlSelf->tb__DOT__P874x__DOT__ALU_in1),8);
    bufp->fullCData(oldp+107,(vlSelf->tb__DOT__P874x__DOT__ALU_in2),8);
    bufp->fullSData(oldp+108,(vlSelf->tb__DOT__P874x__DOT__add_res),9);
    bufp->fullSData(oldp+109,(vlSelf->tb__DOT__P874x__DOT__addc_res),9);
    bufp->fullCData(oldp+110,(vlSelf->tb__DOT__P874x__DOT__or_res),8);
    bufp->fullCData(oldp+111,(vlSelf->tb__DOT__P874x__DOT__and_res),8);
    bufp->fullSData(oldp+112,(vlSelf->tb__DOT__P874x__DOT__ALU_res),9);
    bufp->fullCData(oldp+113,(((IData)(vlSelf->tb__DOT__P874x__DOT__reg_bank)
                                ? 3U : 0U)),2);
    bufp->fullCData(oldp+114,(((((IData)(vlSelf->tb__DOT__P874x__DOT__reg_bank)
                                  ? 3U : 0U) << 3U) 
                               | (7U & (IData)(vlSelf->tb__DOT__P874x__DOT__instr)))),8);
    bufp->fullBit(oldp+115,(((8U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr)) 
                             | ((0x88U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr)) 
                                | (0x98U == (IData)(vlSelf->tb__DOT__P874x__DOT__instr))))));
    bufp->fullBit(oldp+116,(vlSelf->tb__DOT__P874x__DOT__last_t0));
    bufp->fullSData(oldp+117,(vlSelf->tb__DOT__P874x__DOT__timer_div),9);
    bufp->fullCData(oldp+118,(vlSelf->tb__DOT__P874x__DOT__state),2);
    bufp->fullBit(oldp+119,(vlSelf->tb__DOT__P874x__DOT__needs_trupt));
    bufp->fullBit(oldp+120,(vlSelf->clk));
    bufp->fullBit(oldp+121,(vlSelf->rst));
    bufp->fullBit(oldp+122,(vlSelf->intb));
    bufp->fullCData(oldp+123,(vlSelf->P1_out),8);
    bufp->fullCData(oldp+124,(vlSelf->P2_out),8);
    bufp->fullCData(oldp+125,(vlSelf->P1_in),8);
    bufp->fullCData(oldp+126,(vlSelf->P2_in),8);
    bufp->fullBit(oldp+127,((1U & (IData)(vlSelf->P2_out))));
    bufp->fullBit(oldp+128,((1U & ((IData)(vlSelf->P2_out) 
                                   >> 1U))));
    bufp->fullBit(oldp+129,((1U & ((IData)(vlSelf->P2_out) 
                                   >> 2U))));
    bufp->fullCData(oldp+130,((0xffU & ((~ (IData)(vlSelf->tb__DOT__P1_dir)) 
                                        | (IData)(vlSelf->P1_in)))),8);
    bufp->fullCData(oldp+131,((0xffU & ((0xf7U & (IData)(vlSelf->P2_in)) 
                                        | ((~ (IData)(vlSelf->tb__DOT__P2_dir)) 
                                           | ((IData)(vlSelf->tb__DOT__U_txe) 
                                              << 3U))))),8);
    bufp->fullBit(oldp+132,(vlSelf->tb__DOT__P874x__DOT__jump_cond_tbl));
    bufp->fullBit(oldp+133,((1U & ((IData)(vlSelf->tb__DOT__P874x__DOT__is_djnz)
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
    bufp->fullBit(oldp+134,(0U));
    bufp->fullBit(oldp+135,(1U));
    bufp->fullIData(oldp+136,(0U),32);
    bufp->fullIData(oldp+137,(1U),32);
    bufp->fullIData(oldp+138,(2U),32);
    bufp->fullIData(oldp+139,(3U),32);
}
