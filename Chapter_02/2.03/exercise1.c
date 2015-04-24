#include <stdio.h>

int main(void) {
	int action, num1, num2;

	printf("Addition == 1, Substraction == 2\n");
	printf("Your choice: ");
	scanf("%d", &action);

	if (action == 1) {
		printf("Input first number: ");
		scanf("%d", &num1);
		printf("Input second number: ");
		scanf("%d", &num2);
		printf("Result (A + B) = %d\n", num1 + num2);
	} else if (action == 2) {
		printf("Input first number: ");
		scanf("%d", &num1);
		printf("Input second number: ");
		scanf("%d", &num2);
		printf("Result (A - B) = %d\n", num1 - num2);
	} else {
		printf("Incorrect selection.\n");
	}
}
