#include <stdio.h>

#define MAX_DIGITS 10
#define ROWS 4
#define MAX_COLUMNS (MAX_DIGITS * 4)

const int segments[10][7] = {
	{1, 1, 1, 1, 1, 1, 0}, // 0
	{0, 1, 1, 0, 0, 0, 0}, // 1
	{1, 1, 0, 1, 1, 0, 1}, // 2
	{1, 1, 1, 1, 0, 0, 1}, // 3
	{0, 1, 1, 0, 0, 1, 1}, // 4
	{1, 0, 1, 1, 0, 1, 1}, // 5
	{1, 0, 1, 1, 1, 1, 1}, // 6
	{1, 1, 1, 0, 0, 0, 0}, // 7
	{1, 1, 1, 1, 1, 1, 1}, // 8
	{1, 1, 1, 1, 0, 1, 1}, // 9
};
char digits[ROWS][MAX_COLUMNS];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
	clear_digits_array();

	printf("Enter a number: ");

	int position = 0;
	int digit;

	while (position < MAX_DIGITS && (digit = getchar()) != '\n') {
		if (digit >= '0' && digit <= '9') {
			process_digit(digit - '0', position);
			position++;
		}
	}

	print_digits_array();

	return 0;
}

void clear_digits_array(void)
{
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < MAX_COLUMNS; j++)
			digits[i][j] = ' ';
}

void process_digit(int digit, int position)
{
	int start = position * 4;

	// row 1
	if (segments[digit][0]) digits[0][start + 1] = '_';

	// row 2
	if (segments[digit][5]) digits[1][start]     = '|';
	if (segments[digit][6]) digits[1][start + 1] = '_';
	if (segments[digit][1]) digits[1][start + 2] = '|';

	// row 3
	if (segments[digit][4]) digits[2][start]     = '|';
	if (segments[digit][3]) digits[2][start + 1] = '_';
	if (segments[digit][2]) digits[2][start + 2] = '|';

	// row 4 is blank since the example uses only 3 rows
}

void print_digits_array(void)
{
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < MAX_COLUMNS; j++)
			printf("%c", digits[i][j]);
		printf("\n");
	}
}
