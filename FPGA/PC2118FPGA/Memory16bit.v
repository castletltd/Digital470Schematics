// Memory16bit.v

module memory16bit_CPUwrite(cpu_rd, cpu_wr, cpu_data, cpu_address, reset, data);

parameter [6:0]     ADDRESS=0;
input wire          cpu_rd;
input wire          cpu_wr;
inout wire [15:0]   cpu_data;
input wire [5:0]    cpu_address;
input wire          reset;
output reg [15:0]   data;

assign cpu_data = (cpu_rd & (cpu_address==ADDRESS)) ? data : 16'bz;

always @ *
begin
    if(~reset)                                  data<=0;
    else if(cpu_wr & (cpu_address==ADDRESS))    data<=cpu_data;
	else data<=data;
end

endmodule



module memory16bit_FPGAwrite(cpu_rd, cpu_data, cpu_address, data);

parameter [6:0]     ADDRESS=0;
input wire          cpu_rd;
output wire [15:0]  cpu_data;
input wire [6:0]    cpu_address;
input wire [15:0]   data;

assign cpu_data = (cpu_rd & (cpu_address==ADDRESS)) ? data : 16'bz;


endmodule
