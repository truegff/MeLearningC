#include <stdio.h>

int main(void) {
	float length, width, height;

	printf("Input length: ");
	scanf("%f", &length);

	printf("Input width: ");
	scanf("%f", &width);

	printf("Input height: ");
	scanf("%f", &height);

	printf("L*W*H = %f\n", length * width * height);

	return 0;
}
