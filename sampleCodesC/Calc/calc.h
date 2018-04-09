/*
 * calc.h
 *
 *  Created on: 08/03/2014
 *      Author: Salvador Zendejas
 */

#ifndef CALC_CALC_H_
#define CALC_CALC_H_

#include "common.h"

uint8 u8fn_sum(uint8, uint8);
uint8 u8fn_sub(uint8, uint8);
uint8 u8fn_mul(uint8, uint8);
uint8 u8fn_div(uint8, uint8);

typedef uint8 (*u8ptrfn_t)(uint8, uint8);

#endif /* CALC_CALC_H_ */
