#include <ctype.h>
#include <stdio.h>

int main(void)
{
	printf("Enter a sentence: ");

	char ch;
	int vowels = 0;

	while ((ch = getchar()) != '\n') {
		switch (toupper(ch)) {
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				vowels += 1;
				break;
			default:
				break;
		}
	}

	printf("Your sentence contains %d vowels\n", vowels);

	return 0;
}
