/* This program demonstrates reading two floats and later printing out their sum. */
#include <stdio.h>

int main(void) {
	float number1, number2;

	printf("Input float 1: ");
	scanf("%f", &number1);

	printf("Input float 2: ");
	scanf("%f", &number2);

	printf("%f + %f = %f\n", number1, number2, number1 + number2);

	return 0;
}
