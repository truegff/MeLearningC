#include <stdio.h>

double convert(double);

int main(void) {
	double earth_weight, moon_weight;
	printf("Input earth weight: ");
	scanf("%lf", &earth_weight);
	moon_weight = convert(earth_weight);
	printf("Moon weight: %lf\n", moon_weight);
}

double convert(double earth_weight) {
	return earth_weight * 0.17;
}
