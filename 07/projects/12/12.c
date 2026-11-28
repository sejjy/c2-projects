#include <stdio.h>

int main(void)
{
	float value = 0.0f;

	printf("Enter an expression: ");
	scanf("%f", &value);

	char ch;
	float next = 0.0f;

	while ((ch = getchar()) != '\n') {
		switch (ch) {
			case '+':
				scanf("%f", &next);
				value += next;
				break;
			case '-':
				scanf("%f", &next);
				value -= next;
				break;
			case '*':
				scanf("%f", &next);
				value *= next;
				break;
			case '/':
				scanf("%f", &next);
				value /= next;
				break;
			default:
				break;
		}
	}

	printf("Value of expression: %f\n", value);

	return 0;
}
