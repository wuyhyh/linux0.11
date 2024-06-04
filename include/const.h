/******************************************************************************
 *
 * Name: const.h - i节点标志的常数定义
 * Created on 2024/06/04
 * Copyright (C) 2022 - 2024, wyh.
 *
 *****************************************************************************/

#ifndef LINUX0_11_CONST_H
#define LINUX0_11_CONST_H

// 定义缓冲使用的内存的末端 TODO：no use delete?
#define BUFFER_END 0x200000

// i节点数据结构中i_mode字段的各标志位
#define I_TYPE 			017OOOO
#define I_DIRECTORY 		0040000
#define I_REGULAR 		0100000
#define I_BLOCK_SPECIAL		0060000
#define I_CHAR_SPECIAL		0020000
#define I_NAMED_PIPE		0010000
#define I_SET_UID_BIT		0004000		// 执行时设置有效用户id
#define I_SET_GID_BIT		0002000		// 执行时设置有效组id

#endif //LINUX0_11_CONST_H
