#include <ctype.h>
#include <stdio.h>

int main(void)
{
	printf("Enter a word: ");

	char ch;
	int value = 0;

	while ((ch = getchar()) != '\n') {
		switch (toupper(ch)) {
			case 'Q': case 'Z':
				value += 10;
				break;
			case 'J': case 'X':
				value += 8;
				break;
			case 'K':
				value += 5;
				break;
			case 'F': case 'H': case 'V': case 'W': case 'Y':
				value += 4;
				break;
			case 'B': case 'C': case 'M': case 'P':
				value += 3;
				break;
			case 'D': case 'G':
				value += 2;
				break;
			default:
				value += 1;
				break;
		}
	}

	printf("Scrabble value: %d\n", value);

	return 0;
}
