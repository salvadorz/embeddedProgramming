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

	if (error >= 1) {
		return FAIL;
	}

	return PASS;
}

uint8 use_Sum (void){
	uint8 a = 10;
	uint8 b = 43;
	uint8 c = 0;

	u8ptrfn_t u8CallbckCal1 = u8fn_sum;
	c = u8CallbckCal1(a, b);

	if (53 == c)
		return PASS;
	else
		return FAIL;
}

uint8 use_Sub (void){
	uint8 a = 10;
	uint8 b = 43;
	uint8 c = 0;

	u8ptrfn_t u8CallbckCal2 = u8fn_sub;
	c = u8CallbckCal2(b, a);

	if (33 == c)
		return PASS;
	else
		return FAIL;
}

uint8 use_Mul (void){
	uint8 a = 7;
	uint8 b = 4;
	uint8 c = 0;

	u8ptrfn_t u8CallbckCal3 = u8fn_mul;
	c = u8CallbckCal3(a, b);

	if (28 == c)
		return PASS;
	else
		return FAIL;
}

uint8 use_Div (void){
	uint8 a = 10;
	uint8 b = 5;
	uint8 c = 0;

	u8ptrfn_t u8CallbckCal4 = u8fn_div;
	c = u8CallbckCal4(a, b);

	if (2 == c)
		return PASS;
	else
		return FAIL;
}

