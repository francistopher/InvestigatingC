#include <stdio.h>
#include <math.h>

// economics 101
int main(void) {
	double principal = 1000.0, rate = 0.05;

	printf("%4s%21s\n", "Year", "Amount on deposit");

	for (int year = 1; year <= 10; ++year) {
		double amount = principal * pow(1.0 + rate, year);
		printf("%4d%21.2f\n", year, amount);
	}
}	
