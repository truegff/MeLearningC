#include <stdio.h>

int main(void) {
	int num1, num2, action, result;

	printf("Input first number: ");
	scanf("%d", &num1);

	printf("Input second number: ");
	scanf("%d", &num2);

	printf("Input action (1==+, 2==*): ");
	scanf("%d", &action);

	if (action == 1) result = num1 + num2;
	else result = num1 * num2;

	printf("Result: %d\n", result);

	return 0;
}