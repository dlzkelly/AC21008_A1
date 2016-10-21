/*
Daniel Kelly
150024764
*/

#ifndef FRAME_H_
#define FRAME_H_

/* Creating a new struct for a Frame which will contain 
data as an integer and next as a frame pointer. 
*/
typedef struct Frame Frame;
struct Frame {
	int data;
	Frame* next;
};	

#endif
