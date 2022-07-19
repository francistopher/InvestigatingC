#include <stdio.h>
#include <stdlib.h>
#include <time.h> // added to be trully random

int main(void) {
	srand(time(NULL)); // added to be trully random
	for (int i = 1; i <= 10; ++i) {
		printf("%d  ", 1 + (rand() % 6));
	}

	puts("");
}
