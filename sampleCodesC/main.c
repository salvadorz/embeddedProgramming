/*
 * main.c
 *
 *  Created on: 09/04/2018
 *      Author: John
 */

#include "common.h"
#include "App/test_Math.h"


int main(void) {

	puts("!!!Hello World!!!");

	if(test_Math() == PASS){
		printf("TEST END SUCCESFUL\n");
	}
	else {
		printf("TEST END WITH ERRORS\n");
	}



}
