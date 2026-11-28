#include <stdio.h>

int main(void)
{
	float epsilon;

	printf("Enter a small floating-point number: ");
	scanf("%f", &epsilon);

	printf("\ne = 1");

	int factorial = 1, i = 1;
	float term = 1.0f, e = 1.0f;

	for (;;) {
		factorial *= i;
		term = 1.0f / factorial;

		if (term < epsilon)
			break;

		printf(" + 1/%d!", i);

		e += term;
		i++;
	}

	printf("\ne = %f\n", e);

	return 0;
}
