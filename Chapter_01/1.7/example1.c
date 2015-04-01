/* A program with two functions */
#include <stdio.h>

/* prototype for func1() function */
void func1(void);

int main(void) {
	printf("I ");
	func1();
	printf("C.\n");

	return 0;
}


void func1(void) {
	printf("like ");
}

