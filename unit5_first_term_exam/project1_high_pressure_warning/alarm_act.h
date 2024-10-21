/*
################################################
     project: alarm_actuator.h
     Created on: Sep 1, 2024
     Author: Eng.Slim Benhammouda
################################################
 */
#ifndef ALARM_ACT_H_
#define ALARM_ACT_H_
#include"state.h"
//define status
enum{
	alarm_act_init,
	alarm_act_on,
	alarm_act_off,
	alarm_act_wait
}alarm_act_status;

//define state for alarm actuator
state_define(alarm_actu_init);
state_define(alarm_actu_on);
state_define(alarm_actu_off);
state_define(alarm_actu_waiting);

//state pointer for alarm actuator
extern void (*alarm_actu_state)();

#endif /* ALARM_ACTJDHH_H_ */