/* arch.h --- Declerations common to anything using the 16c architecture.
   Copyright (c) 2014 Jack Pugmire, Joe Jevnik, and Ted Meyer

   This program is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the Free
   Software Foundation; either version 2 of the License, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
   FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
   more details.

   You should have received a copy of the GNU General Public License along with
   this program; if not, write to the Free Software Foundation, Inc., 51
   Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA. */

#ifndef C16_ARCH_H
#define C16_ARCH_H

// The type of a word on the 16candles machine.
typedef unsigned short c16_word;

// A type of a halfword on the 16candles machine.
typedef unsigned char c16_halfword;

// The type of an instruction in bytecode.
typedef c16_halfword c16_opcode;

// The type of the registers.
typedef c16_word* c16_reg;
typedef c16_halfword* c16_subreg;

typedef c16_halfword c16_opreg;

// Reserved Registers:
#define OP_ipt   0x00  // Instruction pointer.
#define OP_spt   0x01  // Stack pointer.
#define OP_ac1   0x02  // Accumulator register 1.
#define OP_ac2   0x03  // Accumulator register 2.
#define OP_tst   0x04  // Comparison test register.
#define OP_inp   0x05  // Standard input buffer.
#define OP_inp_r 0x10  // The section to read from the input buffer.
#define OP_inp_w 0x11  // The section to write to the input buffer.

// Free Registers:
#define OP_r0    0x06  // Free register 0.
#define OP_r0_f  0x12
#define OP_r0_b  0x13
#define OP_r1    0x07  // Free register 1.
#define OP_r1_f  0x14
#define OP_r1_b  0x15
#define OP_r2    0x08  // Free register 2.
#define OP_r2_f  0x16
#define OP_r2_b  0x17
#define OP_r3    0x09  // Free register 3.
#define OP_r3_f  0x18
#define OP_r3_b  0x19
#define OP_r4    0x0a  // Free register 4.
#define OP_r4_f  0x1a
#define OP_r4_b  0x1b
#define OP_r5    0x0b  // Free register 5.
#define OP_r5_f  0x1c
#define OP_r5_b  0x1d
#define OP_r6    0x0c  // Free register 6.
#define OP_r6_f  0x1e
#define OP_r6_b  0x1f
#define OP_r7    0x0d  // Free register 7.
#define OP_r7_f  0x20
#define OP_r7_b  0x21
#define OP_r8    0x0e  // Free register 8.
#define OP_r8_f  0x22
#define OP_r8_b  0x23
#define OP_r9    0x0f  // Free register 9.
#define OP_r9_f  0x24
#define OP_r9_b  0x25

// Suffixes to add to specialize an opcode.
#define LIT_LIT             0x00
#define LIT_REG             0x01
#define REG_LIT             0x02
#define REG_REG             0x03

#define LIT                 0x00
#define REG                 0x01

// The opcodes that represent instructions in bytecode.
#define OP_AND_             0x00
#define OP_AND_LIT_LIT      0x00
#define OP_AND_LIT_REG      0x01
#define OP_AND_REG_LIT      0x02
#define OP_AND_REG_REG      0x03

#define OP_OR_              0x04
#define OP_OR_LIT_LIT       0x04
#define OP_OR_LIT_REG       0x05
#define OP_OR_REG_LIT       0x06
#define OP_OR_REG_REG       0x07

#define OP_XAND_            0x08
#define OP_XAND_LIT_LIT     0x08
#define OP_XAND_LIT_REG     0x09
#define OP_XAND_REG_LIT     0x0a
#define OP_XAND_REG_REG     0x0b

#define OP_XOR_             0x0c
#define OP_XOR_LIT_LIT      0x0c
#define OP_XOR_LIT_REG      0x0d
#define OP_XOR_REG_LIT      0x0e
#define OP_XOR_REG_REG      0x0f

#define OP_LSHIFT_          0x10
#define OP_LSHIFT_LIT_LIT   0x10
#define OP_LSHIFT_LIT_REG   0x11
#define OP_LSHIFT_REG_LIT   0x12
#define OP_LSHIFT_REG_REG   0x13

#define OP_RSHIFT_          0x14
#define OP_RSHIFT_LIT_LIT   0x14
#define OP_RSHIFT_LIT_REG   0x15
#define OP_RSHIFT_REG_LIT   0x16
#define OP_RSHIFT_REG_REG   0x17

#define OP_ADD_             0x18
#define OP_ADD_LIT_LIT      0x18
#define OP_ADD_LIT_REG      0x19
#define OP_ADD_REG_LIT      0x1a
#define OP_ADD_REG_REG      0x1b

#define OP_SUB_             0x1c
#define OP_SUB_LIT_LIT      0x1c
#define OP_SUB_LIT_REG      0x1d
#define OP_SUB_REG_LIT      0x1e
#define OP_SUB_REG_REG      0x1f

#define OP_MUL_             0x20
#define OP_MUL_LIT_LIT      0x20
#define OP_MUL_LIT_REG      0x21
#define OP_MUL_REG_LIT      0x22
#define OP_MUL_REG_REG      0x23

#define OP_DIV_             0x24
#define OP_DIV_LIT_LIT      0x24
#define OP_DIV_LIT_REG      0x25
#define OP_DIV_REG_LIT      0x26
#define OP_DIV_REG_REG      0x27

#define OP_MOD_             0x28
#define OP_MOD_LIT_LIT      0x28
#define OP_MOD_LIT_REG      0x29
#define OP_MOD_REG_LIT      0x2a
#define OP_MOD_REG_REG      0x2b

#define OP_MIN_             0x2c
#define OP_MIN_LIT_LIT      0x2c
#define OP_MIN_LIT_REG      0x2d
#define OP_MIN_REG_LIT      0x2e
#define OP_MIN_REG_REG      0x2f

#define OP_MAX_             0x30
#define OP_MAX_LIT_LIT      0x30
#define OP_MAX_LIT_REG      0x31
#define OP_MAX_REG_LIT      0x32
#define OP_MAX_REG_REG      0x33

#define OP_GTE_             0x34
#define OP_GTE_LIT_LIT      0x34
#define OP_GTE_LIT_REG      0x35
#define OP_GTE_REG_LIT      0x36
#define OP_GTE_REG_REG      0x37

#define OP_LTE_             0x38
#define OP_LTE_LIT_LIT      0x38
#define OP_LTE_LIT_REG      0x39
#define OP_LTE_REG_LIT      0x3a
#define OP_LTE_REG_REG      0x3b

#define OP_EQ_              0x3c
#define OP_EQ_LIT_LIT       0x3c
#define OP_EQ_LIT_REG       0x3d
#define OP_EQ_REG_LIT       0x3e
#define OP_EQ_REG_REG       0x3f

#define OP_NEQ_             0x40
#define OP_NEQ_LIT_LIT      0x40
#define OP_NEQ_LIT_REG      0x41
#define OP_NEQ_REG_LIT      0x42
#define OP_NEQ_REG_REG      0x43

#define OP_GT_              0x44
#define OP_GT_LIT_LIT       0x44
#define OP_GT_LIT_REG       0x45
#define OP_GT_REG_LIT       0x46
#define OP_GT_REG_REG       0x47

#define OP_LT_              0x48
#define OP_LT_LIT_LIT       0x48
#define OP_LT_LIT_REG       0x49
#define OP_LT_REG_LIT       0x4a
#define OP_LT_REG_REG       0x4b

#define OP_INV_             0x4c
#define OP_INV_LIT          0x4c
#define OP_INV_REG          0x4d

#define OP_INC_             0x4e
#define OP_INC_LIT          0x4e
#define OP_INC_REG          0x4f

#define OP_DEC_             0x50
#define OP_DEC_LIT          0x50
#define OP_DEC_REG          0x51

#define OP_SET_             0x52
#define OP_SET_LIT          0x52
#define OP_SET_REG          0x53

#define OP_PUSH_            0x54
#define OP_PUSH_LIT         0x54
#define OP_PUSH_REG         0x55

#define OP_JMP              0x56

#define OP_JMPT             0x58

#define OP_JMPF             0x5a

#define OP_LABEL            0x5b

#define OP_WRITE_           0x5c
#define OP_WRITE_LIT        0x5c
#define OP_WRITE_REG        0x5d

#define OP_MSET_            0x5e
#define OP_MSET_LIT_MEMADDR 0x5e
#define OP_MSET_REG_MEMADDR 0x5f
#define OP_MSET_LIT_MEMREG  0x60
#define OP_MSET_REG_MEMREG  0x61
#define OP_MSET_MEMADDR     0x62
#define OP_MSET_MEMREG      0x63

#define OP_SWAP             0x64

#define OP_POP              0x65

#define OP_PEEK             0x66

#define OP_FLUSH            0x67

#define OP_HALT             0x68

#define OP_READ             0x69

#define OP_NOP              0x6a

// Code to send to signal EOF
#define OP_TERM             0xff

// Opcode to check for when parsing expresion to see if a commnad is invalid.
#define OP_INVALID          0xfe

#endif /* C16_ARCH_H */
