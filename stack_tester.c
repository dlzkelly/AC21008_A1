/*
Daniel Kelly
150024764
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
/* Creating a main function which will be the designated start of the program.
It will be used here to test that the different functions in the program work
as intended. 
*/

int main() {
	Stack* stk = createStack();

	//Shows that pushing and popping a single number works.
	push(stk, 1);
	printf("Popped data: %d \n", pop(stk));

	//Shows that pushing and popping multiple numbers is performed in a stack order. 
	push(stk, 1);
	push(stk, 7);
	push(stk, 10000);
	printf("Popped data: %d \n", pop(stk));
	printf("Popped data: %d \n", pop(stk));
	printf("Popped data: %d \n", pop(stk));
	
	//Shows that attempting to pop from an empty stack will return an error message.
	printf("Popped data: %d \n", pop(stk));

	//Shows that the isEmpty function works correctly.
	printf("%d\n", isEmpty(stk));
	push(stk, 1);
	printf("%d\n", isEmpty(stk));

	//Shows that the releaseFrame function works correctly. 
	pop(stk);	
	releaseStack(stk);
}
