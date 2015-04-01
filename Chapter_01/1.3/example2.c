/*
	This program demonstrates multiple variable declaration,
	assignment of constant values and output to console.
*/
#include <stdio.h>

int main(void) {
	/* variable declaration */
	char ch;
	float f;
	double d;

	/* variable value assignment */
	ch = 'X';
	f = 100.123;
	d = 123.009;

	/* variable value output */
	printf("ch is %c\n", ch);
	printf("f is %f\n", f);
	printf("d is %f\n", d);

	return 0;
}
