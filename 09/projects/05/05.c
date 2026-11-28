#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

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

	char magic_square[n][n];

	create_magic_square(n, magic_square);
	print_magic_square(n, magic_square);

	return 0;
}

void create_magic_square(int n, char magic_square[n][n])
{
	int i, j;

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			magic_square[i][j] = 0;

	int row = 0;
	int col = n / 2;

	for (i = 1; i <= n * n; i++) {
		magic_square[row][col] = i;

		row = (row - 1 + n) % n;
		col = (col + 1) % n;

		if (magic_square[row][col] != 0) {
			row = (row + 2) % n;
			col = (col - 1 + n) % n;
		}
	}
}

void print_magic_square(int n, char magic_square[n][n])
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("%5d", magic_square[i][j]);
		printf("\n");
	}
}
