/* DO NOT EDIT!  -*- buffer-read-only: t -*- vi:set ro:  */
/* Instruction opcode header for z80.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright (C) 1996-2020 Free Software Foundation, Inc.

This file is part of the GNU Binutils and/or GDB, the GNU debugger.

   This file is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.

*/

#ifndef Z80_OPC_H
#define Z80_OPC_H

#ifdef __cplusplus
extern "C" {
#endif

/* -- opc.h */

/* Allows reason codes to be output when assembler errors occur.  */
#define CGEN_VERBOSE_ASSEMBLER_ERRORS
#define CGEN_MAX_EXTRA_OPCODE_OPERANDS 3

/* Override disassembly hashing - there are variable bits in the top
   byte of these instructions.  */
#define CGEN_DIS_HASH_SIZE 8
#define CGEN_DIS_HASH(buf,value) (((* (unsigned char*) (buf)) >> 6) % CGEN_DIS_HASH_SIZE)

/* -- asm.c */
/* Enum declaration for z80 instruction types.  */
typedef enum cgen_insn_type {
  Z80_INSN_INVALID, Z80_INSN_NOP, Z80_INSN_EX_AF_AF, Z80_INSN_DJNZ_D
 , Z80_INSN_JR_D, Z80_INSN_JR_CC_D, Z80_INSN_LD_SS_NN, Z80_INSN_ADD_HL_SS
 , Z80_INSN_LD_MBC_A, Z80_INSN_LD_MDE_A, Z80_INSN_LD_A_MBC, Z80_INSN_LD_A_MDE
 , Z80_INSN_LD_MNN_HL, Z80_INSN_LD_MNN_A, Z80_INSN_LD_HL_MNN, Z80_INSN_LD_A_MNN
 , Z80_INSN_INC_SS, Z80_INSN_DEC_SS, Z80_INSN_INC_MHL, Z80_INSN_INC_R
 , Z80_INSN_DEC_MHL, Z80_INSN_DEC_R, Z80_INSN_LD_MHL_N, Z80_INSN_LD_R_N
 , Z80_INSN_RLCA, Z80_INSN_RRCA, Z80_INSN_RLA, Z80_INSN_RRA
 , Z80_INSN_DAA, Z80_INSN_CPL, Z80_INSN_SCF, Z80_INSN_CCF
 , Z80_INSN_HALT, Z80_INSN_LD_R_MHL, Z80_INSN_LD_MHL_R, Z80_INSN_LD_R_R
 , Z80_INSN_ADD_A_MHL, Z80_INSN_ADD_A_R, Z80_INSN_ADD_A_N, Z80_INSN_ADC_A_MHL
 , Z80_INSN_ADC_A_R, Z80_INSN_ADC_A_N, Z80_INSN_SUB_A_MHL, Z80_INSN_SUB_A_R
 , Z80_INSN_SUB_A_N, Z80_INSN_SBC_A_MHL, Z80_INSN_SBC_A_R, Z80_INSN_SBC_A_N
 , Z80_INSN_AND_A_MHL, Z80_INSN_AND_A_R, Z80_INSN_AND_A_N, Z80_INSN_XOR_A_MHL
 , Z80_INSN_XOR_A_R, Z80_INSN_XOR_A_N, Z80_INSN_OR_A_MHL, Z80_INSN_OR_A_R
 , Z80_INSN_OR_A_N, Z80_INSN_CP_A_MHL, Z80_INSN_CP_A_R, Z80_INSN_CP_A_N
 , Z80_INSN_RET_CC, Z80_INSN_POP_QQ, Z80_INSN_RET, Z80_INSN_EXX
 , Z80_INSN_JP_HL, Z80_INSN_LD_SP_HL, Z80_INSN_JP_CC_NN, Z80_INSN_JP_NN
 , Z80_INSN_OUT_MN_A, Z80_INSN_IN_A_MN, Z80_INSN_EX_MSP_HL, Z80_INSN_EX_DE_HL
 , Z80_INSN_DI, Z80_INSN_EI, Z80_INSN_CALL_CC_NN, Z80_INSN_PUSH_QQ
 , Z80_INSN_CALL_NN, Z80_INSN_RST_N, Z80_INSN_RETN, Z80_INSN_RETI
} CGEN_INSN_TYPE;

/* Index of `invalid' insn place holder.  */
#define CGEN_INSN_INVALID Z80_INSN_INVALID

/* Total number of insns in table.  */
#define MAX_INSNS ((int) Z80_INSN_RETI + 1)

/* This struct records data prior to insertion or after extraction.  */
struct cgen_fields
{
  int length;
  long f_nil;
  long f_anyof;
  long f_0;
  long f_x;
  long f_y;
  long f_z;
  long f_p;
  long f_q;
  long f_r;
  long f_s;
  long f_i8;
  long f_disp8;
  long f_u8;
  long f_u16;
  long f_addr16;
  long f_rst;
  long f_1;
  long f_1x;
  long f_1y;
  long f_1z;
  long f_1p;
  long f_1q;
  long f_1r;
  long f_1s;
  long f_1i8;
  long f_1u8;
  long f_1u16;
  long f_1addr16;
  long f_3;
  long f_3x;
  long f_3y;
  long f_3z;
};

#define CGEN_INIT_PARSE(od) \
{\
}
#define CGEN_INIT_INSERT(od) \
{\
}
#define CGEN_INIT_EXTRACT(od) \
{\
}
#define CGEN_INIT_PRINT(od) \
{\
}


   #ifdef __cplusplus
   }
   #endif

#endif /* Z80_OPC_H */
