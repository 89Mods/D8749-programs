// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"

class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(intb,0,0);
        VL_OUT8(P1_out,7,0);
        VL_OUT8(P2_out,7,0);
        VL_IN8(P1_in,7,0);
        VL_IN8(P2_in,7,0);
        CData/*7:0*/ tb__DOT__P1_dir;
        CData/*7:0*/ tb__DOT__P2_dir;
        CData/*7:0*/ tb__DOT__P1_o;
        CData/*7:0*/ tb__DOT__P2_o;
        CData/*7:0*/ tb__DOT__ROM_val;
        CData/*6:0*/ tb__DOT__RAM_addr;
        CData/*1:0*/ tb__DOT__RAM_wen;
        CData/*6:0*/ tb__DOT__RAM_waddr;
        CData/*0:0*/ tb__DOT__RDb;
        CData/*0:0*/ tb__DOT__WRb;
        CData/*7:0*/ tb__DOT__DB_out;
        CData/*0:0*/ tb__DOT__DB_oeb;
        CData/*7:0*/ tb__DOT__BUS;
        CData/*0:0*/ tb__DOT__U_rst_prev;
        CData/*0:0*/ tb__DOT__U_txe;
        CData/*2:0*/ tb__DOT__tx_timeout;
        CData/*7:0*/ tb__DOT____Vcellinp__P874x__P2_in;
        CData/*7:0*/ tb__DOT____Vcellinp__P874x__P1_in;
        CData/*7:0*/ tb__DOT__P874x__DOT__A;
        CData/*0:0*/ tb__DOT__P874x__DOT__carry;
        CData/*0:0*/ tb__DOT__P874x__DOT__F0;
        CData/*0:0*/ tb__DOT__P874x__DOT__F1;
        CData/*0:0*/ tb__DOT__P874x__DOT__reg_bank;
        CData/*0:0*/ tb__DOT__P874x__DOT__intr_en;
        CData/*0:0*/ tb__DOT__P874x__DOT__intr_en_delay;
        CData/*0:0*/ tb__DOT__P874x__DOT__trupt_en;
        CData/*0:0*/ tb__DOT__P874x__DOT__timer_en;
        CData/*0:0*/ tb__DOT__P874x__DOT__counter_en;
        CData/*0:0*/ tb__DOT__P874x__DOT__ent0;
        CData/*2:0*/ tb__DOT__P874x__DOT__SP;
        CData/*7:0*/ tb__DOT__P874x__DOT__timer;
        CData/*7:0*/ tb__DOT__P874x__DOT__last_timer;
        CData/*7:0*/ tb__DOT__P874x__DOT__timer_next;
        CData/*2:0*/ tb__DOT__P874x__DOT__SP_up;
        CData/*2:0*/ tb__DOT__P874x__DOT__SP_down;
        CData/*7:0*/ tb__DOT__P874x__DOT__PSW;
        CData/*1:0*/ tb__DOT__P874x__DOT__in_intr;
        CData/*7:0*/ tb__DOT__P874x__DOT__RAM_val;
        CData/*7:0*/ tb__DOT__P874x__DOT__instr;
        CData/*2:0*/ tb__DOT__P874x__DOT__reg_idx;
        CData/*0:0*/ tb__DOT__P874x__DOT__special1;
        CData/*0:0*/ tb__DOT__P874x__DOT__special2;
        CData/*0:0*/ tb__DOT__P874x__DOT__movp;
        CData/*0:0*/ tb__DOT__P874x__DOT__movp3;
        CData/*0:0*/ tb__DOT__P874x__DOT__is_long_jump;
        CData/*0:0*/ tb__DOT__P874x__DOT__is_jump;
        CData/*0:0*/ tb__DOT__P874x__DOT__is_call;
        CData/*0:0*/ tb__DOT__P874x__DOT__is_ret;
        CData/*0:0*/ tb__DOT__P874x__DOT__is_djnz;
        CData/*0:0*/ tb__DOT__P874x__DOT__jump_cond_tbl;
        CData/*0:0*/ tb__DOT__P874x__DOT__jump_cond;
        CData/*0:0*/ tb__DOT__P874x__DOT__to_port;
        CData/*0:0*/ tb__DOT__P874x__DOT__is_imm;
        CData/*0:0*/ tb__DOT__P874x__DOT__mem_op;
        CData/*0:0*/ tb__DOT__P874x__DOT__to_accum;
        CData/*0:0*/ tb__DOT__P874x__DOT__to_reg;
        CData/*7:0*/ tb__DOT__P874x__DOT__ALU_in1;
    };
    struct {
        CData/*7:0*/ tb__DOT__P874x__DOT__ALU_in2;
        CData/*7:0*/ tb__DOT__P874x__DOT__or_res;
        CData/*7:0*/ tb__DOT__P874x__DOT__and_res;
        CData/*1:0*/ tb__DOT__P874x__DOT__reg_bank_addr;
        CData/*0:0*/ tb__DOT__P874x__DOT__bus_in;
        CData/*0:0*/ tb__DOT__P874x__DOT__last_t0;
        CData/*1:0*/ tb__DOT__P874x__DOT__state;
        CData/*0:0*/ tb__DOT__P874x__DOT__needs_trupt;
        CData/*0:0*/ tb__DOT__P874x__DOT____VdfgTmp_h93293e77__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ tb__DOT__RAM_wval;
        SData/*15:0*/ tb__DOT__RAM_read;
        SData/*15:0*/ tb__DOT__wmask1;
        SData/*15:0*/ tb__DOT__masked_wval;
        SData/*10:0*/ tb__DOT__P874x__DOT__PC;
        SData/*10:0*/ tb__DOT__P874x__DOT__PC_next;
        SData/*8:0*/ tb__DOT__P874x__DOT__add_res;
        SData/*8:0*/ tb__DOT__P874x__DOT__addc_res;
        SData/*8:0*/ tb__DOT__P874x__DOT__ALU_res;
        SData/*8:0*/ tb__DOT__P874x__DOT__timer_div;
        IData/*31:0*/ tb__DOT__RAM_r;
        IData/*31:0*/ tb__DOT__RAM_oldval;
        IData/*31:0*/ tb__DOT__RAM_newval;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 2048> tb__DOT__ROM;
        VlUnpacked<IData/*31:0*/, 32> tb__DOT__RAM;
        VlUnpacked<CData/*7:0*/, 4> tb__DOT__P874x__DOT__index_regs;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb___024root(Vtb__Syms* symsp, const char* v__name);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
