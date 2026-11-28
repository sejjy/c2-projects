#include <stdio.h>

#define SIZE 20

int main(void)
{
	char initial;

	printf("Enter a first and last name: ");
	scanf(" %c", &initial);

	char c;

	while ((c = getchar()) != ' ')
		;

	while ((c = getchar()) == ' ')
		;

	char last[SIZE];
	int i = 0;

	do {
		last[i++] = c;
	} while ((c = getchar()) != '\n' && c != ' ');

	printf("You entered the name: ");

	for (int j = 0; j < i; j++) {
		printf("%c", last[j]);
	}

	printf(", %c.\n", initial);

	return 0;
}
