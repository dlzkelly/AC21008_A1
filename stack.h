/*
Daniel Kelly
150024764
*/

#ifndef STACK_H_
#define STACK_H_
#include <stdbool.h>
#include "frame.h"

/* Creating a new struct for a Stack which will contain 
the size of the stack as an integer and the head of the
stack as a frame pointer. 
*/
typedef struct Stack Stack;
struct Stack{
	int size;
	Frame* head;
};	

/* Declaring function prototypes for the functions which
will be required for the Stack data structure.
*/
Stack* createStack();
bool isEmpty(Stack* stk);
void push(Stack* stk, int x);
int pop(Stack* stk);
void releaseStack(Stack* stk);

#endif
