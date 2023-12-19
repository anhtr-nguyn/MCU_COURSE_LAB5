/*
 * software_timer.c
 *
 *  Created on: Dec 19, 2023
 *      Author: TrongAnh
 */


#include "software_timer.h"


int timer_flag = 0;
int timer_counter = 0;

void setTimer(int duration){
	timer_flag = 0;
	timer_counter = duration / TIME_CYCLE;
}

void timerRun(){
	if (timer_counter > 0){
		timer_counter--;
		if (timer_counter <= 0){
			timer_flag = 1;
		}
	}
}
