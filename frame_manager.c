/*
Daniel Kelly
150024764
*/

#include "frame_manager.h"
#include "frame.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Defining the function getFrame() which uses malloc to reserve
a space in memory the size of a frame for later use and returns
a pointer to this space. 
*/
Frame* getFrame() {
	Frame *frameSize = malloc(sizeof(Frame));
	return frameSize;
}

/* Defining the function releaseFrame which uses memset to take
the previously created frame and free up the space that was
reserved for it in memory. 
*/
void releaseFrame(Frame *oldFrame) {
	memset(oldFrame, 0, sizeof(Frame));
	free(oldFrame);	
}

	
