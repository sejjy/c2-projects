#include <stdio.h>

#define SIZE    80
#define LETTERS 26

int main(void)
{
	printf("Enter message to be encrypted: ");

	char c;
	char message[SIZE];
	int i = 0;

	while ((c = getchar()) != '\n') {
		message[i++] = c;
	}

	int n;

	printf("Enter shift amount (1-25): ");
	scanf("%d", &n);

	printf("Encrypted message: ");

	for (int j = 0; j < i; j++) {
		if (message[j] >= 'A' && message[j] <= 'Z') {
			printf("%c", ((message[j] - 'A') + n) % LETTERS + 'A');
		}
		else
		if (message[j] >= 'a' && message[j] <= 'z') {
			printf("%c", ((message[j] - 'a') + n) % LETTERS + 'a');
		}
		else {
			printf("%c", message[j]);
		}
	}

	printf("\n");

	return 0;
}
