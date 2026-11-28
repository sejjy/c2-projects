#include <stdio.h>

int main(void)
{
	int n, start;

	printf("Enter number of days in month: ");	
	scanf("%d", &n);

	printf("Enter starting day of the week (1=Sun, 7=Sat): ");	
	scanf("%d", &start);

	printf("\n");

	int i;
	for (i = 1; i < start; i++)
		printf("   ");
	
	for (i = 1; i <= n; i++) {
		printf("%3d", i);
		if ((i + start - 1) % 7 == 0 || i == n)
			printf("\n");
	}

	return 0;
}
