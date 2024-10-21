/*
################################################
     project: pressure_sensor.h
     Created on: Sep 1, 2024
     Author: eng.Slim Benhammouda
################################################
 */

#ifndef P_SENSOR_H_
#define P_SENSOR_H_

#include"state.h"

// define status
enum{
	ps_init,
	ps_reading,
	ps_waiting
}ps_status;

//declaring state functions
state_define(ps_init);
state_define(ps_reading);
state_define(ps_waiting);

// state pointer to function
extern void (*ps_state)();

#endif /* P_SENSOR_H_ */
