/*
 * priorityConfig.c
 *
 *  Created on: Jan 1, 2024
 *      Author: mariestahaab
 */

#include <stdint.h>
#include <stdio.h>

#define TIM2_IRQ_NO 28U
#define I2C1_IRQ_NO 31U

// From Cortex-M4 Generic User Guide:
volatile uint32_t *pIPR_BASE = (uint32_t *) 0xE000E400;
volatile uint32_t *pISPR_BASE = (uint32_t *) 0XE000E200;
volatile uint32_t *pISER_BASE = (uint32_t *) 0xE000E100;

void config_IRQ_priority(uint8_t IRQ_NO, uint8_t priorityValue){

	// Step 1.1: Determine which IPR to use for a given ISR Number:

	uint8_t		IPRx	= IRQ_NO / 4;
	uint32_t	*pIPRx	= (uint32_t *) pIPR_BASE + IPRx;

	// Step 1.2: Determine bit position in IPRx:

	uint8_t POS_IPRx = (IRQ_NO % 4) * 8;

	// Step 1.3: Configure priority in IPRx:

	*pIPRx &= ~(0xFF << POS_IPRx);			// Clear the 8-bits in the IPR.
	*pIPRx |= (priorityValue << POS_IPRx);	// Set the 8-bits in the IPR.
}

int main(void){

	// Step 1: Configure priority for the IRQs:

	config_IRQ_priority(TIM2_IRQ_NO, 0x80);
	config_IRQ_priority(I2C1_IRQ_NO, 0x70);

	// Step 2: Set the Interrupt Pending Bit using the ISPR:

	*pISPR_BASE |= (1 << TIM2_IRQ_NO);

	// Step 3: Enable IRQ using the NVIC ISER:

	*pISER_BASE |= (1 << I2C1_IRQ_NO);
	*pISER_BASE |= (1 << TIM2_IRQ_NO);

}

void I2C1_EV_IRQHandler(void){

	printf ("[I2C IRQ Handler] \n");
}

void TIM2_IRQHandler(void){

	printf ("[TIM2 IRQ Handler] \n");

	*pISPR_BASE |= (1 << I2C1_IRQ_NO);	// Nested Interrupt, will work if priority value of nested IRQ is Lower.

	while(1);
}
