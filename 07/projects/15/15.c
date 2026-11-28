#include <stdio.h>

int main(void)
{
	int n;

	printf("Enter a positive integer: ");
	scanf("%d", &n);

	long double factorial = 1.0L;

	for (int i = n; i > 1; i--) {
		factorial *= i;
	}

	printf("Factorial of %d: %.0Lf\n", n, factorial);

	return 0;
}

// (a) short:          7
// (b) int:           12
// (c) long:          20
// (d) long long:     20
// (e) float:         34
// (f) double:       170
// (g) long double: 1754
