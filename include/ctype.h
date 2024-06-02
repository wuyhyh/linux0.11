/******************************************************************************
 *
 * Name: ctype.h - 定义字符类型和转换的函数
 * Created on 2024/06/04
 * Copyright (C) 2022 - 2024, wyh.
 *
 *****************************************************************************/

#ifndef LINUX0_11_CTYPE_H
#define LINUX0_11_CTYPE_H

#define_U 	0x01 		// upper
#define_L 	0x02 		// lower
#define_D 	0x04		// digit
#define_C 	0x08 		// cntrl
#define_P 	0x10 		// punct
#define_S 	0x20 		// white space (空白字符)
#define_X 	0x40 		// hex digit
#define_SP 	0x80 		// hard space (空格)

extern unsigned char _ctype[]; 		// 字符特性数组
extern char _ctmp; 					// 临时字符变量（在lib/ctype.c中定义）

#define isalnum(c) ((_ctype + 1)[c] & (_U | _L | _D))
#define isalpha(c) ((_ctype + 1)[c] & (_U | _L))
#define iscntrl(c) ((_ctype + 1)[c] & (_C))
#define isdigit(c) ((_ctype + 1)[c] & (_D))
#define isgraph(c) ((_ctype + 1)[c] & (_P | _U | _L | _D))
#define islower(c) ((_ctype + 1)[c] & (_L))
#define isprint(c) ((_ctype + 1)[c] & (_P | _U | _L | _D | _SP))
#define ispunct(c) ((_ctype + 1)[c] & (_P))
#define isspace(c) ((_ctype + 1)[c] & (_S))
#define isupper(c) ((_ctype + 1)[c] & (_U))
#define isxdigit(c) ((_ctype + 1)[c] & (_D | _X))

#define isascii(c) (((unsigned)c) <= 0x7f)
#define toascii(c) (((unsigned)c) & 0x7f)

#define tolower(c) (_ctmp = c, isupper(_ctmp) ? _ctmp - ('A' - 'a') : _ctmp)
#define toupper(c) (_ctmp = c, islower(_ctmp) ? _ctmp - ('a' - 'A') : _ctmp)

#endif //LINUX0_11_CTYPE_H
