#include <stdio.h>

double convert(double);

int main(void) {
	double input, result;

	printf("Please input USD value:");
	scanf("%lf", &input);

	result = convert(input);
	printf("GBP value is: %lf\n", result);

	return 0; 
}

double convert(double a) {
	return a/2;
}
