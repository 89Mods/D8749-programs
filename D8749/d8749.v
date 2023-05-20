`default_nettype none

module P874x(
    input clk,
    input rst,
    input T0,
    input T1,
    input INTb,
    
    output T0_out,
    output T0_oeb,
    
    output reg RDb,
    output reg WRb,
    
    output reg [7:0] DB_out,
    input [7:0] DB_in,
    output reg DB_oeb,
    
    output reg [7:0] P1_out,
    output reg [7:0] P2_out,
    
    input [7:0] P1_in,
    input [7:0] P2_in,
    
    output reg [7:0] P1_dir,
    output reg [7:0] P2_dir,
    
    output [10:0] ROM_addr,
    input [7:0] ROM_val,
    
    output [6:0] RAM_addr,
    input [15:0] RAM_val_r,
    output reg [6:0] RAM_waddr,
    output reg [15:0] RAM_wval,
    output reg [1:0] RAM_wen
);

reg [7:0] A;
reg carry;
reg F0;
reg F1;
reg reg_bank;
reg intr_en;
reg intr_en_delay;
reg trupt_en;
reg timer_en;
reg counter_en;
reg ent0;
reg [2:0] SP;
reg [7:0] timer;
reg [7:0] last_timer;
wire [7:0] timer_next = timer + 1;
reg [10:0] PC;
wire [10:0] PC_next = PC + 1;
wire [2:0] SP_up = SP + 1;
wire [2:0] SP_down = SP - 1;
wire [7:0] PSW = {carry, 1'b0, F0, reg_bank, 1'b1, SP};
reg [1:0] in_intr;

assign T0_out = clk;
assign T0_oeb = ~ent0;

reg [7:0] index_regs [0:3];
wire [7:0] RAM_val = RAM_addr[6:1] == 0 ? index_regs[{reg_bank, RAM_addr[0]}] : RAM_val_r[7:0];

reg [7:0] instr;
wire [2:0] reg_idx = instr[2:0];

wire special1 = instr[3:0] == 5;
wire special2 = instr[3:0] == 7;
wire special3 = instr[3:0] == 3;
wire movp = instr == 8'hA3;
wire movp3 = instr == 8'hE3;

wire is_long_jump = instr[3:0] == 4;
wire is_jump = (instr[3:0] == 2 && instr[4])
                || (instr[3:0] == 6)
                || is_long_jump
                || (instr[7:4] == 14 && instr[3]);
wire is_call = is_long_jump && instr[4];
wire is_ret = special3 && (instr[7:4] == 8 || instr[7:4] == 9);
wire is_djnz = instr[7:4] == 14 && instr[3];

reg jump_cond_tbl;
always @(*) begin
    case(instr[7:4])
        default: jump_cond_tbl = 0;
        2: jump_cond_tbl = ~T0;
        3: jump_cond_tbl = T0;
        4: jump_cond_tbl = ~T1;
        5: jump_cond_tbl = T1;
        7: jump_cond_tbl = F1;
        8: jump_cond_tbl = INTb;
        9: jump_cond_tbl = A != 0;
        11: jump_cond_tbl = F0;
        12: jump_cond_tbl = A == 0;
        14: jump_cond_tbl = ~carry;
        15: jump_cond_tbl = carry;
    endcase
end

wire jump_cond = instr[7:4] == 14 && instr[3] ? (RAM_val != 1) : (instr[3:0] == 2 ? (A[instr[7:5]]) : (instr[3:0] != 6 || jump_cond_tbl));

wire port_col = instr[3:2] == 2'b10;
wire to_port = port_col && (
    instr[7:4] == 3
    || instr[7:4] == 8
    || instr[7:4] == 9
);

wire is_imm = ((instr[3:0] == 4)
                || (instr[3] && instr[7:4] == 14)
                || (instr[3] && instr[7:4] == 11)
                || (port_col && instr[7:4] == 8)
                || (port_col && instr[7:4] == 9)
                || (instr[3:0] == 3 && ~instr[7])
                || (instr == 8'hD3)
                || (instr == 8'hB1)
                || (instr == 8'hB0)
                || is_jump) && in_intr == 0;
                
wire mem_op = instr[3:1] == 0 && instr != 0;
wire wmem = mem_op && (instr[7:5] == 1 || instr[7:5] == 5);
wire rmem = mem_op && !wmem;

wire to_accum = ((instr[3] || instr[3:1] == 0 || instr[3:0] == 3) && instr != 0 && (
            instr[7:4] == 2
            || instr[7:4] == 4
            || instr[7:4] == 5
            || instr[7:4] == 6
            || instr[7:4] == 7
            || instr[7:4] == 13
            || instr[7:4] == 15
)) || instr == 8'h03 || instr == 8'h13;

wire to_reg = (instr[3] || instr[3:1] == 0) && (
    instr[7:4] == 1
    || instr[7:4] == 10
    || instr[7:4] == 11
    || instr[7:4] == 12
    || instr[7:4] == 14
);

wire [7:0] ALU_in1 = to_port && instr[7:4] != 3 ? (instr[1:0] == 1 ? P1_out : (instr[1:0] == 2 ? P2_out : DB_in)) : A;
wire [7:0] ALU_in2 = is_imm && !is_djnz ? ROM_val : RAM_val;
wire [8:0] add_res = ALU_in1 + ALU_in2;
wire [8:0] addc_res = add_res + carry;
wire [7:0] or_res = ALU_in1 | ALU_in2;
wire [7:0] and_res = ALU_in1 & ALU_in2;

reg [8:0] ALU_res;
always @(*) begin
    case(instr[7:4])
        0: ALU_res = instr[3:0] == 3 ? add_res : {carry, ALU_in1 - 1'b1};
        1: ALU_res = instr[3:0] == 3 ? addc_res : {carry, ALU_in2 + 1'b1};
        3: ALU_res = {carry, ALU_in1};
        4: ALU_res = {carry, or_res};
        5: ALU_res = {carry, and_res};
        6: ALU_res = add_res;
        7: ALU_res = addc_res;
        8: ALU_res = {carry, or_res};
        9: ALU_res = {carry, and_res};
        10: ALU_res = {carry, ALU_in1};
        12: ALU_res = {carry, ALU_in2 - 1'b1};
        13: ALU_res = {carry, ALU_in1 ^ ALU_in2};
        14: ALU_res = {carry, ALU_in2 - 1'b1};
        15: ALU_res = {carry, ALU_in2};
        default: ALU_res = {carry, ALU_in2};
    endcase
end

wire [1:0] reg_bank_addr = reg_bank ? 2'b11 : 2'b00;
wire [7:0] reg_ram_addr = {3'b000, reg_bank_addr, instr[2:0]};
wire bus_in = instr == 8'h08 || instr == 8'h88 || instr == 8'h98;

reg last_t0;
reg [8:0] timer_div;

reg [1:0] state;

reg needs_trupt;

localparam FETCH = 0;
localparam HALT = 1;
localparam EXECUTE = 2;
localparam WRITEBACK = 3;

assign ROM_addr = state == FETCH ? PC : (movp ? {PC[10:8], A} : (movp3 ? {3'b011, A} : PC));

always @(posedge clk) begin
    RDb <= 1;
    WRb <= 1;
    RAM_wen <= 0;
    timer_div <= timer_div + 1;
    if(timer_div[8]) begin
        timer_div <= 0;
        if(timer_en) begin
            timer <= timer_next;
        end
    end
    last_t0 <= T0;
    if(T0 && !last_t0 && counter_en) begin
        timer <= timer_next;
    end
    
    last_timer <= timer;
    if(timer == 0 && last_timer == 255) needs_trupt <= 1;

    if(rst) begin
        PC <= 0;
        A <= 0;
        carry <= 0;
        last_t0 <= 0;
        P1_out <= 0;
        P2_out <= 0;
        P1_dir <= 8'hFF;
        P2_dir <= 8'hFF;
        DB_out <= 0;
        F0 <= 0;
        DB_oeb <= 1;
        F1 <= 0;
        ent0 <= 0;
        SP <= 0;
        timer_div <= 0;
        intr_en <= 0;
        trupt_en <= 0;
        reg_bank <= 0;
        timer_en <= 0;
        counter_en <= 0;
        timer <= 0;
        needs_trupt <= 0;
        last_timer <= 0;
        in_intr <= 0;
        intr_en_delay <= 0;
        state <= FETCH;
    end else begin
        if(state == FETCH) begin
            intr_en <= intr_en_delay;
            in_intr <= 0;
            instr <= ROM_val;
            state <= EXECUTE;
            RAM_addr <= ROM_val[3:1] == 0 ? index_regs[{reg_bank, ROM_val[0]}][6:0] : ({2'b00, reg_bank_addr, ROM_val[2:0]});
            if(needs_trupt) begin
                needs_trupt <= 0;
                if(trupt_en) begin
                    in_intr <= 1;
                    instr <= 8'h14;
                end else PC <= PC_next;
            end else if(!needs_trupt && !INTb && intr_en) begin
                intr_en <= 0;
                intr_en_delay <= 0;
                in_intr <= 2;
                instr <= 8'h14;
            end else PC <= PC_next;
        end else if(state == EXECUTE) begin
            if(is_jump) begin
                if(jump_cond) begin
                    PC <= is_long_jump ? {instr[7:5], in_intr == 1 ? 8'h07 : (in_intr == 2 ? 8'h03 : ROM_val)} : {PC[10:8], ROM_val};
                    if(is_call) begin
                        RAM_wen <= 3;
                        RAM_wval <= {PSW[7:4], 1'b0, in_intr != 0 ? PC : PC_next};
                        RAM_waddr <= 8 + {SP, 1'b0};
                        SP <= SP_up;
                    end
                end else begin
                    PC <= PC_next;
                end
            end
            if(instr == 8'hB3) begin
                PC[7:0] <= A;
            end
            
            if(is_ret) begin
                RAM_addr <= 8 + {SP_down, 1'b0};
                SP <= SP_down;
            end
            
            if(special1) begin
                case(instr[7:4])
                    0: intr_en_delay <= 1;
                    1: intr_en_delay <= 0;
                    2: trupt_en <= 1;
                    3: trupt_en <= 0;
                    4: counter_en <= 1;
                    5: timer_en <= 1;
                    6: begin
                        counter_en <= 0;
                        timer_en <= 0;
                    end
                    7: ent0 <= 1;
                    8: F0 <= 0;
                    9: F0 <= ~F0;
                    10: F1 <= 0;
                    11: F1 <= ~F1;
                    12: reg_bank <= 0;
                    13: reg_bank <= 1;
                endcase
            end
            
            if(special2) begin
                case(instr[7:4])
                    0: A <= A - 1;
                    1: A <= A + 1;
                    2: A <= 0;
                    3: A <= ~A;
                    4: A <= {A[3:0], A[7:4]};
                    6: begin
                        carry <= A[0];
                        A <= {carry, A[7:1]};
                    end
                    7: A <= {A[0], A[7:1]};
                    8: P1_dir <= A;
                    9: carry <= 0;
                    10: carry <= ~carry;
                    11: P2_dir <= A;
                    12: A <= PSW;
                    13: begin
                        carry <= A[7];
                        F0 <= A[5];
                        reg_bank <= A[4];
                        SP <= A[2:0];
                    end
                    14: A <= {A[6:0], A[7]};
                    15: begin
                        carry <= A[7];
                        A <= {A[6:0], carry};
                    end
                endcase
            end
            
            if(instr == 8'h42) begin
                A <= timer;
            end
            if(instr == 8'h62) begin
                timer <= A;
            end
            if(bus_in) begin
                RDb <= 0;
            end
            if(instr == 8'h09) begin
                A <= P1_in & P1_dir;
            end
            if(instr == 8'h0A) begin
                A <= P2_in & P2_dir;
            end
            
            
            if(instr == 8'h01) begin
            `ifdef BENCH
                $finish();
            `endif
                state <= HALT;
            end else begin
                state <= WRITEBACK;
            end
        end else if(state == WRITEBACK) begin
            if(to_accum) begin
                A <= ALU_res[7:0];
                carry <= ALU_res[8];
            end
            if(is_imm && !is_jump) begin
                PC <= PC_next;
            end
            if(movp || movp3) begin
                A <= ROM_val;
            end
            if(instr[7:4] == 2 && to_accum && !is_imm) begin
                RAM_waddr <= RAM_addr;
                RAM_wval <= {8'h00, A[7:0]};
                RAM_wen <= 1;
                if(reg_idx == 0) begin
                    index_regs[reg_bank ? 2 : 0] <= A;
                end else if(reg_idx == 1) begin
                    index_regs[reg_bank ? 3 : 1] <= A;
                end
            end
            if(to_reg) begin
                RAM_waddr <= RAM_addr;
                RAM_wval <= {8'h00, ALU_res[7:0]};
                RAM_wen <= 1;
                if(instr[3:1] != 0) begin
                    if(reg_idx == 0) begin
                        index_regs[reg_bank ? 2 : 0] <= ALU_res[7:0];
                    end else if(reg_idx == 1) begin
                        index_regs[reg_bank ? 3 : 1] <= ALU_res[7:0];
                    end
                end
            end
            if(instr == 8'h02) begin
                DB_out <= A;
                WRb <= 0;
                DB_oeb <= 0;
            end
            if(to_port) begin
                case(instr[1:0])
                    0: begin
                        DB_out <= ALU_res[7:0];
                        WRb <= 0;
                        DB_oeb <= 0;
                    end
                    1: begin
                        P1_out <= ALU_res[7:0];
                    end
                    2: begin
                        P2_out <= ALU_res[7:0];
                    end
                endcase
            end
            if(is_ret) begin
                PC <= RAM_val_r[10:0];
                if(instr[0]) begin
                    reg_bank <= RAM_val_r[12];
                    F0 <= RAM_val_r[13];
                    carry <= RAM_val_r[15];
                end
            end
            
            state <= FETCH;
        end
    end
end

endmodule
