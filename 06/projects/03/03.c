#include <stdio.h>

int main(void)
{
	int numerator, denominator;

	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);


	if (denominator == 0) {
		printf("Error: division by zero\n");
		return 1;
	}

	int n = numerator, d = denominator, rem;

	while (d != 0) {
		rem = n % d;
		n = d;
		d = rem;
	}

	numerator /= n;
	denominator /= n;

	printf("In lowest terms: %d/%d\n", numerator, denominator);

	return 0;
}
