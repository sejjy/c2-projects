#include <stdio.h>

#define ROWS 5
#define COLS 5

int main(void)
{
	int num[ROWS][COLS];
	int i, j;

	for (i = 0; i < ROWS; i++) {
		printf("Enter row %d: ", i + 1);
		for (j = 0; j < COLS; j++) {
			scanf("%d", &num[i][j]);
		}
	}

	int total;

	printf("\nRow totals:");
	for (i = 0; i < ROWS; i++) {
		total = 0;
		for (j = 0; j < COLS; j++) {
			total += num[i][j];
		}
		printf(" %d", total);
	}
	printf("\n");

	printf("Column totals:");
	for (i = 0; i < COLS; i++) {
		total = 0;
		for (j = 0; j < ROWS; j++) {
			total += num[j][i];
		}
		printf(" %d", total);
	}
	printf("\n");

	return 0;
}
