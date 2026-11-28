#include <stdio.h>

int main(void)
{
	int m, n, rem;

	printf("Enter two integers: ");
	scanf("%d%d", &m, &n);

	if (m < 0 || n < 0) {
		printf("Do not use negative values\n");
		return 1;
	}

	while (n != 0) {
		rem = m % n;
		m = n;
		n = rem;
	}

	printf("Greatest common divisor: %d\n", m);

	return 0;
}
