#include <stdio.h>

int main(void) {
	for (int x = 1; x <= 10; ++x) {
		if (x == 5) {
			continue;
		}
		printf("%d ", x);
	}
	puts("\nUsed continue to skip printing the value 5");
}
