/*
 ============================================================================
 Name        : test_Math.c
 Author      : Salvador Zendejas
 Version     : 1.0
 Copyright   : ZENGAR
 Description : Test function to validate the math, Ansi-style
 ============================================================================
 */

#include "test_Math.h"

uint8 test_Math (void){
	uint8 error = CLEAR;

	printf("Testing the math functions...\r\n");

	printf("Test 1 - Sum");
	if (use_Sum()) {
		printf("\t[FAIL]\r");
		error++;
	} else {
		printf("\t[PASS]\r");
	}

	printf("Test 2 - Sub");
	if (use_Sub()) {
		printf("\t[FAIL]\r");
		error++;
	} else {
		printf("\t[PASS]\r");;
	}

	printf("Test 3 - Mul");
	if (use_Mul()) {
		printf("\t[FAIL]\r");
		error++;
	} else {
		printf("\t[PASS]\r");
	}

	printf("Test 4 - Div");
	if (use_Div()) {
		printf("\t[FAIL]\r");
		error++;
	} else {
		printf("\t[PASS]\r");
	}

	printf("Test 5 - Max");
	if (hdlr_Max()) {
		printf("\t[FAIL]\r");
		error++;
	} else {
		printf("\t[PASS]\r");
	}

	printf("Test 6 - Min");
	if (hdlr_Min()) {
		printf("\t[FAIL]\r");
		error++;
	} else {
		printf("\t[PASS]\r");
		;
	}

	printf("Test 7 - Sum");
	if (hdlr_Sum()) {
		printf("\t[FAIL]\r");
		error++;
	} else {
		printf("\t[PASS]\r");
	}

	printf("Test 8 - Sub");
	if (hdlr_Sub()) {
		printf("\t[FAIL]\r");
		error++;
	} else {
		printf("\t[PASS]\r");
	}

	if (error >= 1) {
		return FAIL;
	}

	return PASS;
}

uint8 use_Sum (void){
	uint8 a = 10;
	uint8 b = 43;
	uint8 c = 0;

	u8ptrfn_t u8CallbckCal = u8fn_sum;
	c = u8CallbckCal(a, b);

	if (53 == c)
		return PASS;
	else
		return FAIL;
}

uint8 use_Sub (void){
	uint8 a = 10;
	uint8 b = 43;
	uint8 c = 0;

	u8ptrfn_t u8CallbckCal = u8fn_sub;
	c = u8CallbckCal(b, a);

	if (33 == c)
		return PASS;
	else
		return FAIL;
}

uint8 use_Mul (void){
	uint8 a = 7;
	uint8 b = 4;
	uint8 c = 0;

	u8ptrfn_t u8CallbckCal = u8fn_mul;
	c = u8CallbckCal(a, b);

	if (28 == c)
		return PASS;
	else
		return FAIL;
}

uint8 use_Div (void){
	uint8 a = 10;
	uint8 b = 5;
	uint8 c = 0;

	u8ptrfn_t u8CallbckCal = u8fn_div;
	c = u8CallbckCal(a, b);

	if (2 == c)
		return PASS;
	else
		return FAIL;
}

uint8 hdlr_Max (void){
	uint8 a = 10;
	uint8 b = 43;
	uint8 c = 0;

	c = u8fn_calHandler(a, b, u8fn_max);

	if (43 == c)
		return PASS;
	else
		return FAIL;
}

uint8 hdlr_Min (void){
	uint8 a = 10;
	uint8 b = 43;
	uint8 c = 0;

	c = u8fn_calHandler(b, a, u8fn_min);

	if (10 == c)
		return PASS;
	else
		return FAIL;
}

uint8 hdlr_Sum (void){
	uint8 a = 7;
	uint8 b = 4;
	uint8 c = 0;

	c = u8fn_calHandler(a, b, u8fn_sum);

	if (11 == c)
		return PASS;
	else
		return FAIL;
}

uint8 hdlr_Sub (void){
	uint8 a = 10;
	uint8 b = 4;
	uint8 c = 0;

	c = u8fn_calHandler(a, b, u8fn_sub);

	if (6 == c)
		return PASS;
	else
		return FAIL;
}

