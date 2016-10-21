#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "frame_manager.h"
#include "stack.h"
#include "frame.h"
#include <string.h>

/* Defining a function that will initialise the stack structure by
using malloc to assign a space for it in memory using a newStack 
pointer, and initialising the size (as declared in the Stack struct)
value to 0.
*/
Stack *createStack() {
	Stack *newStack = malloc(sizeof(Stack));
	newStack->size = 0;
	return newStack;
}

/* Defining a function which will check if a stack is empty or not
by using boolean to check if the size being equal to 0 is true of 
false. This will be used in a multitude of future functions. 
*/
bool isEmpty(Stack* stk) {
	if(stk->size == 0) {
		return true;
	}
	else {
		return false;
	}
}
/*
Daniel Kelly
150024764
*/
	
/* Defining a function which will be used to add data to
the stack in the form of a frame. It pushes the data one
increment into the stack and assigns the new frame as the new
head of the stack. It then increases the size by one. 
*/	
void push(Stack* stk, int x) {
	Frame *newFrame = getFrame();
	newFrame->data = x;
	newFrame->next = stk->head;
	stk->head = newFrame;	
	stk->size ++;
	printf("The data has been successfully added to the stack. \n");
}

/* Defining a function which will be used to remove data 
from the top of a stack. It will use the getNext() function to
assign the next frame as the new head and remove the current head.
*/
int pop(Stack* stk) {
	if(isEmpty(stk) == true) {
		printf("ERROR: The stack is empty! (Error code: -1)\n");
		return -1;
	}
	else {
		Frame *oldFrame = stk->head;
		stk->head = oldFrame->next;
		int oldFrameData = oldFrame->data;

		releaseFrame(oldFrame);
		stk->size--;
		return oldFrameData;
	}
}

/* Defining a function which will use memset to free up the 
space reserved in memory for the pointer of the stack which
is being removed from the system.  
*/
void releaseStack(Stack* stk) {
	memset(stk, 0, sizeof(Stack));
	free(stk);
	printf("The stack has been released.\n");	
}

