#include <stdio.h>

double o_to_c(double);

int main(void) {
	double ounces, cups;
	printf("Input number of ounces to convert: ");
	scanf("%lf", &ounces);
	cups = o_to_c(ounces);
	printf("Number of cups calculated: %lf\n", cups);
}

double o_to_c(double ounces) {
	return ounces / 8;
}
