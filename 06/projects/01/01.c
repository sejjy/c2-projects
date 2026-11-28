#include <stdio.h>

int main(void)
{
	float input, largest = 0.0f;

	for (;;) {
		printf("Enter a nonnegative number: ");	
		scanf("%f", &input);

		if (input <= 0)
			break;
		else if (input > largest)
			largest = input;
	}

	printf("\nThe largest number entered was %.2f\n", largest);

	return 0;
}
