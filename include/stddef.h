/******************************************************************************
 *
 * Name: stddef.h - 标准定义，不与其他头文件类型相关的函数，
 * 		    但是编译器有自己的想法，几乎没啥用
 * Created on 2024/06/04
 * Copyright (C) 2022 - 2024, wyh.
 *
 *****************************************************************************/

#ifndef LINUX0_11_STDDEF_H
#define LINUX0_11_STDDEF_H

#ifndef _PTRDIFF_T
#define _PTRDIFF_T
typedef long ptrdiff_t;		// 两个指针相减的结果的类型
#endif

#ifndef _SIZE_T
#define _SIZE_T
typedef unsigned long size_t;
#endif

#undef NULL
#define NULL ((void *)0)	// 空指针

#define offsetof(TYPE, MEMBER) ((size_t) & ((TYPE *)0)->MEMBER)

#endif //LINUX0_11_STDDEF_H
