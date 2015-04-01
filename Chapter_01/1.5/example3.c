/* This program demonstrates single operand negation operation */
#include <stdio.h>

int main(void) {
	int i;

	i = 10;

	/* i is assigned a negated value of itself */
	i = -i;

	printf("This is negated \"i\": %d\n", i);

	return 0;
}
