/*
 * global.h
 *
 *  Created on: Oct 26, 2024
 *      Author: Hy
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "main.h"
#include "control_traffic.h"

#define INIT 1
#define AUTO_RED 2
#define AUTO_YELLOW 3
#define AUTO_GREEN 4

extern int status;
extern int status_B;

#endif /* INC_GLOBAL_H_ */
