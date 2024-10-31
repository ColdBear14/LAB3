/*
 * fsm_setting.c
 *
 *  Created on: Oct 27, 2024
 *      Author: Hy
 */

#include "fsm_setting.h"

void countPressButton1(){
	if(IsButtonPress(1) == 1){
		status_mode++;
	}
	if(status_mode == MODE4 + 1){
		status_mode = MODE0;
	}
}

void fsm_mode(){
	countPressButton1();
	switch(status_mode){
	case MODE0:
		status_mode = MODE1;
		status_A = INIT;
		status_B = INIT;
		break;
	case MODE1:

		if(IsButtonPress(1) == 1){
			status_mode = MODE2;
		}
		if(IsButtonPress(2) == 1){
			// add value
		}
		if(IsButtonPress(3) == 1){
			//set value
		}
		break;
	case MODE2:
		status_A = MAN_RED;
		status_B = MAN_RED;
		if(IsButtonPress(1) == 1){
			status_mode = MODE3;
		}
		if(IsButtonPress(2) == 1){
			// add value
		}
		if(IsButtonPress(3) == 1){
			//set value
		}
		break;
	case MODE3:
		status_A = MAN_YELLOW;
		status_B = MAN_YELLOW;
		if(IsButtonPress(1) == 1){
			status_mode = MODE4;
		}
		if(IsButtonPress(2) == 1){
			// add value
		}
		if(IsButtonPress(3) == 1){
			//set value
		}
		break;
	case MODE4:
		status_A = MAN_GREEN;
		status_B = MAN_GREEN;
		if(IsButtonPress(1) == 1){
			status_mode = MODE0;
		}
		if(IsButtonPress(2) == 1){
			// add value
		}
		if(IsButtonPress(3) == 1){
			//set value
		}
		break;
	default:
		break;
	}
}
