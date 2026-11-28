#include <ctype.h>
#include <stdio.h>

#define SIZE 64

int main(void)
{
	char c;
	char letters[SIZE];
	int i = 0;

	printf("Enter message: ");
	while (i < SIZE && (c = getchar()) != '\n') {
		letters[i++] = c;
	}

	printf("In B1FF-speak: ");
	for (int j = 0; j < i; j++) {
		switch (c = toupper(letters[j])) {
			case 'A': putchar('4'); break;
			case 'B': putchar('8'); break;
			case 'E': putchar('3'); break;
			case 'I': putchar('1'); break;
			case 'O': putchar('0'); break;
			case 'S': putchar('5'); break;
			default:  putchar(c);   break;
		}
	}
	printf("!!!!!!!!!!\n");

	return 0;
}
