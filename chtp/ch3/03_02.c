#include <stdio.h> // including standard input/output stuff

int main(void) { // where it starts

	int total = 0, counter = 1; // initialize ints

	while (counter <= 10) { // while loop
		printf("%s", "Enter grade: "); // print a string
		int grade = 0;
		scanf("%d", &grade); // input data into int
		total += grade;
		counter += 1;
	}

	int average = total / 10;
	printf("Class average is %d\n", average); // print int
	return 0; // no errors
}

