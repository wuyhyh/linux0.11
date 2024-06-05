/******************************************************************************
 *
 * Name: times.h - 定义文件访问与修改时间结构tms
 * Created on 2024/06/05
 * Copyright (C) 2022 - 2024, wyh.
 *
 *****************************************************************************/

#ifndef LINUX0_11_TIMES_H
#define LINUX0_11_TIMES_H

#include <sys/types.h>

struct tms {
	time_t tms_utime; 	// 用户使用的CPU时间
	time_t tms_stime; 	// 内核使用的CPU时间
	time_t tms_cutime; 	// 已终止的子进程使用的用户CPU时间
	time_t tms_cstime; 	// 已终止的子进程使用的系统CPU时间
};

extern time_t times(struct tms *tp);

#endif //LINUX0_11_TIMES_H
