/* DO NOT EDIT!  -*- buffer-read-only: t -*- vi:set ro:  */
/* Instruction opcode table for z80.

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

#include "sysdep.h"
#include "ansidecl.h"
#include "bfd.h"
#include "symcat.h"
#include "z80-desc.h"
#include "z80-opc.h"
#include "libiberty.h"

/* The hash functions are recorded here to help keep assembler code out of
   the disassembler and vice versa.  */

static int asm_hash_insn_p        (const CGEN_INSN *);
static unsigned int asm_hash_insn (const char *);
static int dis_hash_insn_p        (const CGEN_INSN *);
static unsigned int dis_hash_insn (const char *, CGEN_INSN_INT);

/* Instruction formats.  */

#define F(f) & z80_cgen_ifld_table[Z80_##f]
static const CGEN_IFMT ifmt_empty ATTRIBUTE_UNUSED = {
  0, 0, 0x0, { { 0 } }
};

static const CGEN_IFMT ifmt_nop ATTRIBUTE_UNUSED = {
  8, 8, 0xff, { { F (F_X) }, { F (F_Y) }, { F (F_Z) }, { 0 } }
};

static const CGEN_IFMT ifmt_djnz_d ATTRIBUTE_UNUSED = {
  8, 16, 0xff, { { F (F_X) }, { F (F_DISP8) }, { F (F_Y) }, { F (F_Z) }, { 0 } }
};

static const CGEN_IFMT ifmt_jr_cc_d ATTRIBUTE_UNUSED = {
  8, 16, 0xe7, { { F (F_X) }, { F (F_DISP8) }, { F (F_R) }, { F (F_S) }, { F (F_Z) }, { 0 } }
};

static const CGEN_IFMT ifmt_ld_ss_nn ATTRIBUTE_UNUSED = {
  8, 24, 0xcf, { { F (F_U16) }, { F (F_X) }, { F (F_P) }, { F (F_Q) }, { F (F_Z) }, { 0 } }
};

static const CGEN_IFMT ifmt_add_hl_ss ATTRIBUTE_UNUSED = {
  8, 8, 0xcf, { { F (F_X) }, { F (F_P) }, { F (F_Q) }, { F (F_Z) }, { 0 } }
};

static const CGEN_IFMT ifmt_ld_mbc_a ATTRIBUTE_UNUSED = {
  8, 8, 0xff, { { F (F_X) }, { F (F_P) }, { F (F_Q) }, { F (F_Z) }, { 0 } }
};

static const CGEN_IFMT ifmt_ld_mnn_hl ATTRIBUTE_UNUSED = {
  8, 24, 0xff, { { F (F_ADDR16) }, { F (F_X) }, { F (F_P) }, { F (F_Q) }, { F (F_Z) }, { 0 } }
};

static const CGEN_IFMT ifmt_inc_r ATTRIBUTE_UNUSED = {
  8, 8, 0xc7, { { F (F_X) }, { F (F_Y) }, { F (F_Z) }, { 0 } }
};

static const CGEN_IFMT ifmt_ld_mhl_n ATTRIBUTE_UNUSED = {
  8, 16, 0xff, { { F (F_X) }, { F (F_U8) }, { F (F_Y) }, { F (F_Z) }, { 0 } }
};

static const CGEN_IFMT ifmt_ld_r_n ATTRIBUTE_UNUSED = {
  8, 16, 0xc7, { { F (F_X) }, { F (F_U8) }, { F (F_Y) }, { F (F_Z) }, { 0 } }
};

static const CGEN_IFMT ifmt_ld_mhl_r ATTRIBUTE_UNUSED = {
  8, 8, 0xf8, { { F (F_X) }, { F (F_Y) }, { F (F_Z) }, { 0 } }
};

static const CGEN_IFMT ifmt_ld_r_r ATTRIBUTE_UNUSED = {
  8, 8, 0xc0, { { F (F_X) }, { F (F_Y) }, { F (F_Z) }, { 0 } }
};

static const CGEN_IFMT ifmt_ret_cc ATTRIBUTE_UNUSED = {
  8, 8, 0xc7, { { F (F_X) }, { F (F_Y) }, { F (F_Z) }, { 0 } }
};

static const CGEN_IFMT ifmt_pop_qq ATTRIBUTE_UNUSED = {
  8, 8, 0xcf, { { F (F_X) }, { F (F_P) }, { F (F_Q) }, { F (F_Z) }, { 0 } }
};

static const CGEN_IFMT ifmt_jp_cc_nn ATTRIBUTE_UNUSED = {
  8, 24, 0xc7, { { F (F_ADDR16) }, { F (F_X) }, { F (F_Y) }, { F (F_Z) }, { 0 } }
};

static const CGEN_IFMT ifmt_jp_nn ATTRIBUTE_UNUSED = {
  8, 24, 0xff, { { F (F_ADDR16) }, { F (F_X) }, { F (F_Y) }, { F (F_Z) }, { 0 } }
};

static const CGEN_IFMT ifmt_rst_n ATTRIBUTE_UNUSED = {
  8, 8, 0xc7, { { F (F_X) }, { F (F_RST) }, { F (F_Z) }, { 0 } }
};

static const CGEN_IFMT ifmt_retn ATTRIBUTE_UNUSED = {
  8, 16, 0xff, { { F (F_0) }, { F (F_1) }, { 0 } }
};

#undef F

#define A(a) (1 << CGEN_INSN_##a)
#define OPERAND(op) Z80_OPERAND_##op
#define MNEM CGEN_SYNTAX_MNEMONIC /* syntax value for mnemonic */
#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))

/* The instruction table.  */

static const CGEN_OPCODE z80_cgen_insn_opcode_table[MAX_INSNS] =
{
  /* Special null first entry.
     A `num' value of zero is thus invalid.
     Also, the special `invalid' insn resides here.  */
  { { 0, 0, 0, 0 }, {{0}}, 0, {0}},
/* nop */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_nop, { 0x0 }
  },
/* ex af,af` */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'a', 'f', ',', 'a', 'f', '`', 0 } },
    & ifmt_nop, { 0x8 }
  },
/* djnz $ee */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (EE), 0 } },
    & ifmt_djnz_d, { 0x10 }
  },
/* jr $ee */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (EE), 0 } },
    & ifmt_djnz_d, { 0x18 }
  },
/* jr $oc,$ee */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (OC), ',', OP (EE), 0 } },
    & ifmt_jr_cc_d, { 0x20 }
  },
/* ld $ss,$nn */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (SS), ',', OP (NN), 0 } },
    & ifmt_ld_ss_nn, { 0x1 }
  },
/* add hl,$ss */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'h', 'l', ',', OP (SS), 0 } },
    & ifmt_add_hl_ss, { 0x9 }
  },
/* ld (bc),a */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', 'b', 'c', ')', ',', 'a', 0 } },
    & ifmt_ld_mbc_a, { 0x2 }
  },
/* ld (de),a */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', 'd', 'e', ')', ',', 'a', 0 } },
    & ifmt_ld_mbc_a, { 0x12 }
  },
/* ld a,(bc) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'a', ',', '(', 'b', 'c', ')', 0 } },
    & ifmt_ld_mbc_a, { 0xa }
  },
/* ld a,(de) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'a', ',', '(', 'd', 'e', ')', 0 } },
    & ifmt_ld_mbc_a, { 0x1a }
  },
/* ld ($aa),hl */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', OP (AA), ')', ',', 'h', 'l', 0 } },
    & ifmt_ld_mnn_hl, { 0x22 }
  },
/* ld ($aa),a */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', OP (AA), ')', ',', 'a', 0 } },
    & ifmt_ld_mnn_hl, { 0x32 }
  },
/* ld hl,($aa) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'h', 'l', ',', '(', OP (AA), ')', 0 } },
    & ifmt_ld_mnn_hl, { 0x2a }
  },
/* ld a,($aa) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'a', ',', '(', OP (AA), ')', 0 } },
    & ifmt_ld_mnn_hl, { 0x3a }
  },
/* inc $ss */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (SS), 0 } },
    & ifmt_add_hl_ss, { 0x3 }
  },
/* dec $ss */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (SS), 0 } },
    & ifmt_add_hl_ss, { 0xb }
  },
/* inc (hl) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', 'h', 'l', ')', 0 } },
    & ifmt_nop, { 0x34 }
  },
/* inc $rd */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), 0 } },
    & ifmt_inc_r, { 0x4 }
  },
/* dec (hl) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', 'h', 'l', ')', 0 } },
    & ifmt_nop, { 0x35 }
  },
/* dec $rd */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), 0 } },
    & ifmt_inc_r, { 0x5 }
  },
/* ld (hl),$on */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', 'h', 'l', ')', ',', OP (ON), 0 } },
    & ifmt_ld_mhl_n, { 0x36 }
  },
/* ld $rd,$on */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (ON), 0 } },
    & ifmt_ld_r_n, { 0x6 }
  },
/* rlca */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_nop, { 0x7 }
  },
/* rrca */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_nop, { 0xf }
  },
/* rla */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_nop, { 0x17 }
  },
/* rra */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_nop, { 0x1f }
  },
/* daa */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_nop, { 0x27 }
  },
/* cpl */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_nop, { 0x2f }
  },
/* scf */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_nop, { 0x37 }
  },
/* ccf */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_nop, { 0x3f }
  },
/* halt */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_nop, { 0x76 }
  },
/* ld $rd,(hl) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', '(', 'h', 'l', ')', 0 } },
    & ifmt_inc_r, { 0x46 }
  },
/* ld (hl),$rs */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', 'h', 'l', ')', ',', OP (RS), 0 } },
    & ifmt_ld_mhl_r, { 0x70 }
  },
/* ld $rd,$rs */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS), 0 } },
    & ifmt_ld_r_r, { 0x40 }
  },
/* add a,(hl) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'a', ',', '(', 'h', 'l', ')', 0 } },
    & ifmt_nop, { 0x86 }
  },
/* add a,$rs */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'a', ',', OP (RS), 0 } },
    & ifmt_ld_mhl_r, { 0x80 }
  },
/* add a,$on */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'a', ',', OP (ON), 0 } },
    & ifmt_ld_mhl_n, { 0xc6 }
  },
/* adc a,(hl) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'a', ',', '(', 'h', 'l', ')', 0 } },
    & ifmt_nop, { 0x8e }
  },
/* adc a,$rs */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'a', ',', OP (RS), 0 } },
    & ifmt_ld_mhl_r, { 0x88 }
  },
/* adc a,$on */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'a', ',', OP (ON), 0 } },
    & ifmt_ld_mhl_n, { 0xce }
  },
/* sub (hl) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', 'h', 'l', ')', 0 } },
    & ifmt_nop, { 0x96 }
  },
/* sub $rs */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS), 0 } },
    & ifmt_ld_mhl_r, { 0x90 }
  },
/* sub $on */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ON), 0 } },
    & ifmt_ld_mhl_n, { 0xd6 }
  },
/* sbc a,(hl) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'a', ',', '(', 'h', 'l', ')', 0 } },
    & ifmt_nop, { 0x9e }
  },
/* sbc a,$rs */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'a', ',', OP (RS), 0 } },
    & ifmt_ld_mhl_r, { 0x98 }
  },
/* sbc a,$on */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'a', ',', OP (ON), 0 } },
    & ifmt_ld_mhl_n, { 0xde }
  },
/* and (hl) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', 'h', 'l', ')', 0 } },
    & ifmt_nop, { 0xa6 }
  },
/* and $rs */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS), 0 } },
    & ifmt_ld_mhl_r, { 0xa0 }
  },
/* and $on */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ON), 0 } },
    & ifmt_ld_mhl_n, { 0xe6 }
  },
/* xor (hl) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', 'h', 'l', ')', 0 } },
    & ifmt_nop, { 0xae }
  },
/* xor $rs */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS), 0 } },
    & ifmt_ld_mhl_r, { 0xa8 }
  },
/* xor $on */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ON), 0 } },
    & ifmt_ld_mhl_n, { 0xee }
  },
/* or (hl) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', 'h', 'l', ')', 0 } },
    & ifmt_nop, { 0xb6 }
  },
/* or $rs */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS), 0 } },
    & ifmt_ld_mhl_r, { 0xb0 }
  },
/* or $on */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ON), 0 } },
    & ifmt_ld_mhl_n, { 0xf6 }
  },
/* cp (hl) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', 'h', 'l', ')', 0 } },
    & ifmt_nop, { 0xbe }
  },
/* cp $rs */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS), 0 } },
    & ifmt_ld_mhl_r, { 0xb8 }
  },
/* cp $on */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ON), 0 } },
    & ifmt_ld_mhl_n, { 0xfe }
  },
/* ret $cc */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (CC), 0 } },
    & ifmt_ret_cc, { 0xc0 }
  },
/* pop $qq */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (QQ), 0 } },
    & ifmt_pop_qq, { 0xc1 }
  },
/* ret */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_ld_mbc_a, { 0xc9 }
  },
/* exx */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_ld_mbc_a, { 0xd9 }
  },
/* jp (hl) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', 'h', 'l', ')', 0 } },
    & ifmt_ld_mbc_a, { 0xe9 }
  },
/* ld sp,hl */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 's', 'p', ',', 'h', 'l', 0 } },
    & ifmt_ld_mbc_a, { 0xf9 }
  },
/* jp $cc,$aa */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (CC), ',', OP (AA), 0 } },
    & ifmt_jp_cc_nn, { 0xc2 }
  },
/* jp $aa */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (AA), 0 } },
    & ifmt_jp_nn, { 0xc3 }
  },
/* out ($on),a */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', '(', OP (ON), ')', ',', 'a', 0 } },
    & ifmt_ld_mhl_n, { 0xd3 }
  },
/* in a,($on) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'a', ',', '(', OP (ON), ')', 0 } },
    & ifmt_ld_mhl_n, { 0xdb }
  },
/* ex sp,hl */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 's', 'p', ',', 'h', 'l', 0 } },
    & ifmt_nop, { 0xe3 }
  },
/* ex de,hl */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'd', 'e', ',', 'h', 'l', 0 } },
    & ifmt_nop, { 0xeb }
  },
/* di */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_nop, { 0xf3 }
  },
/* ei */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_nop, { 0xfb }
  },
/* call $cc,$aa */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (CC), ',', OP (AA), 0 } },
    & ifmt_jp_cc_nn, { 0xc4 }
  },
/* push $qq */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (QQ), 0 } },
    & ifmt_pop_qq, { 0xc5 }
  },
/* call $aa */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (AA), 0 } },
    & ifmt_ld_mnn_hl, { 0xcd }
  },
/* rst $rn */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RN), 0 } },
    & ifmt_rst_n, { 0xc7 }
  },
/* retn */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_retn, { 0x132 }
  },
/* reti */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_retn, { 0x13a }
  },
};

#undef A
#undef OPERAND
#undef MNEM
#undef OP

/* Formats for ALIAS macro-insns.  */

#define F(f) & z80_cgen_ifld_table[Z80_##f]
#undef F

/* Each non-simple macro entry points to an array of expansion possibilities.  */

#define A(a) (1 << CGEN_INSN_##a)
#define OPERAND(op) Z80_OPERAND_##op
#define MNEM CGEN_SYNTAX_MNEMONIC /* syntax value for mnemonic */
#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))

/* The macro instruction table.  */

static const CGEN_IBASE z80_cgen_macro_insn_table[] =
{
};

/* The macro instruction opcode table.  */

static const CGEN_OPCODE z80_cgen_macro_insn_opcode_table[] =
{
};

#undef A
#undef OPERAND
#undef MNEM
#undef OP

#ifndef CGEN_ASM_HASH_P
#define CGEN_ASM_HASH_P(insn) 1
#endif

#ifndef CGEN_DIS_HASH_P
#define CGEN_DIS_HASH_P(insn) 1
#endif

/* Return non-zero if INSN is to be added to the hash table.
   Targets are free to override CGEN_{ASM,DIS}_HASH_P in the .opc file.  */

static int
asm_hash_insn_p (const CGEN_INSN *insn ATTRIBUTE_UNUSED)
{
  return CGEN_ASM_HASH_P (insn);
}

static int
dis_hash_insn_p (const CGEN_INSN *insn)
{
  /* If building the hash table and the NO-DIS attribute is present,
     ignore.  */
  if (CGEN_INSN_ATTR_VALUE (insn, CGEN_INSN_NO_DIS))
    return 0;
  return CGEN_DIS_HASH_P (insn);
}

#ifndef CGEN_ASM_HASH
#define CGEN_ASM_HASH_SIZE 127
#ifdef CGEN_MNEMONIC_OPERANDS
#define CGEN_ASM_HASH(mnem) (*(unsigned char *) (mnem) % CGEN_ASM_HASH_SIZE)
#else
#define CGEN_ASM_HASH(mnem) (*(unsigned char *) (mnem) % CGEN_ASM_HASH_SIZE) /*FIXME*/
#endif
#endif

/* It doesn't make much sense to provide a default here,
   but while this is under development we do.
   BUFFER is a pointer to the bytes of the insn, target order.
   VALUE is the first base_insn_bitsize bits as an int in host order.  */

#ifndef CGEN_DIS_HASH
#define CGEN_DIS_HASH_SIZE 256
#define CGEN_DIS_HASH(buf, value) (*(unsigned char *) (buf))
#endif

/* The result is the hash value of the insn.
   Targets are free to override CGEN_{ASM,DIS}_HASH in the .opc file.  */

static unsigned int
asm_hash_insn (const char *mnem)
{
  return CGEN_ASM_HASH (mnem);
}

/* BUF is a pointer to the bytes of the insn, target order.
   VALUE is the first base_insn_bitsize bits as an int in host order.  */

static unsigned int
dis_hash_insn (const char *buf ATTRIBUTE_UNUSED,
		     CGEN_INSN_INT value ATTRIBUTE_UNUSED)
{
  return CGEN_DIS_HASH (buf, value);
}

/* Set the recorded length of the insn in the CGEN_FIELDS struct.  */

static void
set_fields_bitsize (CGEN_FIELDS *fields, int size)
{
  CGEN_FIELDS_BITSIZE (fields) = size;
}

/* Function to call before using the operand instance table.
   This plugs the opcode entries and macro instructions into the cpu table.  */

void
z80_cgen_init_opcode_table (CGEN_CPU_DESC cd)
{
  int i;
  int num_macros = (sizeof (z80_cgen_macro_insn_table) /
		    sizeof (z80_cgen_macro_insn_table[0]));
  const CGEN_IBASE *ib = & z80_cgen_macro_insn_table[0];
  const CGEN_OPCODE *oc = & z80_cgen_macro_insn_opcode_table[0];
  CGEN_INSN *insns = xmalloc (num_macros * sizeof (CGEN_INSN));

  /* This test has been added to avoid a warning generated
     if memset is called with a third argument of value zero.  */
  if (num_macros >= 1)
    memset (insns, 0, num_macros * sizeof (CGEN_INSN));
  for (i = 0; i < num_macros; ++i)
    {
      insns[i].base = &ib[i];
      insns[i].opcode = &oc[i];
      z80_cgen_build_insn_regex (& insns[i]);
    }
  cd->macro_insn_table.init_entries = insns;
  cd->macro_insn_table.entry_size = sizeof (CGEN_IBASE);
  cd->macro_insn_table.num_init_entries = num_macros;

  oc = & z80_cgen_insn_opcode_table[0];
  insns = (CGEN_INSN *) cd->insn_table.init_entries;
  for (i = 0; i < MAX_INSNS; ++i)
    {
      insns[i].opcode = &oc[i];
      z80_cgen_build_insn_regex (& insns[i]);
    }

  cd->sizeof_fields = sizeof (CGEN_FIELDS);
  cd->set_fields_bitsize = set_fields_bitsize;

  cd->asm_hash_p = asm_hash_insn_p;
  cd->asm_hash = asm_hash_insn;
  cd->asm_hash_size = CGEN_ASM_HASH_SIZE;

  cd->dis_hash_p = dis_hash_insn_p;
  cd->dis_hash = dis_hash_insn;
  cd->dis_hash_size = CGEN_DIS_HASH_SIZE;
}
