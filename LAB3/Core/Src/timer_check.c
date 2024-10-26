/*
 * timer_check.c
 *
 *  Created on: Oct 26, 2024
 *      Author: Hy
 */

#include "timer_check.h"

void timer_check(){
	if(timer_flag[0] == 1){
		HAL_GPIO_TogglePin(GPIOA, PA4_Pin);
		setTimer(0,1000);
	}
}
