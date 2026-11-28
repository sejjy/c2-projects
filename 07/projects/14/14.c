#include <math.h>
#include <stdio.h>

int main(void)
{
	double x;

	printf("Enter a positive number: ");
	scanf("%lf", &x);

	double y, ny = 1.0;

	for (;;) {
		y = ny;
		ny = (y + (x / y)) / 2;

		if (fabs(y - ny) < (0.00001 * y)) {
			break;
		}
	}

	printf("Square root: %.5lf\n", ny);

	return 0;
}
