#include <stdio.h>

int main(void) {
	int answer;
	printf("What is 10+14 ? ");
	scanf("%d", &answer);
	if (answer == 10+14) {
		printf("Correct.\n");
	} else {
		printf("Wrong.\nThe answer is = %d\n", 10+14);
	}
	return 0;
}
