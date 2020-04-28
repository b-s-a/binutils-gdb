/* DO NOT EDIT!  -*- buffer-read-only: t -*- vi:set ro:  */
/* CPU data for z80.

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
#include <stdio.h>
#include <stdarg.h>
#include "ansidecl.h"
#include "bfd.h"
#include "symcat.h"
#include "z80-desc.h"
#include "z80-opc.h"
#include "opintl.h"
#include "libiberty.h"
#include "xregex.h"

/* Attributes.  */

static const CGEN_ATTR_ENTRY bool_attr[] =
{
  { "#f", 0 },
  { "#t", 1 },
  { 0, 0 }
};

static const CGEN_ATTR_ENTRY MACH_attr[] ATTRIBUTE_UNUSED =
{
  { "base", MACH_BASE },
  { "z80", MACH_Z80 },
  { "max", MACH_MAX },
  { 0, 0 }
};

static const CGEN_ATTR_ENTRY ISA_attr[] ATTRIBUTE_UNUSED =
{
  { "z80", ISA_Z80 },
  { "max", ISA_MAX },
  { 0, 0 }
};

const CGEN_ATTR_TABLE z80_cgen_ifield_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "PCREL-ADDR", &bool_attr[0], &bool_attr[0] },
  { "ABS-ADDR", &bool_attr[0], &bool_attr[0] },
  { "RESERVED", &bool_attr[0], &bool_attr[0] },
  { "SIGN-OPT", &bool_attr[0], &bool_attr[0] },
  { "SIGNED", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE z80_cgen_hardware_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "CACHE-ADDR", &bool_attr[0], &bool_attr[0] },
  { "PC", &bool_attr[0], &bool_attr[0] },
  { "PROFILE", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE z80_cgen_operand_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "PCREL-ADDR", &bool_attr[0], &bool_attr[0] },
  { "ABS-ADDR", &bool_attr[0], &bool_attr[0] },
  { "SIGN-OPT", &bool_attr[0], &bool_attr[0] },
  { "SIGNED", &bool_attr[0], &bool_attr[0] },
  { "NEGATIVE", &bool_attr[0], &bool_attr[0] },
  { "RELAX", &bool_attr[0], &bool_attr[0] },
  { "SEM-ONLY", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE z80_cgen_insn_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "ALIAS", &bool_attr[0], &bool_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "UNCOND-CTI", &bool_attr[0], &bool_attr[0] },
  { "COND-CTI", &bool_attr[0], &bool_attr[0] },
  { "SKIP-CTI", &bool_attr[0], &bool_attr[0] },
  { "DELAY-SLOT", &bool_attr[0], &bool_attr[0] },
  { "RELAXABLE", &bool_attr[0], &bool_attr[0] },
  { "RELAXED", &bool_attr[0], &bool_attr[0] },
  { "NO-DIS", &bool_attr[0], &bool_attr[0] },
  { "PBB", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

/* Instruction set variants.  */

static const CGEN_ISA z80_cgen_isa_table[] = {
  { "z80", 8, 8, 8, 24 },
  { 0, 0, 0, 0, 0 }
};

/* Machine variants.  */

static const CGEN_MACH z80_cgen_mach_table[] = {
  { "z80", "bfd_mach_z80", MACH_Z80, 0 },
  { 0, 0, 0, 0 }
};

static CGEN_KEYWORD_ENTRY z80_cgen_opval_h_mr_entries[] =
{
  { "bc", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "de", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "hl", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "af", 3, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD z80_cgen_opval_h_mr =
{
  & z80_cgen_opval_h_mr_entries[0],
  4,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY z80_cgen_opval_h_ar_entries[] =
{
  { "bc'", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "de'", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "hl'", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "af'", 7, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD z80_cgen_opval_h_ar =
{
  & z80_cgen_opval_h_ar_entries[0],
  4,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY z80_cgen_opval_h_xy_entries[] =
{
  { "ix", 34, {0, {{{0, 0}}}}, 0, 0 },
  { "iy", 50, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD z80_cgen_opval_h_xy =
{
  & z80_cgen_opval_h_xy_entries[0],
  2,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY z80_cgen_opval_h_sp_entries[] =
{
  { "sp", 19, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD z80_cgen_opval_h_sp =
{
  & z80_cgen_opval_h_sp_entries[0],
  1,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY z80_cgen_opval_h_rr_entries[] =
{
  { "r", 1, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD z80_cgen_opval_h_rr =
{
  & z80_cgen_opval_h_rr_entries[0],
  1,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY z80_cgen_opval_h_ri_entries[] =
{
  { "i", 1, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD z80_cgen_opval_h_ri =
{
  & z80_cgen_opval_h_ri_entries[0],
  1,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY z80_cgen_opval_h_mr8_entries[] =
{
  { "b", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "c", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "d", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "e", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "h", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "l", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "a", 7, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD z80_cgen_opval_h_mr8 =
{
  & z80_cgen_opval_h_mr8_entries[0],
  7,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY z80_cgen_opval_h_xy8_entries[] =
{
  { "ixh", 36, {0, {{{0, 0}}}}, 0, 0 },
  { "ixl", 37, {0, {{{0, 0}}}}, 0, 0 },
  { "iyh", 52, {0, {{{0, 0}}}}, 0, 0 },
  { "iyl", 53, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD z80_cgen_opval_h_xy8 =
{
  & z80_cgen_opval_h_xy8_entries[0],
  4,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY z80_cgen_opval_h_ss_entries[] =
{
  { "bc", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "de", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "hl", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "sp", 3, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD z80_cgen_opval_h_ss =
{
  & z80_cgen_opval_h_ss_entries[0],
  4,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY z80_cgen_opval_h_qq_entries[] =
{
  { "bc", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "de", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "hl", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "af", 3, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD z80_cgen_opval_h_qq =
{
  & z80_cgen_opval_h_qq_entries[0],
  4,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY z80_cgen_opval_h_cc_entries[] =
{
  { "nc", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "c", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "nz", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "z", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "po", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "pe", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "p", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "m", 7, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD z80_cgen_opval_h_cc =
{
  & z80_cgen_opval_h_cc_entries[0],
  8,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY z80_cgen_opval_h_rot_entries[] =
{
  { "rlc", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "rrc", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "rl", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "rr", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "sla", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "sra", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "sll", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "srl", 7, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD z80_cgen_opval_h_rot =
{
  & z80_cgen_opval_h_rot_entries[0],
  8,
  0, 0, 0, 0, ""
};


/* The hardware table.  */

#define A(a) (1 << CGEN_HW_##a)

const CGEN_HW_ENTRY z80_cgen_hw_table[] =
{
  { "h-memory", HW_H_MEMORY, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-sint", HW_H_SINT, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-uint", HW_H_UINT, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-addr", HW_H_ADDR, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-iaddr", HW_H_IADDR, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-pc", HW_H_PC, CGEN_ASM_NONE, 0, { 0|A(PC), { { { (1<<MACH_BASE), 0 } } } } },
  { "h-mr", HW_H_MR, CGEN_ASM_KEYWORD, (PTR) & z80_cgen_opval_h_mr, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-ar", HW_H_AR, CGEN_ASM_KEYWORD, (PTR) & z80_cgen_opval_h_ar, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-xy", HW_H_XY, CGEN_ASM_KEYWORD, (PTR) & z80_cgen_opval_h_xy, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-sp", HW_H_SP, CGEN_ASM_KEYWORD, (PTR) & z80_cgen_opval_h_sp, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-rr", HW_H_RR, CGEN_ASM_KEYWORD, (PTR) & z80_cgen_opval_h_rr, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-ri", HW_H_RI, CGEN_ASM_KEYWORD, (PTR) & z80_cgen_opval_h_ri, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-iff1", HW_H_IFF1, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-iff2", HW_H_IFF2, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-mr8", HW_H_MR8, CGEN_ASM_KEYWORD, (PTR) & z80_cgen_opval_h_mr8, { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } } },
  { "h-xy8", HW_H_XY8, CGEN_ASM_KEYWORD, (PTR) & z80_cgen_opval_h_xy8, { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } } },
  { "h-ss", HW_H_SS, CGEN_ASM_KEYWORD, (PTR) & z80_cgen_opval_h_ss, { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } } },
  { "h-qq", HW_H_QQ, CGEN_ASM_KEYWORD, (PTR) & z80_cgen_opval_h_qq, { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } } },
  { "h-cc", HW_H_CC, CGEN_ASM_KEYWORD, (PTR) & z80_cgen_opval_h_cc, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-rot", HW_H_ROT, CGEN_ASM_KEYWORD, (PTR) & z80_cgen_opval_h_rot, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { 0, 0, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } }
};

#undef A


/* The instruction field table.  */

#define A(a) (1 << CGEN_IFLD_##a)

const CGEN_IFLD z80_cgen_ifld_table[] =
{
  { Z80_F_NIL, "f-nil", 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { Z80_F_ANYOF, "f-anyof", 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { Z80_F_0, "f-0", 0, 8, 7, 8, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_X, "f-x", 0, 8, 7, 2, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_Y, "f-y", 0, 8, 5, 3, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_Z, "f-z", 0, 8, 2, 3, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_P, "f-p", 0, 8, 5, 2, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_Q, "f-q", 0, 8, 3, 1, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_R, "f-r", 0, 8, 5, 1, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_S, "f-s", 0, 8, 4, 2, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_I8, "f-i8", 8, 8, 7, 8, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_DISP8, "f-disp8", 8, 8, 7, 8, { 0|A(PCREL_ADDR), { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_U8, "f-u8", 8, 8, 7, 8, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_U16, "f-u16", 8, 16, 15, 16, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_ADDR16, "f-addr16", 8, 16, 15, 16, { 0|A(ABS_ADDR), { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_RST, "f-rst", 0, 8, 5, 3, { 0|A(ABS_ADDR), { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_1, "f-1", 8, 8, 7, 8, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_1X, "f-1x", 8, 8, 7, 2, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_1Y, "f-1y", 8, 8, 5, 3, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_1Z, "f-1z", 8, 8, 2, 3, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_1P, "f-1p", 8, 8, 5, 2, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_1Q, "f-1q", 8, 8, 3, 1, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_1R, "f-1r", 8, 8, 5, 1, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_1S, "f-1s", 8, 8, 4, 2, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_1I8, "f-1i8", 16, 8, 7, 8, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_1U8, "f-1u8", 16, 8, 7, 8, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_1U16, "f-1u16", 16, 16, 15, 16, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_1ADDR16, "f-1addr16", 16, 16, 15, 16, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_3, "f-3", 8, 8, 7, 8, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_3X, "f-3x", 16, 8, 7, 2, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_3Y, "f-3y", 16, 8, 7, 3, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { Z80_F_3Z, "f-3z", 16, 8, 2, 3, { 0, { { { (1<<MACH_Z80), 0 } } } }  },
  { 0, 0, 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } }
};

#undef A



/* multi ifield declarations */



/* multi ifield definitions */


/* The operand table.  */

#define A(a) (1 << CGEN_OPERAND_##a)
#define OPERAND(op) Z80_OPERAND_##op

const CGEN_OPERAND z80_cgen_operand_table[] =
{
/* pc: program counter */
  { "pc", Z80_OPERAND_PC, HW_H_PC, 0, 0,
    { 0, { (const PTR) &z80_cgen_ifld_table[Z80_F_NIL] } },
    { 0|A(SEM_ONLY), { { { (1<<MACH_BASE), 0 } } } }  },
/* od: signed immediate 8-bit after first word */
  { "od", Z80_OPERAND_OD, HW_H_SINT, 7, 8,
    { 0, { (const PTR) &z80_cgen_ifld_table[Z80_F_I8] } },
    { 0, { { { (1<<MACH_Z80), 0 } } } }  },
/* ee: signed pcrel immediate 8-bit after first word */
  { "ee", Z80_OPERAND_EE, HW_H_ADDR, 7, 8,
    { 0, { (const PTR) &z80_cgen_ifld_table[Z80_F_DISP8] } },
    { 0|A(PCREL_ADDR), { { { (1<<MACH_Z80), 0 } } } }  },
/* on: unsigned immediate 8-bit after first word */
  { "on", Z80_OPERAND_ON, HW_H_UINT, 7, 8,
    { 0, { (const PTR) &z80_cgen_ifld_table[Z80_F_U8] } },
    { 0, { { { (1<<MACH_Z80), 0 } } } }  },
/* nn: unsigned immediate 16-bit after first word */
  { "nn", Z80_OPERAND_NN, HW_H_UINT, 15, 16,
    { 0, { (const PTR) &z80_cgen_ifld_table[Z80_F_U16] } },
    { 0, { { { (1<<MACH_Z80), 0 } } } }  },
/* aa: 16-bit address after first word */
  { "aa", Z80_OPERAND_AA, HW_H_ADDR, 15, 16,
    { 0, { (const PTR) &z80_cgen_ifld_table[Z80_F_ADDR16] } },
    { 0|A(ABS_ADDR), { { { (1<<MACH_Z80), 0 } } } }  },
/* oc: reduced set of conditions */
  { "oc", Z80_OPERAND_OC, HW_H_CC, 4, 2,
    { 0, { (const PTR) &z80_cgen_ifld_table[Z80_F_S] } },
    { 0, { { { (1<<MACH_Z80), 0 } } } }  },
/* cc: set of conditions */
  { "cc", Z80_OPERAND_CC, HW_H_CC, 5, 3,
    { 0, { (const PTR) &z80_cgen_ifld_table[Z80_F_Y] } },
    { 0, { { { (1<<MACH_Z80), 0 } } } }  },
/* ss: register pair BC, DE, HL, SP */
  { "ss", Z80_OPERAND_SS, HW_H_SS, 5, 2,
    { 0, { (const PTR) &z80_cgen_ifld_table[Z80_F_P] } },
    { 0, { { { (1<<MACH_Z80), 0 } } } }  },
/* qq: register pair BC, DE, HL, AF */
  { "qq", Z80_OPERAND_QQ, HW_H_QQ, 5, 2,
    { 0, { (const PTR) &z80_cgen_ifld_table[Z80_F_P] } },
    { 0, { { { (1<<MACH_Z80), 0 } } } }  },
/* rd: register B, C, D, E, H, L, A */
  { "rd", Z80_OPERAND_RD, HW_H_MR8, 5, 3,
    { 0, { (const PTR) &z80_cgen_ifld_table[Z80_F_Y] } },
    { 0, { { { (1<<MACH_Z80), 0 } } } }  },
/* rs: register B, C, D, E, H, L, A */
  { "rs", Z80_OPERAND_RS, HW_H_MR8, 2, 3,
    { 0, { (const PTR) &z80_cgen_ifld_table[Z80_F_Z] } },
    { 0, { { { (1<<MACH_Z80), 0 } } } }  },
/* rn: RST immediate */
  { "rn", Z80_OPERAND_RN, HW_H_ADDR, 5, 3,
    { 0, { (const PTR) &z80_cgen_ifld_table[Z80_F_RST] } },
    { 0|A(ABS_ADDR), { { { (1<<MACH_Z80), 0 } } } }  },
/* sentinel */
  { 0, 0, 0, 0, 0,
    { 0, { (const PTR) 0 } },
    { 0, { { { (1<<MACH_BASE), 0 } } } } }
};

#undef A


/* The instruction table.  */

#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))
#define A(a) (1 << CGEN_INSN_##a)

static const CGEN_IBASE z80_cgen_insn_table[MAX_INSNS] =
{
  /* Special null first entry.
     A `num' value of zero is thus invalid.
     Also, the special `invalid' insn resides here.  */
  { 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
/* nop */
  {
    Z80_INSN_NOP, "nop", "nop", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ex af,af` */
  {
    Z80_INSN_EX_AF_AF, "ex-af-af", "ex", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* djnz $ee */
  {
    Z80_INSN_DJNZ_D, "djnz-d", "djnz", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* jr $ee */
  {
    Z80_INSN_JR_D, "jr-d", "jr", 16,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* jr $oc,$ee */
  {
    Z80_INSN_JR_CC_D, "jr-cc-d", "jr", 16,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld $ss,$nn */
  {
    Z80_INSN_LD_SS_NN, "ld-ss-nn", "ld", 24,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add hl,$ss */
  {
    Z80_INSN_ADD_HL_SS, "add-hl-ss", "add", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld (bc),a */
  {
    Z80_INSN_LD_MBC_A, "ld-mbc-a", "ld", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld (de),a */
  {
    Z80_INSN_LD_MDE_A, "ld-mde-a", "ld", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld a,(bc) */
  {
    Z80_INSN_LD_A_MBC, "ld-a-mbc", "ld", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld a,(de) */
  {
    Z80_INSN_LD_A_MDE, "ld-a-mde", "ld", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld ($aa),hl */
  {
    Z80_INSN_LD_MNN_HL, "ld-mnn-hl", "ld", 24,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld ($aa),a */
  {
    Z80_INSN_LD_MNN_A, "ld-mnn-a", "ld", 24,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld hl,($aa) */
  {
    Z80_INSN_LD_HL_MNN, "ld-hl-mnn", "ld", 24,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld a,($aa) */
  {
    Z80_INSN_LD_A_MNN, "ld-a-mnn", "ld", 24,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* inc $ss */
  {
    Z80_INSN_INC_SS, "inc-ss", "inc", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* dec $ss */
  {
    Z80_INSN_DEC_SS, "dec-ss", "dec", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* inc (hl) */
  {
    Z80_INSN_INC_MHL, "inc-mhl", "inc", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* inc $rd */
  {
    Z80_INSN_INC_R, "inc-r", "inc", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* dec (hl) */
  {
    Z80_INSN_DEC_MHL, "dec-mhl", "dec", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* dec $rd */
  {
    Z80_INSN_DEC_R, "dec-r", "dec", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld (hl),$on */
  {
    Z80_INSN_LD_MHL_N, "ld-mhl-n", "ld", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld $rd,$on */
  {
    Z80_INSN_LD_R_N, "ld-r-n", "ld", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* rlca */
  {
    Z80_INSN_RLCA, "rlca", "rlca", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* rrca */
  {
    Z80_INSN_RRCA, "rrca", "rrca", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* rla */
  {
    Z80_INSN_RLA, "rla", "rla", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* rra */
  {
    Z80_INSN_RRA, "rra", "rra", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* daa */
  {
    Z80_INSN_DAA, "daa", "daa", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* cpl */
  {
    Z80_INSN_CPL, "cpl", "cpl", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* scf */
  {
    Z80_INSN_SCF, "scf", "scf", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ccf */
  {
    Z80_INSN_CCF, "ccf", "ccf", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* halt */
  {
    Z80_INSN_HALT, "halt", "halt", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld $rd,(hl) */
  {
    Z80_INSN_LD_R_MHL, "ld-r-mhl", "ld", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld (hl),$rs */
  {
    Z80_INSN_LD_MHL_R, "ld-mhl-r", "ld", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld $rd,$rs */
  {
    Z80_INSN_LD_R_R, "ld-r-r", "ld", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add a,(hl) */
  {
    Z80_INSN_ADD_A_MHL, "add-a-mhl", "add", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add a,$rs */
  {
    Z80_INSN_ADD_A_R, "add-a-r", "add", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add a,$on */
  {
    Z80_INSN_ADD_A_N, "add-a-n", "add", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* adc a,(hl) */
  {
    Z80_INSN_ADC_A_MHL, "adc-a-mhl", "adc", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* adc a,$rs */
  {
    Z80_INSN_ADC_A_R, "adc-a-r", "adc", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* adc a,$on */
  {
    Z80_INSN_ADC_A_N, "adc-a-n", "adc", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub (hl) */
  {
    Z80_INSN_SUB_A_MHL, "sub-a-mhl", "sub", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub $rs */
  {
    Z80_INSN_SUB_A_R, "sub-a-r", "sub", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub $on */
  {
    Z80_INSN_SUB_A_N, "sub-a-n", "sub", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sbc a,(hl) */
  {
    Z80_INSN_SBC_A_MHL, "sbc-a-mhl", "sbc", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sbc a,$rs */
  {
    Z80_INSN_SBC_A_R, "sbc-a-r", "sbc", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sbc a,$on */
  {
    Z80_INSN_SBC_A_N, "sbc-a-n", "sbc", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* and (hl) */
  {
    Z80_INSN_AND_A_MHL, "and-a-mhl", "and", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* and $rs */
  {
    Z80_INSN_AND_A_R, "and-a-r", "and", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* and $on */
  {
    Z80_INSN_AND_A_N, "and-a-n", "and", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* xor (hl) */
  {
    Z80_INSN_XOR_A_MHL, "xor-a-mhl", "xor", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* xor $rs */
  {
    Z80_INSN_XOR_A_R, "xor-a-r", "xor", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* xor $on */
  {
    Z80_INSN_XOR_A_N, "xor-a-n", "xor", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* or (hl) */
  {
    Z80_INSN_OR_A_MHL, "or-a-mhl", "or", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* or $rs */
  {
    Z80_INSN_OR_A_R, "or-a-r", "or", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* or $on */
  {
    Z80_INSN_OR_A_N, "or-a-n", "or", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* cp (hl) */
  {
    Z80_INSN_CP_A_MHL, "cp-a-mhl", "cp", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* cp $rs */
  {
    Z80_INSN_CP_A_R, "cp-a-r", "cp", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* cp $on */
  {
    Z80_INSN_CP_A_N, "cp-a-n", "cp", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ret $cc */
  {
    Z80_INSN_RET_CC, "ret-cc", "ret", 8,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* pop $qq */
  {
    Z80_INSN_POP_QQ, "pop-qq", "pop", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ret */
  {
    Z80_INSN_RET, "ret", "ret", 8,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* exx */
  {
    Z80_INSN_EXX, "exx", "exx", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* jp (hl) */
  {
    Z80_INSN_JP_HL, "jp-hl", "jp", 8,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld sp,hl */
  {
    Z80_INSN_LD_SP_HL, "ld-sp-hl", "ld", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* jp $cc,$aa */
  {
    Z80_INSN_JP_CC_NN, "jp-cc-nn", "jp", 24,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* jp $aa */
  {
    Z80_INSN_JP_NN, "jp-nn", "jp", 24,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* out ($on),a */
  {
    Z80_INSN_OUT_MN_A, "out-mn-a", "out", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* in a,($on) */
  {
    Z80_INSN_IN_A_MN, "in-a-mn", "in", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ex sp,hl */
  {
    Z80_INSN_EX_MSP_HL, "ex-msp-hl", "ex", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ex de,hl */
  {
    Z80_INSN_EX_DE_HL, "ex-de-hl", "ex", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* di */
  {
    Z80_INSN_DI, "di", "di", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ei */
  {
    Z80_INSN_EI, "ei", "ei", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* call $cc,$aa */
  {
    Z80_INSN_CALL_CC_NN, "call-cc-nn", "call", 24,
    { 0|A(COND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* push $qq */
  {
    Z80_INSN_PUSH_QQ, "push-qq", "push", 8,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* call $aa */
  {
    Z80_INSN_CALL_NN, "call-nn", "call", 24,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* rst $rn */
  {
    Z80_INSN_RST_N, "rst-n", "rst", 8,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* retn */
  {
    Z80_INSN_RETN, "retn", "retn", 16,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
/* reti */
  {
    Z80_INSN_RETI, "reti", "reti", 16,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_BASE), 0 } } } }
  },
};

#undef OP
#undef A

/* Initialize anything needed to be done once, before any cpu_open call.  */

static void
init_tables (void)
{
}

#ifndef opcodes_error_handler
#define opcodes_error_handler(...) \
  fprintf (stderr, __VA_ARGS__); fputc ('\n', stderr)
#endif

static const CGEN_MACH * lookup_mach_via_bfd_name (const CGEN_MACH *, const char *);
static void build_hw_table      (CGEN_CPU_TABLE *);
static void build_ifield_table  (CGEN_CPU_TABLE *);
static void build_operand_table (CGEN_CPU_TABLE *);
static void build_insn_table    (CGEN_CPU_TABLE *);
static void z80_cgen_rebuild_tables (CGEN_CPU_TABLE *);

/* Subroutine of z80_cgen_cpu_open to look up a mach via its bfd name.  */

static const CGEN_MACH *
lookup_mach_via_bfd_name (const CGEN_MACH *table, const char *name)
{
  while (table->name)
    {
      if (strcmp (name, table->bfd_name) == 0)
	return table;
      ++table;
    }
  return NULL;
}

/* Subroutine of z80_cgen_cpu_open to build the hardware table.  */

static void
build_hw_table (CGEN_CPU_TABLE *cd)
{
  int i;
  int machs = cd->machs;
  const CGEN_HW_ENTRY *init = & z80_cgen_hw_table[0];
  /* MAX_HW is only an upper bound on the number of selected entries.
     However each entry is indexed by it's enum so there can be holes in
     the table.  */
  const CGEN_HW_ENTRY **selected =
    (const CGEN_HW_ENTRY **) xmalloc (MAX_HW * sizeof (CGEN_HW_ENTRY *));

  cd->hw_table.init_entries = init;
  cd->hw_table.entry_size = sizeof (CGEN_HW_ENTRY);
  memset (selected, 0, MAX_HW * sizeof (CGEN_HW_ENTRY *));
  /* ??? For now we just use machs to determine which ones we want.  */
  for (i = 0; init[i].name != NULL; ++i)
    if (CGEN_HW_ATTR_VALUE (&init[i], CGEN_HW_MACH)
	& machs)
      selected[init[i].type] = &init[i];
  cd->hw_table.entries = selected;
  cd->hw_table.num_entries = MAX_HW;
}

/* Subroutine of z80_cgen_cpu_open to build the hardware table.  */

static void
build_ifield_table (CGEN_CPU_TABLE *cd)
{
  cd->ifld_table = & z80_cgen_ifld_table[0];
}

/* Subroutine of z80_cgen_cpu_open to build the hardware table.  */

static void
build_operand_table (CGEN_CPU_TABLE *cd)
{
  int i;
  int machs = cd->machs;
  const CGEN_OPERAND *init = & z80_cgen_operand_table[0];
  /* MAX_OPERANDS is only an upper bound on the number of selected entries.
     However each entry is indexed by it's enum so there can be holes in
     the table.  */
  const CGEN_OPERAND **selected = xmalloc (MAX_OPERANDS * sizeof (* selected));

  cd->operand_table.init_entries = init;
  cd->operand_table.entry_size = sizeof (CGEN_OPERAND);
  memset (selected, 0, MAX_OPERANDS * sizeof (CGEN_OPERAND *));
  /* ??? For now we just use mach to determine which ones we want.  */
  for (i = 0; init[i].name != NULL; ++i)
    if (CGEN_OPERAND_ATTR_VALUE (&init[i], CGEN_OPERAND_MACH)
	& machs)
      selected[init[i].type] = &init[i];
  cd->operand_table.entries = selected;
  cd->operand_table.num_entries = MAX_OPERANDS;
}

/* Subroutine of z80_cgen_cpu_open to build the hardware table.
   ??? This could leave out insns not supported by the specified mach/isa,
   but that would cause errors like "foo only supported by bar" to become
   "unknown insn", so for now we include all insns and require the app to
   do the checking later.
   ??? On the other hand, parsing of such insns may require their hardware or
   operand elements to be in the table [which they mightn't be].  */

static void
build_insn_table (CGEN_CPU_TABLE *cd)
{
  int i;
  const CGEN_IBASE *ib = & z80_cgen_insn_table[0];
  CGEN_INSN *insns = xmalloc (MAX_INSNS * sizeof (CGEN_INSN));

  memset (insns, 0, MAX_INSNS * sizeof (CGEN_INSN));
  for (i = 0; i < MAX_INSNS; ++i)
    insns[i].base = &ib[i];
  cd->insn_table.init_entries = insns;
  cd->insn_table.entry_size = sizeof (CGEN_IBASE);
  cd->insn_table.num_init_entries = MAX_INSNS;
}

/* Subroutine of z80_cgen_cpu_open to rebuild the tables.  */

static void
z80_cgen_rebuild_tables (CGEN_CPU_TABLE *cd)
{
  int i;
  CGEN_BITSET *isas = cd->isas;
  unsigned int machs = cd->machs;

  cd->int_insn_p = CGEN_INT_INSN_P;

  /* Data derived from the isa spec.  */
#define UNSET (CGEN_SIZE_UNKNOWN + 1)
  cd->default_insn_bitsize = UNSET;
  cd->base_insn_bitsize = UNSET;
  cd->min_insn_bitsize = 65535; /* Some ridiculously big number.  */
  cd->max_insn_bitsize = 0;
  for (i = 0; i < MAX_ISAS; ++i)
    if (cgen_bitset_contains (isas, i))
      {
	const CGEN_ISA *isa = & z80_cgen_isa_table[i];

	/* Default insn sizes of all selected isas must be
	   equal or we set the result to 0, meaning "unknown".  */
	if (cd->default_insn_bitsize == UNSET)
	  cd->default_insn_bitsize = isa->default_insn_bitsize;
	else if (isa->default_insn_bitsize == cd->default_insn_bitsize)
	  ; /* This is ok.  */
	else
	  cd->default_insn_bitsize = CGEN_SIZE_UNKNOWN;

	/* Base insn sizes of all selected isas must be equal
	   or we set the result to 0, meaning "unknown".  */
	if (cd->base_insn_bitsize == UNSET)
	  cd->base_insn_bitsize = isa->base_insn_bitsize;
	else if (isa->base_insn_bitsize == cd->base_insn_bitsize)
	  ; /* This is ok.  */
	else
	  cd->base_insn_bitsize = CGEN_SIZE_UNKNOWN;

	/* Set min,max insn sizes.  */
	if (isa->min_insn_bitsize < cd->min_insn_bitsize)
	  cd->min_insn_bitsize = isa->min_insn_bitsize;
	if (isa->max_insn_bitsize > cd->max_insn_bitsize)
	  cd->max_insn_bitsize = isa->max_insn_bitsize;
      }

  /* Data derived from the mach spec.  */
  for (i = 0; i < MAX_MACHS; ++i)
    if (((1 << i) & machs) != 0)
      {
	const CGEN_MACH *mach = & z80_cgen_mach_table[i];

	if (mach->insn_chunk_bitsize != 0)
	{
	  if (cd->insn_chunk_bitsize != 0 && cd->insn_chunk_bitsize != mach->insn_chunk_bitsize)
	    {
	      opcodes_error_handler
		(/* xgettext:c-format */
		 _("internal error: z80_cgen_rebuild_tables: "
		   "conflicting insn-chunk-bitsize values: `%d' vs. `%d'"),
		 cd->insn_chunk_bitsize, mach->insn_chunk_bitsize);
	      abort ();
	    }

 	  cd->insn_chunk_bitsize = mach->insn_chunk_bitsize;
	}
      }

  /* Determine which hw elements are used by MACH.  */
  build_hw_table (cd);

  /* Build the ifield table.  */
  build_ifield_table (cd);

  /* Determine which operands are used by MACH/ISA.  */
  build_operand_table (cd);

  /* Build the instruction table.  */
  build_insn_table (cd);
}

/* Initialize a cpu table and return a descriptor.
   It's much like opening a file, and must be the first function called.
   The arguments are a set of (type/value) pairs, terminated with
   CGEN_CPU_OPEN_END.

   Currently supported values:
   CGEN_CPU_OPEN_ISAS:    bitmap of values in enum isa_attr
   CGEN_CPU_OPEN_MACHS:   bitmap of values in enum mach_attr
   CGEN_CPU_OPEN_BFDMACH: specify 1 mach using bfd name
   CGEN_CPU_OPEN_ENDIAN:  specify endian choice
   CGEN_CPU_OPEN_END:     terminates arguments

   ??? Simultaneous multiple isas might not make sense, but it's not (yet)
   precluded.  */

CGEN_CPU_DESC
z80_cgen_cpu_open (enum cgen_cpu_open_arg arg_type, ...)
{
  CGEN_CPU_TABLE *cd = (CGEN_CPU_TABLE *) xmalloc (sizeof (CGEN_CPU_TABLE));
  static int init_p;
  CGEN_BITSET *isas = 0;  /* 0 = "unspecified" */
  unsigned int machs = 0; /* 0 = "unspecified" */
  enum cgen_endian endian = CGEN_ENDIAN_UNKNOWN;
  va_list ap;

  if (! init_p)
    {
      init_tables ();
      init_p = 1;
    }

  memset (cd, 0, sizeof (*cd));

  va_start (ap, arg_type);
  while (arg_type != CGEN_CPU_OPEN_END)
    {
      switch (arg_type)
	{
	case CGEN_CPU_OPEN_ISAS :
	  isas = va_arg (ap, CGEN_BITSET *);
	  break;
	case CGEN_CPU_OPEN_MACHS :
	  machs = va_arg (ap, unsigned int);
	  break;
	case CGEN_CPU_OPEN_BFDMACH :
	  {
	    const char *name = va_arg (ap, const char *);
	    const CGEN_MACH *mach =
	      lookup_mach_via_bfd_name (z80_cgen_mach_table, name);

	    if (mach != NULL)
	      machs |= 1 << mach->num;
	    break;
	  }
	case CGEN_CPU_OPEN_ENDIAN :
	  endian = va_arg (ap, enum cgen_endian);
	  break;
	default :
	  opcodes_error_handler
	    (/* xgettext:c-format */
	     _("internal error: z80_cgen_cpu_open: "
	       "unsupported argument `%d'"),
	     arg_type);
	  abort (); /* ??? return NULL? */
	}
      arg_type = va_arg (ap, enum cgen_cpu_open_arg);
    }
  va_end (ap);

  /* Mach unspecified means "all".  */
  if (machs == 0)
    machs = (1 << MAX_MACHS) - 1;
  /* Base mach is always selected.  */
  machs |= 1;
  if (endian == CGEN_ENDIAN_UNKNOWN)
    {
      /* ??? If target has only one, could have a default.  */
      opcodes_error_handler
	(/* xgettext:c-format */
	 _("internal error: z80_cgen_cpu_open: no endianness specified"));
      abort ();
    }

  cd->isas = cgen_bitset_copy (isas);
  cd->machs = machs;
  cd->endian = endian;
  /* FIXME: for the sparc case we can determine insn-endianness statically.
     The worry here is where both data and insn endian can be independently
     chosen, in which case this function will need another argument.
     Actually, will want to allow for more arguments in the future anyway.  */
  cd->insn_endian = endian;

  /* Table (re)builder.  */
  cd->rebuild_tables = z80_cgen_rebuild_tables;
  z80_cgen_rebuild_tables (cd);

  /* Default to not allowing signed overflow.  */
  cd->signed_overflow_ok_p = 0;

  return (CGEN_CPU_DESC) cd;
}

/* Cover fn to z80_cgen_cpu_open to handle the simple case of 1 isa, 1 mach.
   MACH_NAME is the bfd name of the mach.  */

CGEN_CPU_DESC
z80_cgen_cpu_open_1 (const char *mach_name, enum cgen_endian endian)
{
  return z80_cgen_cpu_open (CGEN_CPU_OPEN_BFDMACH, mach_name,
			       CGEN_CPU_OPEN_ENDIAN, endian,
			       CGEN_CPU_OPEN_END);
}

/* Close a cpu table.
   ??? This can live in a machine independent file, but there's currently
   no place to put this file (there's no libcgen).  libopcodes is the wrong
   place as some simulator ports use this but they don't use libopcodes.  */

void
z80_cgen_cpu_close (CGEN_CPU_DESC cd)
{
  unsigned int i;
  const CGEN_INSN *insns;

  if (cd->macro_insn_table.init_entries)
    {
      insns = cd->macro_insn_table.init_entries;
      for (i = 0; i < cd->macro_insn_table.num_init_entries; ++i, ++insns)
	if (CGEN_INSN_RX ((insns)))
	  regfree (CGEN_INSN_RX (insns));
    }

  if (cd->insn_table.init_entries)
    {
      insns = cd->insn_table.init_entries;
      for (i = 0; i < cd->insn_table.num_init_entries; ++i, ++insns)
	if (CGEN_INSN_RX (insns))
	  regfree (CGEN_INSN_RX (insns));
    }

  if (cd->macro_insn_table.init_entries)
    free ((CGEN_INSN *) cd->macro_insn_table.init_entries);

  if (cd->insn_table.init_entries)
    free ((CGEN_INSN *) cd->insn_table.init_entries);

  if (cd->hw_table.entries)
    free ((CGEN_HW_ENTRY *) cd->hw_table.entries);

  if (cd->operand_table.entries)
    free ((CGEN_HW_ENTRY *) cd->operand_table.entries);

  free (cd);
}

