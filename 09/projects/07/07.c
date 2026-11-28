#include <stdio.h>

int power(int x, int n);

int main(void)
{
	int x, n;

	printf("Solve for x^n\n");

	printf("Enter x and n: ");
	scanf("%d %d", &x, &n);

	printf("%d^%d = %d\n", x, n, power(x, n));

	return 0;
}

int power(int x, int n)
{
	if (n == 0) {
		return 1;
	}
	else if (n % 2 == 0) {
		int y = power(x, n / 2);
		return y * y;
	}
	else {
		return x * power(x, n - 1);
	}
}
