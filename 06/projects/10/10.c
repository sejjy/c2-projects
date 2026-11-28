#include <stdio.h>

int main(void)
{
	int month, day, year, date, earliest = 0;

	for (;;) {
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &month, &day, &year);

		if (month == 0 || day == 0 || year == 0)
			break;

		date = (year * 10000) + (month * 100) + day;
		// printf("%d\n", date);
		
		if (earliest == 0 || date < earliest)
			earliest = date;
	}
	
	printf("\n%.2d/%.2d/%.2d is the earliest date\n",
	        ((earliest / 100) % 100), (earliest % 100), (earliest / 10000));

	return 0;
}
