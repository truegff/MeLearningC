/*
	This program demonstrates reading int and float numbers into variables from stdin,
	later outputting them to stdout.
*/
#include <stdio.h>

int main(void) {
	int num;
	float f;

	/* Printing input invitation message */
	printf("Enter an integer: ");
	/* Reading the int value */
	scanf("%d", &num);

	/* Printing input invitation message */
	printf("Enter a floating point number: ");
	/* Reading the float value */
	scanf("%f", &f);

	/* Printing the int number */
	printf("integer: %d\n", num);

	/* Printing the float number */
	printf("float: %f\n", f);

	return 0;
}
