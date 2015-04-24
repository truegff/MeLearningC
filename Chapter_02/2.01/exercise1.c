#include <stdio.h>

int main(void) {
	int integer;
	printf("Please input integer: ");
	scanf("%d", &integer);
	if (integer % 2 == 1) printf("Integer is odd.\n");
	if (integer % 2 == 0) printf("Integer is even.\n");

	return 0;
}
