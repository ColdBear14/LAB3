/*
 * fsm_manual.c
 *
 *  Created on: Oct 26, 2024
 *      Author: Hy
 */

#include "fsm_manual.h"

void fsm_manual_run() {
	status_LED_A();
	switch (status_A) {
	case MAN_RED:
		displayTraffic();
		if (timer_flag[1] == 1) {
			//group A
			status_A = AUTO_RED;
			setTimer(1, 5000);
		}
		if (IsButtonPress(1) == 1) {
			//group A
			status_A = MAN_GREEN;
			setTimer(1, 10000);
		}
		break;
	case MAN_GREEN:
		displayTraffic();
		if (timer_flag[1] == 1) {
			status_A = AUTO_GREEN;
			setTimer(1, 3000);
		}
		if (IsButtonPress(1) == 1) {
			status_A = MAN_YELLOW;
			setTimer(1, 10000);
		}
		break;
	case MAN_YELLOW:
		displayTraffic();
		if (timer_flag[1] == 1) {
			status_A = AUTO_YELLOW;
			setTimer(1, 2000);
		}
		if (IsButtonPress(1) == 1) {
			status_A = MAN_RED;
			setTimer(1, 10000);
		}
		break;
	default:
		break;
	}
}

