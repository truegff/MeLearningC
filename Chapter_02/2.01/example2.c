#include <stdio.h>

int main(void) {
	float num;
	int choice;

	printf("Enter value: ");
	scanf("%f", &num);

	printf("1: Feet to Meters, 2: Meters to Feet.\n");
	scanf("%d", &choice);

	if (choice == 1) printf("%f\n", num / 3.28);
	if (choice == 2) printf("%f\n", num * 3.28);

	return 0;
}
