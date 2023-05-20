`default_nettype wire
`define BENCH

module tb(
    input clk,
    input rst,
    input intb,
    
    output [7:0] P1_out,
    output [7:0] P2_out,
    
    input [7:0] P1_in,
    input [7:0] P2_in
);

wire [7:0] P1_dir;
wire [7:0] P2_dir;
wire [7:0] P1_o;
wire [7:0] P2_o;

assign P1_out = P1_o | P1_dir;
assign P2_out = P2_o | P2_dir;

wire [10:0] ROM_addr;
wire [7:0] ROM_val = ROM[ROM_addr];

reg [7:0] ROM [0:2047];
reg [31:0] RAM [0:31]; //Simulating the sky130 OpenRAM, which is 32-bits wide
wire [6:0] RAM_addr;
wire [31:0] RAM_r = RAM[RAM_addr[6:2]];
wire [1:0] RAM_wen;
wire [15:0] RAM_wval;
wire [6:0] RAM_waddr;

reg [15:0] RAM_read;
always @(*) begin
    case(RAM_addr[1:0])
        0: RAM_read = RAM_r[15:0];
        1: RAM_read = RAM_r[23:8];
        2: RAM_read = RAM_r[31:16];
        3: RAM_read = {8'h00, RAM_r[31:24]};
    endcase
end

//Masked write
wire [31:0] RAM_oldval = RAM[RAM_waddr[6:2]];
reg [31:0] RAM_newval;
wire [15:0] wmask0 = {{8{RAM_wen[1]}}, {8{RAM_wen[0]}}};
wire [15:0] wmask1 = {{8{~RAM_wen[1]}}, {8{~RAM_wen[0]}}};
wire [15:0] masked_wval = wmask0 & RAM_wval;
always @(*) begin
    case(RAM_waddr[1:0])
        0: RAM_newval = {RAM_oldval[31:16], masked_wval | (wmask1 & RAM_oldval[15:0])};
        1: RAM_newval = {RAM_oldval[31:24], masked_wval | (wmask1 & RAM_oldval[23:8]), RAM_oldval[7:0]};
        2: RAM_newval = {masked_wval | (wmask1 & RAM_oldval[31:16]), RAM_oldval[15:0]};
        3: RAM_newval = {masked_wval[7:0] | (wmask1[7:0] & RAM_oldval[31:24]), RAM_oldval[23:0]};
    endcase
end

always @(posedge clk) begin
    if(RAM_wen != 0) begin
        RAM[RAM_waddr[6:2]] <= RAM_newval;
    end
end

/* UART Emulator */

wire RDb;
wire WRb;
wire [7:0] DB_out;
wire DB_oeb;
wire [7:0] BUS = DB_oeb ? 8'h00 : DB_out;
reg U_rst_prev = 0;
wire U_rst = P2_out[0];
wire U_csb = P2_out[1];
wire U_cd = P2_out[2];
reg U_txe;
reg [2:0] tx_timeout;
always @(posedge clk) begin
    if(!rst) begin
        if(U_rst) begin
            if(!U_rst_prev) begin
                $display("P8251 reset!");
            end
            U_rst_prev <= U_rst;
            U_txe <= 1;
            tx_timeout <= 0;
        end else begin
            if(tx_timeout != 0) begin
                tx_timeout <= tx_timeout - 1;
                if(tx_timeout == 1) begin
                    U_txe <= 1;
                end
            end
            if(!WRb) begin
                if(U_cd) begin
                    $display("P8251 command: %b", BUS);
                end else begin
                    $write("%c", BUS);
                    $fflush();
                    U_txe <= 0;
                    tx_timeout <= 3'b111;
                end
            end
        end
    end
end

P874x P874x(
    .clk(clk),
    .rst(rst),
    .INTb(intb),
    
    .P1_out(P1_o),
    .P2_out(P2_o),
    .P1_dir(P1_dir),
    .P2_dir(P2_dir),
    .P1_in(P1_in | ~P1_dir),
    .P2_in(((P2_in & 8'b11110111) | {4'b0000, U_txe, 3'b000}) | ~P2_dir),
    
    .ROM_addr(ROM_addr),
    .ROM_val(ROM_val),
    
    .RAM_addr(RAM_addr),
    .RAM_val_r(RAM_read),
    .RAM_waddr(RAM_waddr),
    .RAM_wval(RAM_wval),
    .RAM_wen(RAM_wen),
    
    .RDb(RDb),
    .WRb(WRb),
    .DB_out(DB_out),
    .DB_oeb(DB_oeb),
    .DB_in(RDb ? 8'h00 : 8'hAA),
    
    .T0(1'b0),
    .T1(1'b1)
);

initial begin
    $readmemh("../test.bin.txt", ROM);
end

initial begin
    //$dumpfile("tb.vcd");
    //$dumpvars();
end

endmodule
