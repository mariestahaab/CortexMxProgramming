/*
 * taskStackConfig.h
 *
 *  Created on: Jan 21, 2024
 *      Author: mariestahaab
 */

#include <stdint.h>
#include <stdio.h>

#ifndef SCHEDULER_ROUNDROBIN_INC_TASKSTACKCONFIG_H_
#define SCHEDULER_ROUNDROBIN_INC_TASKSTACKCONFIG_H_

// Stack Memory Calculations for Tasks and Scheduler:
#define SIZE_TASK_STACK			1024U
#define SIZE_SCHEDULER_STACK	1024U

#define SRAM_START				0x20000000U
#define SRAM_SIZE				((128)*(1024))U
#define SRAM_END				((SRAM_START) + (SRAM_SIZE))


#define T1_STACK_START			SRAM_END
#define T2_STACK_START			((SRAM_END) + (1 * SIZE_TASK_STACK))U
#define T3_STACK_START			((SRAM_END) + (2 * SIZE_TASK_STACK))U
#define T4_STACK_START			((SRAM_END) + (3 * SIZE_TASK_STACK))U

#define SCHEDULER_STACK_START	((SRAM_END) + (4 * SIZE_TASK_STACK))U

// For the SysTick Timer:
#define HSI_CLK					16000000U
#define SYST_CLK				HSI_CLK
#define TICK_Hz					1000U

#endif /* SCHEDULER_ROUNDROBIN_INC_TASKSTACKCONFIG_H_ */
