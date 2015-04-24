/* This program prints out a string of text with help of functions */
#include <stdio.h>

/* prototypes */
void function1(void);
void function2(void);
void function3(void);

int main(void) {
	function3();
	return 0;
}

void function3(void) {
	function2();
	printf(".\n");
}

void function2(void) {
	function1();
	printf(", the sunshine patriot");
}

void function1(void) {
	printf("The summer soldier");
}
