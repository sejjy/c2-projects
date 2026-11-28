#include <stdio.h>

int main(void)
{
	printf("Enter a sentence: ");

	char ch;
	int words = 1, letters = 0;

	while ((ch = getchar()) != '\n') {
		if (ch == ' ') {
			words += 1;
		} else {
			letters += 1;
		}
	}

	printf("Average word length: %.1f\n", (float)letters / words);

	return 0;
}
