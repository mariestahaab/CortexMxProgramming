/*
 * FastBitEmbedded_Implementation.c
 *
 *  Created on: Jan 21, 2024
 *      Author: mariestahaab
 */

#include "Scheduler_SysTick.h"
#include "taskStackConfig.h"

int main(void)
{
    sysTick_init(TICK_Hz);

	for(;;);
}

