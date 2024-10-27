/*
 * fsm_automatic.c
 *
 *  Created on: Oct 26, 2024
 *      Author: Hy
 */

#include "fsm_automatic.h"

int count_RED = 500;
int count_GREEN = 300;
int count_YELLOW = 200;


void fsm_automatic_run_A(){
	status_LED_A();
	switch (status) {
		case INIT:
			status = AUTO_RED;
			setTimer(1, 5000);
			break;
		case AUTO_RED:

			displayTraffic();
			if (timer_flag[1] == 1) {
				status = AUTO_GREEN;
				setTimer(1, 3000);
			}
			if(IsButtonPress(1) == 1){
				status = MAN_RED;
				setTimer(1,10000);
			}
			break;
		case AUTO_GREEN:
			displayTraffic();
			if (timer_flag[1] == 1) {
				status = AUTO_YELLOW;
				setTimer(1, 2000);
			}
			if(IsButtonPress(1) == 1){
				status = MAN_GREEN;
				setTimer(1,10000);
			}
			break;
		case AUTO_YELLOW:
			displayTraffic();
			if (timer_flag[1] == 1) {
				status = AUTO_RED;
				setTimer(1, 5000);
			}
			if(IsButtonPress(1) == 1){
				status = MAN_YELLOW;
				setTimer(1,10000);
			}
			break;
		default:
			break;
		}
}

void fsm_automatic_run_B(){
	status_LED_B();
	switch (status_B) {
		case INIT:
			status_B = AUTO_GREEN;
			setTimer(2, 3000);
			break;
		case AUTO_GREEN:
			displayTraffic();
			if (timer_flag[2] == 1) {
				status_B = AUTO_YELLOW;
				setTimer(2, 2000);
			}
			break;
		case AUTO_YELLOW:
			displayTraffic();
			if (timer_flag[2] == 1) {
				status_B = AUTO_RED;
				setTimer(2, 5000);
			}
			break;
		case AUTO_RED:
			displayTraffic();
			if (timer_flag[2] == 1) {
				status_B = AUTO_GREEN;
				setTimer(2, 3000);
			}
			break;
		default:
			break;
		}
}

void fsm_automatic_run() {
	fsm_automatic_run_A();
	fsm_automatic_run_B();
}
