#include <stdio.h>

int main(void)
{
	int num;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &num);

	// num = 1953;

	int digit1 = num % 8;
	num = num / 8;

	int digit2 = num % 8;
	num = num / 8;

	int digit3 = num % 8;
	num = num / 8;

	int digit4 = num % 8;
	num = num / 8;

	int digit5 = num % 8;
	num = num / 8;

	printf("In octal, your number is: %d%d%d%d%d\n",
	       digit5, digit4, digit3, digit2, digit1);

	return 0;
}
