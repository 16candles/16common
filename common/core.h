/* core.h --- Core functions to aid in the use of 16c.
   Copyright (c) 2014 Joe Jevnik

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

#ifndef C16_CORE_H
#define C16_CORE_H

#include <stdbool.h>

#include "arch.h"

// return: true iff this word is a subreg opcode.
bool is_subreg(c16_word);

// return: true iff this opcode is a binary operator.
bool is_bin_op(c16_word);

// return: true iff this opcode is a comparison operator.
bool is_cmp_op(c16_word);

// return: true iff this opcode is a unary operator.
bool is_un_op(c16_word);

// return: true iff this opcode is a jump operator.
bool is_jmp_op(c16_word);

#endif
