/*
 * pend_int_USART3.c
 *
 *  Created on: Dec 25, 2023
 *      Author: mariestahaab
 */

#define USART3_IRQ_NO 39

#include <stdint.h>
#include <stdio.h>

int main(void)
{
	// STEP-1: Manually pend the pending bit for USART 3 IRQ number in NVIC.
	// Use the 32-bit Interrupt Set Pending Registers (ISPR) to force interrupts to the pending state.

	// NOTE: This is for demonstration purposes only.
	// In practice, an interrupt goes into pending state automatically when a peripheral issues an interrupt.

	// CASE: To set the pending state for IRQ_32:
	// Configure bit-0 of ISPR_1, since ISPR_0 is for IRQ_0 to IRQ_31.
	// To determine the bit position, use '%' with 32. i.e. for ISR_32, 32 % 32 = bit-0.

	// Base address for NVIC_ISPR_0 to NVIC_ISPR_7 is 0x E000 E200 (M4 Generic User Guide).
	// Therefore, Address for NVIC_ISPR_1 = 0x E000 E200 + 4 (because NVIC_ISPR_0 is a 32-bit register).

	volatile uint32_t *pISPR_1 = (uint32_t *) 0xE000E204;

	*pISPR_1 |= (1 << (USART3_IRQ_NO % 32));


	// STEP-2: Enable USART-3 IRQ number in NVIC.


	volatile uint32_t *pISER_1 = (uint32_t *) 0xE000E104;

	*pISER_1 |= (1 << (USART3_IRQ_NO % 32));


	// Implement USART-3 ISR.
	// Get ISR name from startup file, search for USART3

    /* Loop forever */
	for(;;);
}

// USART-3 ISR:
void USART3_IRQHandler(void){
	printf("In USART 3 IRQ \n");
}
