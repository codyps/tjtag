#ifndef _FASTCLK_H
#define _FASTCLK_H
// Written by Mutaz Hussain Nov 2017 bluecard82[@]gmail[.]com
// tjtag  modfication to be more fast
// using as clk_low[tms][tdi] (when tclk 0) clk_high[tms][tdi] (when tclk 1) 
// xilinx type cable

unsigned char clk_low[2][2] =
{{0x10,0x11},
{0x14,0x15}
};

unsigned char clk_high[2][2] =
{ {0x12,0x13},
{0x16,0x17}
};

// all time wtrst is 1, using wclk_low[wtms][wtdi] (when wtckl 0) wclk_high[wtms][wtdi] (when wtclk 1) 
// wiggler type cable
unsigned char wclk_low[2][2] =
 { {0x90,0x98},
{0x92,0x9B}
};

unsigned char wclk_high[2][2] =
{ {0x94,0x9C},
{0x96,0x9E}
};

unsigned int imask[32] =
 {0x00000001, 0x00000002, 0x00000004, 0x00000008, 
 0x00000010, 0x00000020, 0x00000040, 0x00000080, 
 0x00000100, 0x00000200, 0x00000400, 0x00000800,
0x00001000, 0x00002000, 0x00004000, 0x00008000, 
0x00010000, 0x00020000, 0x00040000, 0x00080000,
 0x00100000, 0x00200000, 0x00400000, 0x00800000, 
0x01000000, 0x02000000, 0x04000000, 0x08000000
0x10000000, 0x20000000, 0x40000000,0x80000000};


#endif
