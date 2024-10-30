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
	if (status_mode == MODE4 + 1){
		status_mode = MODE0;
	}

}

void fsm_mode(){
	countPressButton1();
	switch(status_mode){
	case MODE0:
		status_mode = MODE1;
		break;
	case MODE1:

		break;
	case MODE2:
		status_A = MAN_RED;
		status_B = MAN_RED;
		break;
	case MODE3:
		status_A = MAN_YELLOW;
		status_B = MAN_YELLOW;
		break;
	case MODE4:
		status_A = MAN_GREEN;
		status_B = MAN_GREEN;
		break;
	default:
		break;
	}
}
