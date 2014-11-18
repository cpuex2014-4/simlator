#ifndef CONST_H
#define CONST_H

/* general */
#define PCINIT 0x4000
#define REGSIZE 32
#define FPREGSIZE 32
#define BUFF 65536
#define MEMORYSIZE (1024u*1024u*2u)
#define DATAOFFSET 0xFFFFFF
#define OPNUM	256

/* opcode */
#define JUMP  0x2
#define JAL   0x3
#define BEQ   0x4
#define BNE   0x5
#define ADDIU 0x9
#define ORI   0xD
#define LUI   0xF
#define FPU   0x11
#define LW    0x23
#define SW    0x2B
#define INOUT 0x3F
#define SRCV  0x1C
#define SSND  0x1D

/* function */
#define SLL   0x0
#define SRL   0x2
#define JR    0x8
#define ADDU  0x21
#define SUBU  0x22
#define AND   0x24
#define OR    0x25
#define SLT   0x2A
#define NOP   0x7F

/* fpfunction */
//#define MFC1F 0x0	// Function
//#define MTC1F 0x0	// Function

#define FADDS 0x0	// Function
#define FSUBS 0x1	// Function
#define FMULS 0x2	// Function
#define FDIVS 0x3	// Function
#define SQRT  0x4	// Function
#define MOVSF 0x6	// Function
#define FTOIF 0x24	// Function
#define ITOFF 0x20	// Function

#define CEQ		0x32
#define COLT	0x34
#define COLE	0x36

/* fpmt */
#define MFC1M 0x0	// fMt
#define MTC1M 0x4	// fMt
#define FTOIM 0x10	// fMt
#define ITOFM 0x14	// fMt

/* fpopNum */
#define FMFC 0x0
#define FMTC 0x0
#define BC1F 0x0
#define BC1T 0x0


/* argument */
#define BREAKPOINT "--break"
#define PRINTREG "--reg"
#define SERIALIN "--serialin"
#define HELP "--help"
#define HIDE "--hide"
#define SEQUENTIAL "--sequential"
#define PRINTMEM "--memory"
#define FPUNATIVE "--native"
#define SERIALOUT "--serialout"
#define ARGMAX 20

/* register */
#define REGAT 1
#define REGGP 28
#define REGSP 29
#define REGFP 30
#define REGRA 31


#endif
