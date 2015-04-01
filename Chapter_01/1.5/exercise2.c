/* This program demonstrates calculation of seconds in the provided number of days. */
#include <stdio.h>

int main(void) {
	int number_of_days;

	printf("Input number of days: ");
	scanf("%d", &number_of_days);

	printf("%d days = %d seconds\n", number_of_days, number_of_days * 24 * 60 * 60);

	return 0;
}
