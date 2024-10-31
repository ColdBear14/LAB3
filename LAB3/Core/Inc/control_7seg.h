/*
 * control_7seg.h
 *
 *  Created on: Oct 23, 2024
 *      Author: Hy
 */

#ifndef INC_CONTROL_7SEG_H_
#define INC_CONTROL_7SEG_H_

extern int buffer_indexA[2];
extern int buffer_indexB[2];

extern void display7SEGA(int index);
extern void display7SEGB(int index);

extern void update_indexA(int index);
extern void update_indexB(int index);

extern void update_7seg_A();
extern void update_7seg_B();


#endif /* INC_CONTROL_7SEG_H_ */
