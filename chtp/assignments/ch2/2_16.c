/*
 * Arithmetic 
 */

#include <stdio.h>

int main(void) {
	int integer1 = 0, integer2 = 0;
	printf("Enter 2 integers: "); // apparently its more secure
	scanf("%d %d", &integer1, &integer2);
	int sum = integer1 + integer2;
	int product = integer1 * integer2;
	int difference = integer1 - integer2;
	int quotient = integer1 / integer2;
	int remainder = integer1 % integer2;

	printf("The sum of %d and %d is %d\n", integer1, integer2, sum);
	printf("The product of %d and %d is %d\n", integer1, integer2, product);
	printf("The difference of %d and %d is %d\n", integer1, integer2, difference);
	printf("The quotient of %d and %d is %d\n", integer1, integer2, quotient);
	printf("The remainder of %d and %d is %d\n", integer1, integer2, remainder);

}
