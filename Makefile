#Daniel Kelly
#150024764
        
#Function which makes compiler more pedantic
CFLAGS = -Wall -Wextra -pedantic

#Function which will create Assignment1 file using my c files
all: 
	cc stack.c frame_manager.c stack_tester.c -o Assignment1

#Function which will remove forcibly the Assignment1 file
clean:
	rm -f Assignment1

#Function which will run the Assignment1 file
run:
	./Assignment1
