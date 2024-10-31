/*
 * fsm_manual.c
 *
 *  Created on: Oct 26, 2024
 *      Author: Hy
 */

#include "fsm_manual.h"


void fsm_manual_run_A() {
	status_LED_A();
	switch (status_A) {
	case MAN_RED:
		displayTraffic();
		update_indexA(count_RED);
		break;
	case MAN_GREEN:
		displayTraffic();
		update_indexA(count_GREEN);
		break;
	case MAN_YELLOW:
		displayTraffic();
		update_indexA(count_YELLOW);
		break;
	default:
		break;
	}
}
void fsm_manual_run_B() {
	status_LED_B();
	switch (status_B) {
	case MAN_RED:
		displayTraffic();
		update_indexB(countTemp);
		break;
	case MAN_GREEN:
		displayTraffic();
		update_indexB(countTemp);
		break;
	case MAN_YELLOW:
		displayTraffic();
		update_indexB(countTemp);
		break;
	default:
		break;
	}
}

void fsm_manual_run() {
fsm_manual_run_A();
fsm_manual_run_B();
}
