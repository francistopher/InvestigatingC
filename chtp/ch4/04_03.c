#include <stdio.h>

int main(void) {
	int sum = 0;

	for (int number = 2; number <= 100; number += 2) { // can increment by any value
		sum += number;
	}

	printf("Sum is %d\n", sum);
}
