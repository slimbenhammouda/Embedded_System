/*
################################################
     project: alarm_monitor.h
     Created on: Sep 1, 2024
     Author: eng.Slim Benhammouda
################################################
 */

#ifndef ALARM_MON_H_
#define ALARM_MON_H_

#include"state.h"


//define status
enum{
	alarm__on,
	alarm__off,
	alarm__wait
}monitor_alarm_status;

// state function declaration
state_define(alarm_off);
state_define(alarm_on);
state_define(alarm_wait);

// state pointer for alarm monitor
extern void(*alarm_mon_state)();

#endif /* ALARM_MON_H_ */
