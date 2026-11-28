/* Checks numbers for repeated digits */

#include <stdio.h>

#define DIGITS 10

int main(void)
{
	long number, n;
	int digit, occur[DIGITS], i;

	do {
		printf("Enter a number: ");
		scanf("%ld", &number);

		n = number;
		while (n > 0) {
			digit = n % 10;
			occur[digit]++;
			n /= 10;
		}

		printf("Digit:      ");
		for (i = 0; i < DIGITS; i++) {
			printf("%3d", i);
		}

		printf("\nOccurrences:");
		for (i = 0; i < DIGITS; i++) {
			printf("%3d", occur[i]);
			occur[i] = 0;
		}
		printf("\n");
	} while (number > 0);

	return 0;
}
