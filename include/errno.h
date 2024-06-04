/******************************************************************************
 *
 * Name: errno.h - 本文件定义了系统中一些出错号的常量值
 * Created on 2024/06/04
 * Copyright (C) 2022 - 2024, wyh.
 *
 *****************************************************************************/

#ifndef LINUX0_11_ERRNO_H
#define LINUX0_11_ERRNO_H

/*
 * linus当时没有POSIX的出错值的标准，于是和minix保持了一致
 * 如果修改这个文件中的常量值，那么记得修改strerror()函数
 */

extern int errno;

#define ERROR		99	// 一般错误
#define EPERM		1	// 没有许可
#define ENOENT		2	// 文件或者目录不存在
#define ESRCH		3	// 指定的进程不存在
#define EINTR		4	// 中断的函数调用
#define EIO		5	// 输入输出错误
#define ENXIO		6	// 设备或地址不存在
#define E2BIG		7	// 参数列表过长
#define ENOEXEC		8	// 执行程序格式错误
#define EBADF		9	// 文件描述符错误
#define ECHILD		10	// 子进程不存在
#define EAGAIN		11	// 资源暂时不可用
#define ENOMEM		12	// 内存不足
#define EACCES		13	// 没有访问权限
#define EFAULT		14	// 地址错
#define ENOTBLK		15	// 不是块设备文件
#define EBUSY		16	// 资源正忙
#define EEXIST		17	// 文件已存在
#define EXDEV		18	// 非法链接 TODO:这里的描述有问题？
#define ENODEV		19	// 设备不存在
#define ENOTDIR		20	// 不是目录文件
#define EISDIR		21	// 是目录文件
#define EINVAL		22	// 参数无效
#define ENFILE		23	// 系统打开的文件太多
#define EMFILE		24	// 打开的文件太多
#define ENOTTY		25	// 没有tty终端
#define ETXTBSY		26	// 不再使用 TODO:描述不准确？
#define EFBIG		27	// 文件太大
#define ENOSPC		28	// 设备已经没有空间
#define ESPIPE		29	// 无效的指针重定位 TODO:描述有问题？
#define EROFS		30	// 文件系统只读
#define EMLINK		31	// 链接太多
#define EPIPE		32	// 管道错误
#define EDOM		33	// 域出错
#define ERANGE		34	// 结果太大 TODO:描述不准确
#define EDEADLK		35	// 避免资源死锁
#define ENAMETOOLONG	36	// 文件名太长
#define ENOLCK		37	// 没有锁定可用
#define ENOSYS		38	// 功能没有实现
#define ENOTEMPTY	39	// 目录非空

endif //LINUX0_11_ERRNO_H
