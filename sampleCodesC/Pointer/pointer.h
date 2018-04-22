/*
 * pointer.h
 *
 *  Created on: 11/04/2018
 *      Author: John
 */

#ifndef POINTER_POINTER_H_
#define POINTER_POINTER_H_

#include "common.h"

#define TEST_PRT()	vfnTestPrt()

void swapPtr(int *a, int *b);

void useSwap(void);


void vfn_CreatesMsg(void);
void vfn_ReceivesPtrMsg(char *sMsg);

void mallocPtr(uint8 ** p);
void useMallocPtr(void);
void useMalloc(void);

void vfnTestPrt(void);


#endif /* POINTER_POINTER_H_ */
