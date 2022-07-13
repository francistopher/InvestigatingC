#include <stdio.h> // preprocessor import contents of the standard input output header

int main(void) {
	printf("Enter two integers and I will tell you\n"); // output statements
	printf("the relationships they satisfy: ");
	
	int number1 = 0, number2 = 0; // initializing 2 values at the same time

	scanf("%d %d", &number1, &number2); // reading in 2 values at the same time

	if (number1 == number2) {
		printf("%d is equal to %d\n", number1, number2);
	}

	if (number1 != number2) {
		printf("%d is not equal to %d\n", number1, number2);
	}

	if (number1 < number2) {
		printf("%d is less than %d\n", number1, number2);
	}

	if (number1 > number2) {
		printf("%d is greater than %d\n", number1, number2);
	}

	if (number1 <= number2) {
		printf("%d is less than or equal to %d\n", number1, number2);
	}

	if (number1 >= number2) {
		printf("%d is greater than or equal to %d\n", number1, number2);
	}

}
