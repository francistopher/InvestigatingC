#include <stdio.h>

unsigned long long int fibonacci(int n);

int main(void) {
	for (int number = 0; number <= 10; number++) {
		printf("Fibonacci(%d) = %llu\n", number, fibonacci(number));
	}
	printf("Fibonacci(20) = %llu\n", fibonacci(20));
	printf("Fibonacci(30) = %llu\n", fibonacci(30));
	printf("Fibonacci(40) = %llu\n", fibonacci(40));
	return 0;
}

unsigned long long int fibonacci(int n) {
	if (0 == n || 1 == n) {
		return n;
	} else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
