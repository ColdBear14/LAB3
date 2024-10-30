/*
 * fsm_7seg.c
 *
 *  Created on: Oct 30, 2024
 *      Author: Hy
 */
#include "fsm_7seg.h"

int countDownRED = 6;
int countDownGREEN = 4;
int countDownYELLOW = 3;

void fsm_7seg_run(){
	fsm_automatic_7segA();
}

void fsm_automatic_7segA(){
	if(status_A == AUTO_RED){
		display7SEGA(countDownRED);
		if(timer_flag[5]==1){
			if(countDownRED <= 0) {
				countDownRED = 6;
			}
			countDownRED--;
			setTimer(5,1000);
		}
	}
	if(status_A == AUTO_GREEN){
		display7SEGA(countDownGREEN);
		if(timer_flag[5]==1){
			if(countDownGREEN <= 0) {
				countDownGREEN = 4;
			}
			countDownGREEN--;
			setTimer(5,1000);
		}
	}
	if(status_A == AUTO_YELLOW){
		display7SEGA(countDownYELLOW);
		if(timer_flag[5]==1){
			if(countDownYELLOW <= 0) {
				countDownYELLOW = 3;
			}
			countDownYELLOW--;
			setTimer(5,1000);
		}
	}

}

