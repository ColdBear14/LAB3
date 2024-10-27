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
	if (status_mode == MODE4){
		status_mode = MODE1;
	}

}

void fsm_mode(){
	countPressButton1();
	switch(status_mode){
	case MODE1:
		status = INIT;
		status_B = INIT;
		break;
	case MODE2:
		status = MAN_RED;
		status = MAN_GREEN;
		break;
	case MODE3:
		status = MAN_YELLOW;
		status = MAN_RED;
		break;
	case MODE4:
		status = MAN_GREEN;
		status = MAN_RED;
		break;
	default:
		break;
	}
}
