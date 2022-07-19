#include <stdio.h>

int main(void) {
	int counter = 1;

	do {
		printf("%d ", counter);
	} while (++counter <= 5);
	puts("");
}
