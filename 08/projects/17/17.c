#include <stdio.h>

int main(void)
{
	int n;

	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &n);

	if (n < 1 || n > 99 || n % 2 == 0) {
		printf("Invalid size.\n");
		return 1;
	}

	int i, j;
	int array[n][n];

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			array[i][j] = 0;
		}
	}

	int row = 0;
	int col = n / 2;

	for (i = 1; i <= n * n; i++) {
		array[row][col] = i;

		row = (row - 1 + n) % n;
		col = (col + 1) % n;

		if (array[row][col] != 0) {
			row = (row + 2) % n;
			col = (col - 1 + n) % n;
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%5d", array[i][j]);
		printf("\n");
	}

	return 0;
}
