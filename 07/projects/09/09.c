#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int hours, minutes;
	char meridiem;

	printf("Enter a 12-hour time: ");
	scanf("%d:%d %c", &hours, &minutes, &meridiem);

	hours %= 12;

	if (toupper(meridiem) == 'P')
		hours += 12;

	printf("Equivalent 24-hour time: %02d:%02d\n", hours, minutes);

	return 0;
}
