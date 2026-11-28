#include <ctype.h>
#include <stdio.h>

#define LETTERS 26

int main(void)
{
	printf("Enter first word: ");

	int c;
	int input[LETTERS];

	while((c = getchar()) != '\n') {
		if (isalpha(c)) {
			c = tolower(c) - 'a';
			input[c]++;
		}
	}

	printf("Enter second word: ");

	while((c = getchar()) != '\n') {
		if (isalpha(c)) {
			c = tolower(c) - 'a';
			input[c]--;
		}
	}

	printf("The words are ");

	for (int i = 0; i < LETTERS - 1; i++) {
		if (input[i] != 0) {
			printf("not ");
			break;
		}
	}

	printf("anagrams.\n");

	return 0;
}
