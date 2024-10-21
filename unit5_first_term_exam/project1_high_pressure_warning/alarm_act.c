/*
################################################
     project: alarm_actuator.c
     Created on: Sep 1, 2024
     Author: eng.Slim Benhammouda
################################################
 */
#include"alarm_act.h"
state_define(alarm_actu_init)
{
	//state action
	alarm_act_status=alarm_act_init;
	//check event and update state pointer
	alarm_actu_state=state(alarm_actu_waiting);
}

state_define(alarm_actu_waiting)
{
	//state action
	alarm_act_status=alarm_act_wait;

}

state_define(alarm_actu_on)
{
	//state action
	alarm_act_status=alarm_act_on;
	//start the alarm
	Set_Alarm_actuator(1);
	//check event and update state pointer
	alarm_actu_state=state(alarm_actu_waiting);

}
state_define(alarm_actu_off)
{
	//state action
		alarm_act_status=alarm_act_on;
		//stop the alarm
		Set_Alarm_actuator(0);
		//check event and update state pointer
		alarm_actu_state=state(alarm_actu_waiting);
}

void alarm_act_start(void)
{
	alarm_actu_state=state(alarm_actu_on);
}

void alarm_act_stop(void)
{
	alarm_actu_state=state(alarm_actu_off);

}
