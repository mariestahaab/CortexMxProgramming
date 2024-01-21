/*
 * Scheduler_SysTick.c
 *
 *  Created on: Jan 21, 2024
 *      Author: mariestahaab
 */

#include "Scheduler_SysTick.h"
#include "taskStackConfig.h"

// SysTick Handler Implementation:

void SysTick_Handler(void){
	printf("SysTick Handler \n");
}

// SysTick Timer Configuration:

void sysTick_init(uint32_t TickHz){

	uint32_t *SYST_CSR = (uint32_t *) 0xE000E010;		// SysTick Control and Status Register
	uint32_t *SYST_RVR = (uint32_t *) 0xE000E014;		// SysTick Reload Value Register

	uint32_t countValue = (SYST_CLK / TickHz) - 1;		// -1: because flag triggered on value reload => 1 extra count

	*SYST_RVR &= ~(0x00FFFFFF);							// Clear the Reload Value Register
	*SYST_RVR |= countValue;							// Load countValue into the Reload Value Register

	*SYST_CSR |= (1 << 2) | (1 << 1);					// Set CLKSOURCE (bit-2) to 1 => processor clock; and
														// set TICKINT (bit-1) to 1 => counting down to zero asserts the SysTick exception request.

	*SYST_CSR |= (1 << 0);								// Set ENABLE (bit-0) to 1 => counter enabled
}
