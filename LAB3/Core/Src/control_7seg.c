/*
 * control_7seg.c
 *
 *  Created on: Oct 23, 2024
 *      Author: Hy
 */
#include "control_7seg.h"
#include "main.h"

int buffer_indexA[2];
int buffer_indexB[2];



void display7SEGA(int index) {


	switch (index) {
	case 0:
		HAL_GPIO_WritePin(GPIOB, PB0_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, PB1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, PB2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, PB4_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, PB5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, PB6_Pin, SET);

		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, PB6_Pin | PB0_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, PB1_Pin | PB2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin | PB4_Pin | PB5_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB, PB2_Pin | PB5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, PB0_Pin | PB1_Pin | PB6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin | PB4_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOB, PB5_Pin | PB4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, PB0_Pin | PB1_Pin | PB2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin | PB6_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOB, PB0_Pin | PB4_Pin | PB3_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, PB1_Pin | PB2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, PB6_Pin | PB5_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOB, PB4_Pin | PB1_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, PB0_Pin | PB2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin | PB6_Pin | PB5_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOB, PB1_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, PB0_Pin | PB2_Pin | PB4_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin | PB6_Pin | PB5_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOB, PB6_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, PB0_Pin | PB1_Pin | PB2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin | PB4_Pin | PB5_Pin, SET);
		break;
	case 8:
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOB, PB4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, PB0_Pin | PB1_Pin | PB2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin | PB6_Pin | PB5_Pin, RESET);
		break;
	default:
		break;
	}

}

void display7SEGB(int index) {


	switch (index) {
	case 0:
		HAL_GPIO_WritePin(GPIOB, PB13_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, PB7_Pin | PB8_Pin | PB9_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, PB10_Pin | PB11_Pin | PB12_Pin, RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, PB13_Pin | PB7_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, PB8_Pin | PB9_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, PB10_Pin | PB11_Pin | PB12_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB, PB9_Pin | PB12_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, PB7_Pin | PB8_Pin | PB13_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, PB10_Pin | PB11_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOB, PB12_Pin | PB11_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, PB7_Pin | PB8_Pin | PB9_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, PB10_Pin | PB13_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOB, PB7_Pin | PB11_Pin | PB10_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, PB8_Pin | PB9_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, PB13_Pin | PB12_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOB, PB11_Pin | PB8_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, PB7_Pin | PB9_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, PB10_Pin | PB13_Pin | PB12_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOB, PB8_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, PB7_Pin | PB9_Pin | PB11_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, PB10_Pin | PB13_Pin | PB12_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOB, PB13_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, PB7_Pin | PB8_Pin | PB9_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, PB10_Pin | PB11_Pin | PB12_Pin, SET);
		break;
	case 8:

		break;
	case 9:
		HAL_GPIO_WritePin(GPIOB, PB11_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, PB7_Pin | PB8_Pin | PB9_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, PB10_Pin | PB13_Pin | PB12_Pin, RESET);
		break;
	default:
		break;
	}

}

void update_indexA(int index) {
	if (index >= 10) {
		buffer_indexA[0] = index % 10;
		buffer_indexA[1] = index / 10;
	} else {
		buffer_indexA[0] = index;
		buffer_indexA[1] = 0;
	}
}

void update_indexB(int index) {
	if (index >= 10) {
		buffer_indexB[0] = index % 10;
		buffer_indexB[1] = index / 10;
	} else {
		buffer_indexB[0] = index;
		buffer_indexB[1] = 0;
	}
}

void update_7seg_A() {
	switch (switch_7seg) {
	case 1:
		display7SEGA(buffer_indexA[1]);
		HAL_GPIO_WritePin(GPIOA, PA11_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA, PA12_Pin, SET);
		break;
	case 2:
		display7SEGA(buffer_indexA[0]);
		HAL_GPIO_WritePin(GPIOA, PA11_Pin, SET);
		HAL_GPIO_WritePin(GPIOA, PA12_Pin, RESET);
		break;
	default:
		break;
	}
}

void update_7seg_B() {
	switch (switch_7seg) {
	case 1:
		display7SEGB(buffer_indexB[1]);
		HAL_GPIO_WritePin(GPIOA, PA13_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA, PA14_Pin, SET);
		break;
	case 2:
		display7SEGB(buffer_indexB[0]);
		HAL_GPIO_WritePin(GPIOA, PA13_Pin, SET);
		HAL_GPIO_WritePin(GPIOA, PA14_Pin, RESET);
		break;
	default:
		break;
	}
}
