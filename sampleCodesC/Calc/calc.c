/*
 * calc.c
 *
 *  Created on: 08/03/2014
 *      Author: Salvador Zendejas
 */


#include "calc.h"

uint8 u8fn_calHandler(uint8 a,uint8 b, u8ptrfn_t u8_calc_fn){
	return (u8_calc_fn(a,b));
}

uint8 u8fn_sum(uint8 a, uint8 b){
	return (a + b);
}

uint8 u8fn_sub(uint8 a, uint8 b){
	return (a - b);
}

uint8 u8fn_mul(uint8 a, uint8 b){
	return (a * b);
}

uint8 u8fn_div(uint8 a, uint8 b){
	return (a / b);
}

uint8 u8fn_max(uint8 a, uint8 b){
	if (a > b)
		return a;
	else
		return b;
}

uint8 u8fn_min(uint8 a, uint8 b){
	if (a < b)
		return a;
	else
		return b;
}
