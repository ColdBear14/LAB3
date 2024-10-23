/*
 * control_traffic.h
 *
 *  Created on: Oct 23, 2024
 *      Author: Hy
 */

#ifndef INC_CONTROL_TRAFFIC_H_
#define INC_CONTROL_TRAFFIC_H_

extern int count_RED_A;
extern int count_YELLOW_A;
extern int count_GREEN_A;

extern int status_RED_A;
extern int status_YELLOW_A;
extern int status_GREEN_A;

int status_RED_B;
int status_YELLOW_B;
int status_GREEN_B;

int count_RED_B;
int count_YELLOW_B;
int count_GREEN_B;

void clearLED();
extern void displayTrafficA();
extern void displayTrafficB();
extern void updateTraffic();

#endif /* INC_CONTROL_TRAFFIC_H_ */
