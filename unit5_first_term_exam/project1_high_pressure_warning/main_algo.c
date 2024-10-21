/*
################################################
     project: main_algo.c
     Created on: Sep 1, 2024
     Author: eng.Slim Benhammouda
################################################
 */
#include"main_algo.h"

static uint32_t m_algo_pval;
static uint32_t m_algo_threshold =20;
state_define(m_algo_hpressure)
{
	//state action
	m_algo_status=m_algo_hpressure;

	//get pressure value from sensor
	m_algo_pval=PS_get_Pval();

	//check event and update the state pointer
	m_algo_state=state(m_algo_hpressure);
}
//modules connection (maim algo =======> alarm monitor
uint32_t main_algo_high_P_detected(void)
{
	return (m_algo_pval > m_algo_threshold);
}
