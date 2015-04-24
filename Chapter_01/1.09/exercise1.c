#include <stdio.h>

void outnum(int);

int main(void) {
	outnum(1);
	outnum(2);
	outnum(3);

	return 0;
}

void outnum(int arg0) {
	printf("%d\n", arg0);
	return;
}
