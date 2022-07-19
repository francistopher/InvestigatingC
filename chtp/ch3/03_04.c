#include <stdio.h> // include input/output stuff from standard

int main(void) { // where it starts
	int total = 0, counter = 0;

	printf("%s", "Enter grade, -1 to end: ");
	int grade = 0;
	scanf("%d", &grade);

	while (grade != -1) {
		total += grade;
		counter += 1;

		printf("%s", "Enter grade, -1 to end: ");
		scanf("%d", &grade);
	}

	if (counter != 0) {
		double average = (double) total / counter;
		printf("Class average is %.2f\n", average); // 2 decimal places
	} else {
		puts("No grades were entered"); // puts safer way
	}
}
