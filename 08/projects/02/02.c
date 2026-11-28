/* Checks numbers for repeated digits */

#include <stdio.h>

#define DIGITS 10

int main(void)
{
	long number;

	printf("Enter a number: ");
	scanf("%ld", &number);

	int digit, occur[DIGITS];

	while (number > 0) {
		digit = number % 10;
		occur[digit]++;
		number /= 10;
	}

	printf("Digit:      ");
	for (int i = 0; i < DIGITS; i++) {
		printf("%3d", i);
	}

	printf("\nOccurrences:");
	for (int i = 0; i < DIGITS; i++) {
		printf("%3d", occur[i]);
	}
	printf("\n");

	return 0;
}
