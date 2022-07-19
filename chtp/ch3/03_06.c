#include <stdio.h>

int main(void) {
	int passes = 0, failures = 0, student = 1;

	while (student <= 10) {
		printf("Enter result (1=pass, 2=fail): ");
		int result = 0;
		scanf("%d", &result);

		if (result == 1) {
			passes += 1;
		} else {
			failures += 1;
		}
		student += 1;
	}

	printf("Passed %d\n", passes);
	printf("Failed %d\n", failures);

	if (passes > 8) {
		puts("Bonus to instructor!");
	}
}
