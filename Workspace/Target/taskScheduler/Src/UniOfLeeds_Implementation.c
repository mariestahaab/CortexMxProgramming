/*
 * UniOfLeeds_Implementation.c
 *
 *  Created on: Jan 21, 2024
 *      Author: mariestahaab
 */

#include <stdint.h>
#include <stdio.h>

typedef void (*TaskFunction_t) (void);

void Task1_Handler(void){

}
TaskFunction_t Task_1 = &Task1_Handler;

void Task2_Handler(void){

}
TaskFunction_t Task_2 = &Task2_Handler;

void Task3_Handler(void){

}
TaskFunction_t Task_3 = &Task3_Handler;

void Task4_Handler(void){

}
TaskFunction_t Task_4 = &Task4_Handler;


int main(void){

	TaskFunction_t functionHolder[4] = {Task_1, Task_2, Task_3, Task_4};

	while(1);
}
