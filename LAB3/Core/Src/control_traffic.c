/*
 * control_traffic.c
 *
 *  Created on: Oct 23, 2024
 *      Author: Hy
 */
#include "main.h"
#include "control_7seg.h"
#include "control_traffic.h"

int count_RED_A = 5;
int count_YELLOW_A = 2;
int count_GREEN_A = 3;

int status_RED_A = 1;
int status_YELLOW_A = 0;
int status_GREEN_A = 0;

int status_RED_B = 0;
int status_YELLOW_B = 0;
int status_GREEN_B = 1;

int count_RED_B = 5;
int count_YELLOW_B = 2;
int count_GREEN_B = 3;

void displayTraffic() {
	//group a
	if (status_RED_A == 1) {
		HAL_GPIO_WritePin(GPIOA, PA5_Pin, SET);
		HAL_GPIO_WritePin(GPIOA, PA6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA, PA7_Pin, RESET);
	}
	if (status_YELLOW_A == 1) {
		HAL_GPIO_WritePin(GPIOA, PA5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA, PA6_Pin, SET);
		HAL_GPIO_WritePin(GPIOA, PA7_Pin, RESET);
	}
	if (status_GREEN_A == 1) {
		HAL_GPIO_WritePin(GPIOA, PA5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA, PA6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA, PA7_Pin, SET);
	}
	//group b
	if (status_RED_B == 1) {
		HAL_GPIO_WritePin(GPIOA, PA8_Pin, SET);
		HAL_GPIO_WritePin(GPIOA, PA9_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA, PA10_Pin, RESET);
	}
	if (status_YELLOW_B == 1) {
		HAL_GPIO_WritePin(GPIOA, PA8_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA, PA9_Pin, SET);
		HAL_GPIO_WritePin(GPIOA, PA10_Pin, RESET);
	}
	if (status_GREEN_B == 1) {
		HAL_GPIO_WritePin(GPIOA, PA8_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA, PA9_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA, PA10_Pin, SET);
	}
}

void updateTraffic() {
	//group a
	if (status_RED_A == 1) {
		display7SEGA(count_RED_A);
		if (count_RED_A == 0) {
			status_RED_A = 0;
			status_GREEN_A = 1;
			count_RED_A = 6;
		}
		count_RED_A--;
	}
	if (status_GREEN_A == 1) {
		display7SEGA(count_GREEN_A);
		if (count_GREEN_A == 0) {
			status_GREEN_A = 0;
			status_YELLOW_A = 1;
			count_GREEN_A = 4;
		}
		count_GREEN_A--;
	}
	if (status_YELLOW_A == 1) {
		display7SEGA(count_YELLOW_A);
		if (count_YELLOW_A == 0) {
			status_YELLOW_A = 0;
			status_RED_A = 1;
			count_YELLOW_A = 3;
		}
		count_YELLOW_A--;
	}

	//group b
	if (status_GREEN_B == 1) {
		display7SEGB(count_GREEN_B);
		if (count_GREEN_B == 0) {
			status_GREEN_B = 0;
			status_YELLOW_B = 1;
			count_GREEN_B = 4;
		}
		count_GREEN_B--;
	}
	if (status_YELLOW_B == 1) {
		display7SEGB(count_YELLOW_B);
		if (count_YELLOW_B == 0) {
			status_YELLOW_B = 0;
			status_RED_B = 1;
			count_YELLOW_B = 3;
		}
		count_YELLOW_B--;
	}
	if (status_RED_B == 1) {
		display7SEGB(count_RED_B);
		if (count_RED_B == 0) {
			status_RED_B = 0;
			status_GREEN_B = 1;
			count_RED_B = 6;
		}
		count_RED_B--;
	}
	displayTraffic();
}

