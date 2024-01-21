/*
 * Scheduler_SysTick.h
 *
 *  Created on: Jan 21, 2024
 *      Author: mariestahaab
 */
#include <stdint.h>
#include <stdio.h>

#ifndef SCHEDULER_ROUNDROBIN_INC_SCHEDULER_SYSTICK_H_
#define SCHEDULER_ROUNDROBIN_INC_SCHEDULER_SYSTICK_H_

void sysTick_init(uint32_t);

void Task1_Handler(void);
void Task2_Handler(void);
void Task3_Handler(void);
void Task4_Handler(void);

#endif /* SCHEDULER_ROUNDROBIN_INC_SCHEDULER_SYSTICK_H_ */
