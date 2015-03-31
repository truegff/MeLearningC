#include <stdio.h>

int main(void) {
	int num;
	float f;

	printf("Enter an integer: ");
	scanf("%d", &num);

	printf("Enter a floating point number: ");
	scanf("%f", &f);

	printf("integer: %d\n", num);
	printf("float: %f\n", f);

	return 0;
}
