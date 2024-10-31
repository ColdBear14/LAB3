/*
 * fsm_setting.h
 *
 *  Created on: Oct 27, 2024
 *      Author: Hy
 */

#ifndef INC_FSM_SETTING_H_
#define INC_FSM_SETTING_H_

#include "global.h"

extern int count_RED;
extern int count_GREEN;
extern int count_YELLOW;
int countTemp;

void countPressButton1();
extern void fsm_mode();

#endif /* INC_FSM_SETTING_H_ */
