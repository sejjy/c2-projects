#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int values[26] = {
		1,  3,  3,  2,  1,  4,  2,  4,  1,  8,
		5,  1,  3,  1,  1,  3, 10,  1,  1,  1,
		1,  4,  4,  8,  4, 10
	};

	char c;
	int value = 0;

	printf("Enter a word: ");

	while ((c = getchar()) != '\n') {
		value += values[toupper(c) - 'A'];
	}

	printf("Scrabble value: %d\n", value);

	return 0;
}
