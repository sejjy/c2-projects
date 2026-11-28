#include <stdio.h>

int main(void)
{
	char initial;

	printf("Enter a first and last name: ");
	scanf(" %c", &initial);

	char ch;

	while ((ch = getchar()) != ' ')
		;

	while ((ch = getchar()) == ' ')
		;

	do {
		putchar(ch);
	} while ((ch = getchar()) != '\n' && ch != ' ');

	printf(", %c.\n", initial);

	return 0;
}
