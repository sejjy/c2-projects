#include <stdio.h>

int substitute(int x);
int power(int x, int n);

int main(void)
{
	int x;

	printf("Enter a value for x: ");
	scanf("%d", &x);

	printf("Result: %d\n", substitute(x));

	return 0;
}

int substitute(int x)
{
	return 3 * power(x, 5) + 2 * power(x, 4) - 5 * power(x, 3) - power(x, 2) +
		7 * x - 6;
}

int power(int x, int n)
{
	if (n == 0)
		return 1;
	return x * power(x, n - 1);
}
