/*
Daniel Kelly
150024764
*/

#ifndef FRAME_MANAGER_H_
#define FRAME_MANAGER_H_
#include "frame.h"

/* Declaring a function prototype getFrame which will 
be used to obtain a frame from a pointer address in 
memory.
*/
Frame *getFrame();

/* Declaring a function prototype releaseFrame which
will be used to free up the space in memory which is
reserved for the previously created frame. 
*/
void releaseFrame(Frame *oldFrame);

#endif
