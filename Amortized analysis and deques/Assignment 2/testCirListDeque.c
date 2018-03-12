#include "cirListDeque.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
struct cirListDeque *ptr;
	ptr = createCirListDeque();
	printf("deque sentinel initialized.\n");
	if(isEmptyCirListDeque(ptr) == 1)
	{
		printf("Deque is empty.\n");
	}

// Output: 20, 9.99999, 0.0001, 2.1
	addFrontCirListDeque(ptr, 9.99999);
	addFrontCirListDeque(ptr, 20);
	addBackCirListDeque(ptr, 0.0001);
	addBackCirListDeque(ptr, 2.1);
	printCirListDeque(ptr);

// Output: 20.000000, 9.999990, 0.000100,
	removeBackCirListDeque(ptr);	
	printCirListDeque(ptr);

// Output: 9.999990, 0.000100,
	removeFrontCirListDeque(ptr);
	printCirListDeque(ptr);

// Output: Front is: 9.999990
	printf("Front is: %f\n", frontCirListDeque(ptr));

// Output: Back is: 0.000100
	printf("Back is: %f\n", backCirListDeque(ptr));



// Free memory
	freeCirListDeque(ptr);        

	/* Test your linked list in here! */
	/* Try to write the tests yourself */

	return 0;
}


