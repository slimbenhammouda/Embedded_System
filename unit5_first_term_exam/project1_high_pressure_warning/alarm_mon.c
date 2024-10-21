/*
################################################
     project: alarm_monitor.c
     Created on: Sep 1, 2024
     Author: eng.Slim Benhammouda
################################################
 */
#include"alarm_mon.h"


state_define(alarm_off)
{
	//state action
	monitor_alarm_status= alarm__off;
	//stop the alarm actuator
	alarm_act_stop();
	//check event and update state
	if(main_algo_high_P_detected() == 1)
		alarm_mon_state=state(alarm_on);
}

state_define(alarm_on)
{
	//state action
	monitor_alarm_status= alarm__on;
	//start the alarm actuator
	alarm_act_start();
	//check event and update state
	alarm_mon_state=state(alarm_wait);
}

state_define(alarm_wait)
{
	//state action
	monitor_alarm_status= alarm__wait;
	// timer for 60 second
	Delay(1000000);
	//check event and update state
	alarm_mon_state=state(alarm_off);
}



