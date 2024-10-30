/*
 * fsm_7seg.c
 *
 *  Created on: Oct 30, 2024
 *      Author: Hy
 */
#include "fsm_7seg.h"

int countDownA=5;
int countDownB=3;

void fsm_7seg_run() {
	fsm_automatic_7segA();
	fsm_automatic_7segB();
}

void fsm_automatic_7segA() {
	switch (status_A) {
	case INIT:
		status_A = AUTO_RED;
		setTimer(5, 1000);
		break;
	case AUTO_RED:
		if (countDownA <= 0) {
			countDownA = 3;
		}
		if (timer_flag[5] == 1) {
			display7SEGA(countDownA);
			countDownA--;
			setTimer(5, 1000);
		}
		break;
	case AUTO_GREEN:
		if (countDownA <= 0){
			countDownA=2;
		}
		if (timer_flag[5] == 1) {
			display7SEGA(countDownA);
			countDownA--;
			setTimer(5, 1000);
		}
		break;
	case AUTO_YELLOW:
		if (countDownA <= 0) {
			countDownA = 5;
		}
		if (timer_flag[5] == 1) {
			display7SEGA(countDownA);
			countDownA--;
			setTimer(5, 1000);
		}
		break;
	default:
		break;

	}
}

void fsm_automatic_7segB() {
	switch (status_B) {
	case INIT:
		status_B = AUTO_GREEN;
		setTimer(6, 1000);
		break;
	case AUTO_GREEN:
		if (countDownB <= 0) {
			countDownB = 2;
		}
		if (timer_flag[6] == 1) {
			display7SEGB(countDownB);
			countDownB--;
			setTimer(6, 1000);
		}
		break;
	case AUTO_YELLOW:
		if (countDownB <= 0) {
			countDownB = 5;
		}
		if (timer_flag[6] == 1) {
			display7SEGB(countDownB);
			countDownB--;
			setTimer(6, 1000);
		}
		break;
	case AUTO_RED:
		if (countDownB <= 0) {
			countDownB = 3;
		}
		if (timer_flag[6] == 1) {
			display7SEGB(countDownB);
			countDownB--;
			setTimer(6, 1000);
		}
		break;
	default:
		break;
	}

}
