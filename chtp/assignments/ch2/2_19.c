/*
 * Arithmetic, Largest value and Smallest value
 */

#include <stdio.h>

int main(void)
{
	printf("Enter three different integers: ");
	int integer1, integer2, integer3;
	scanf("%d %d %d", &integer1, &integer2, &integer3);

	int sum = integer1 + integer2 + integer3;

	double average = (integer1 + integer2 + integer3) / 3.0;

	int product = integer1 * integer2 * integer3;

	int smallest = (integer1 < integer2) ? integer1 : integer2;
	smallest = (integer3 < smallest) ? integer3 : smallest;

	int largest = (integer1 > integer2) ? integer1 : integer2;
	largest = (integer3 > largest) ? integer3 : largest;

	printf("Sum is %d\n", sum);
	printf("Average is %.0f\n", average);
	printf("Product is %d\n", product);
	printf("Smallest is %d\n", smallest);
	printf("Largest is %d\n", largest);

	return 0;
}
