#include <stdio.h>

int main(void) {
	int num;

	printf("Enter an integer: ");
	scanf("%d", &num);

	if (num < 0) printf("Number is negative.\n");
	else printf("Number is non-negative.\n");

	return 0;
}