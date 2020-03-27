/* Zilog Z80 and derivatives assembler/disassembler support.
   Copyright (C) 2017-2020 Free Software Foundation, Inc.

   This file is part of GAS, the GNU assembler.

   GAS is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   GAS is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with GAS; see the file COPYING3.  If not, write to the Free
   Software Foundation, 51 Franklin Street - Fifth Floor, Boston, MA
   02110-1301, USA.  */

/* WebAssembly opcodes.  Each opcode invokes the WASM_OPCODE macro
   with the following arguments:

   1. Code byte.
   2. Mnemonic.
   3. Input type.
   4. Output type.
   5. Opcode class.
   6. Signedness information.
*/

 /* Z80 instruction opcode have one of following encodings:
   xxyyyzzz
   xxppqzzz
   Some of opcodes (CB, DD, ED, FD) acts as prefixes
 */

typedef enum
{
  EN_XYZ,           /* <oc> */
  EN_XPQZ,          /* <oc> */
  EN_XYZ_I1,        /* <oc> <imm8> */
  EN_XYZ_I2,        /* <oc> <imm16> */
  EN_XPQZ_I2,       /* <oc> <imm16> */
  EN_CB_XYZ,        /* CB <oc> */
  EN_ED_XYZ,        /* ED <oc> */
  EN_ED_XPQZ,       /* ED <oc> */
  EN_ED_XYZ_I1,     /* ED <oc> <imm8> */
  EN_ED_XPQZ_I2,    /* ED <oc> <imm16> */
  EN_XD_XYZ,        /* DD/FD <oc> */
  EN_XD_XPQZ,       /* DD/FD <oc> */
  EN_XD_XYZ_I1,     /* DD/FD <oc> <imm8> */
  EN_XD_XPQZ_I1,    /* DD/FD <oc> <imm8> */
  EN_XD_XYZ_I2,     /* DD/FD <oc> <imm16> */
  EN_XD_XPQZ_I2,    /* DD/FD <oc> <imm16> */
  EN_XD_XYZ_I1_I1,  /* DD/FD <oc> <imm8> <imm8> */
  EN_XD_XPQZ_I1_I1, /* DD/FD <oc> <imm8> <imm8> */
  EN_XD_CB_I1_XYZ,  /* DD/FD CB <imm8> <oc> */
} encoding;

typedef enum
{
  IF_O,  /* whole byte, used for prefixes */
  IF_X,  /* high 2 bits */
  IF_Y,  /* middle 3 bits */
  IF_Z,  /* lowest 3 bits */
  IF_P,  /* highest 2 bits of Y field */
  IF_Q,  /* lowest bit of Y field */
  IF_I1, /* immediate 8-bit value */
  IF_I2  /* immediate 16-bit value */
} ifield;

typedef enum
{
  OP_0,/* fixed value */
  OP_1,
  OP_2,
  OP_3,
  OP_4,
  OP_5,
  OP_6,
  OP_7,
  OP_NONE, /* not an operand */
  OP_MEM,
  OP_A,
  OP_AF,   /* AF */
  OP_AF1,  /* AF' */
  OP_HL,   /* register pair HL */
  OP_mC,   /* (C) */
  OP_mBC,  /* (BC) */
  OP_mDE,  /* (DE) */
  OP_mHL,  /* (HL) */
  OP_mSP,  /* (SP) */
  OP_mII,  /* (II+d) */
  OP_RR,   /* 8 bit general register (A, B, C, D, E, H, L) */
  OP_IR,   /* 8 bit general register (A, B, C, D, E, IxH, IxL) */
  OP_SS,   /* register pair BC, DE, HL, SP */
  OP_IS,   /* register pair BC, DE, IX/IY, SP */
  OP_PP,   /* register pair BC, DE, HL, AF */
  OP_IP,   /* register pair BC, DE, IX/IY, AF */
  OP_NN,   /* immediate 16 */
  OP_AA,   /* immediate 16 address */
  OP_mN,
  OP_BITN, /* bit number of RES/BIT/SET instructions */
  OP_RSTN, /* immediate value of RST */
  OP_DISP, /* JR/DJNZ pcrel offset, 8 bit */
  OP_OFF,  /* IX/IY offset */
  OP_CC,   /* condition for JR */
  OP_CCC,  /* condition for CALL/JP/RET */
} operand;

Z80_OPCODE()
