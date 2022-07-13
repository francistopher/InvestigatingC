#include <stdio.h> // preprocessor includes content from the standard input/output header

int main(void) { // where the program starts
	int integer1 = 0; // initialization
	int integer2 = 0;

	printf("Enter first integer: ");
	scanf("%d", &integer1); // reads an integer into its address

	printf("Enter second integer: ");
	scanf("%d", &integer2);

	int sum = 0; // initialization
	sum = integer1 + integer2; // assignment

	printf("Sum is %d\n", sum);
}
