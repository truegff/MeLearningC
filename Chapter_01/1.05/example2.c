/* This program demonstrates rectangle area  calculation. */
#include <stdio.h>

int main(void) {
	/* Declaration of variables */
	int len, width;

	/* Reading the sides' sizes */
	printf("Enter length: ");
	scanf("%d", &len);

	printf("Enter width: ");
	scanf("%d", &width);

	/* Printing the calculated area. */
	printf("Area is %d\n", len * width);

	/* Quitting. */
	return 0;
}
