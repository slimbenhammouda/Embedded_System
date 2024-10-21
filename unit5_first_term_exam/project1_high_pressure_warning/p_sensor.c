/*
################################################
     project: pressure_sensor.c
     Created on: Sep 1, 2024
     Author: eng.Slim Benhammouda
################################################
 */

#include"p_sensor.h"

static uint32_t  ps_pval;

state_define(ps_init)
{
	//pressure sensor initialization
	//state action
	ps_status=ps_init;
	//check event update state
	ps_state=state(ps_reading);
}

state_define(ps_reading)
{
	//state action
	ps_status=ps_reading;
	//get the pressure value
	ps_pval = getPressureVal();
	//check event and update state
	ps_state=state(ps_waiting);
}

state_define(ps_waiting)
{
	//state action
	ps_status=ps_waiting;
	// wait sometime before the next reading
	Delay(1000);
	//check event and update state
	ps_state=state(ps_reading);
}

// modules connection (pressure sensor ===> main_algo)
unsigned int PS_get_Pval(void)
{
	return ps_pval;
}

