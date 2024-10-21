/*
################################################
     project: main_algo.h
     Created on: Sep 1, 2024
     Author: eng.Slim Benhammouda
################################################
 */

#ifndef MAIN_ALGO_H_
#define MAIN_ALGO_H_

#include"state.h"
// define status
enum {
	m_algo_hpressure
}m_algo_status;

//state function declaration
state_define(m_algo_hpressure);

// state pointer for main algorithm
extern void (*m_algo_state)();

#endif /* MAIN_ALGO_H_ */
