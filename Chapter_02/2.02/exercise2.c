#include <stdio.h>

int main(void) {
	int integer;
	printf("Please input integer: ");
	scanf("%d", &integer);
	if (integer % 2) printf("Integer is odd.\n");
	else printf("Integer is even.\n");

	return 0;
}