/*
 * pointer.c
 *
 *  Created on: 11/04/2018
 *      Author: John
 */

#include "pointer.h"

void swapPtr(int* ptrA, int* ptrB){
	int tmp = *ptrA;

	printf("The address of the &ptrA is:\t %p -> %p\n", &ptrA, ptrA);
	printf("The address of the ptrA is:\t %p -> %d\n", ptrA, *ptrA);
	printf("The address of the &ptrB is:\t %p -> %p\n", &ptrB, ptrB);
	printf("The address of the ptrB is:\t %p -> %d\n", ptrB, *ptrB);

	*ptrA = *ptrB;
	*ptrB = tmp;

}

void useSwap(void){
	int a = 5;
	int b = 8;
	printf("The address of &a is:\t\t %p -> %d \n", &a, a);
	printf("The address of &b is:\t\t %p -> %d \n", &b, b);

	swapPtr(&a, &b);

	printf("The address of &a is:\t\t %p -> %d \n", &a, a);
	printf("The address of &b is:\t\t %p -> %d \n", &b, b);
}

void vfn_CreatesMsg(void){
	char msg[] = {'F','u','n','N','\0'};

	printf("The address of the ptr &msg is: %p or %p \n", &msg, msg);
	printf("The address where start msg is: %p -> %c \n", msg, msg[0]);
	printf("I can access to the msg as *(msg+0)='%c' or as array msg[1]='%c'\n", *msg, msg[1]);
	printf("I can access to the msg as *(msg+2)='%c' or as array msg[3]='%c'\n", *(msg+2), msg[3]);

	vfn_ReceivesPtrMsg(msg);

}

void vfn_ReceivesPtrMsg(char *sMsg){
	printf("Receiving a prt\n");
	printf("The address of the ptr &sMsg is:\t %p -> %p \n", &sMsg, sMsg);
	printf("The address where start sMsg is:\t %p -> %c \n", sMsg, sMsg[0]);
	printf("I can access to the sMsg as *(sMsg+0)='%c' or as array sMsg[0]='%c'\n", *sMsg, sMsg[1]);
	printf("I can access to the sMsg as *(sMsg+1)='%c' or as array sMsg[1]='%c'\n",	*(sMsg+2), sMsg[3]);

}

void mallocPtr(uint8 ** p){
	printf("The address of the ptr &p is: %p -> %p\n", &p, p);
	*p = malloc(sizeof(uint8));
	printf("The address of the ptr &p is: %p -> %p -> %p\n", &p, p, *p);
}

void useMallocPtr(void){
	uint8 * u8ptr = NULL;
	//u8ptr = malloc(sizeof(uint8));
	printf("The address of the ptr &u8ptr is: %p -> %p\n", &u8ptr, u8ptr);
	mallocPtr(&u8ptr);
	printf("The address of the ptr &u8ptr is: %p -> %p -> %d \n", &u8ptr, u8ptr, *u8ptr);//random number
	//*u8ptr = 6;
	//printf("The address of the ptr &u8ptr is: %p -> %p -> %d \n", &u8ptr, u8ptr, *u8ptr);
	free(u8ptr);
}
void useMalloc(void){
	uint8 * u8ptr = NULL;

	printf("The address of the ptr &u8ptr is: %p -> %p\n", &u8ptr, u8ptr);
	u8ptr = malloc(sizeof(uint8));
	printf("The address of the ptr &u8ptr is: %p -> %p -> %d \n", &u8ptr, u8ptr, *u8ptr);//random number
	*u8ptr = 6;
	printf("The address of the ptr &u8ptr is: %p -> %p -> %d \n", &u8ptr, u8ptr, *u8ptr);
	free(u8ptr); //avoiding memory leak
}

void vfnTestPrt(void){
	//vfn_CreatesMsg();
	//useSwap();
	//useMalloc();
	useMallocPtr();

}
