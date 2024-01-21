/*
 * TaskHandlers.c
 *
 *  Created on: Jan 21, 2024
 *      Author: mariestahaab
 */

#include "Scheduler_SysTick.h"
#include "taskStackConfig.h"

// Task Implementation:

void Task1_Handler(void){
	while(1){
		printf("Task 1 \n");
	}
}

void Task2_Handler(void){
	while(1){
		printf("Task 2 \n");
	}
}

void Task3_Handler(void){
	while(1){
		printf("Task 3 \n");
	}
}

void Task4_Handler(void){
	while(1){
		printf("Task 4 \n");
	}
}
