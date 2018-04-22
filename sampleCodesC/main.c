/*
 * main.c
 *
 *  Created on: 09/04/2018
 *      Author: John
 */

#include "common.h"
#include "App/app_cfg.h"
#include "App/test_Math.h"
#include "Pointer/pointer.h"

int main(void) {

#ifdef TEST_PTR
	TEST_PRT();
#endif

	puts("!!!Hello World!!!");


#ifdef TEST_MATH
	if(test_Math() == PASS){
		printf("TEST END SUCCESFUL\n");
	}
	else {
		printf("TEST END WITH ERRORS\n");
	}
#endif


}
