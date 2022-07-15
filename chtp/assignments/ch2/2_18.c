/*
 * Comparing Integers
 */

#include <stdio.h>

int main(void) {
	int num1, num2;
	printf("Enter two integers back to back with a space in between: ");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
		printf("%d is larger", num1);
	if (num2 > num1)
		printf("%d is larger", num2);
	if (num2 == num1)
		printf("These numbers are equal");
	printf("\n");
	return 0;
}
