/*
################################################
     project: main.c
     Created on: Sep 1, 2024
     Author: eng.Slim Benhammouda
################################################
 */
#include"state.h"
#include"p_sensor.h"
#include"alarm_act.h"
#include"alarm_mon.h"
#include"main_algo.h"

void (*ps_state)()=state(ps_init);
void (*alarm_actu_state)()=state(alarm_actu_init);
void (*m_algo_state)()=state(m_algo_hpressure);
void(*alarm_mon_state)()=state(alarm_off);
int main(void)
{
	//init hardware
     GPIO_INIT ();
	while(1)
	{
		ps_state();
		alarm_actu_state();
		
		m_algo_state();
		alarm_mon_state();
	}
return 0 ;
}