/* This program has three functions */
#include <stdio.h>

/* prototypes */
void func1(void);
void func2(void);

int main(void) {
	func2();
	printf("3\n");

	return 0;
}

void func2(void) {
	func1();
	printf("2");
}

void func1(void) {
	printf("1");
}
