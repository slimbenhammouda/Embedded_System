/*
######################################################
        File Name  : state.h
        Created by : eng. Slim Benhammouda
        Created on : 30/08/2024
        Descreption:
######################################################
*/
#ifndef STATE_H_
#define STATE_H_

#include "GPIO.h"

// state functions auto_generation
#define state_define(_statfunc_) void ST_##_statfunc_()

//state for pointers assignment 
#define state(_statfunc_) ST_##_statfunc_

//state connections
//pressure sensor >>>>>>>> main_algo
unsigned int PS_get_Pval(void);

//main_algo >>>>>>>>>>>> alarm_monitor
uint32_t main_algo_high_P_detected(void);

//alarm_monitor >>>>>>>>>> alarm_actuator
void alarm_act_start(void);
void alarm_act_stop(void);

#endif /*STATE_H_*/