#include <stdio.h>

int main(void)
{
	int enclosed, first, second;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &enclosed, &first, &second);

	printf("You entered %d.%d.%d\n", enclosed, first, second);

	return 0;
}
