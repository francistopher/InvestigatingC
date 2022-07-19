#include <stdio.h>

int main(void) {
	// seems like clang has the latest version of c
	for (int counter = 1; counter <= 5; ++counter) { 
		printf("%d ", counter);
	}

	puts("");
}
