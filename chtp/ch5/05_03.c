#include <stdio.h>

int square(int x);

int main() {
	int a = 10;
	printf("%d squared: %d\n", a, square(a));
}

int square(int x) {
	return x * x;
}
