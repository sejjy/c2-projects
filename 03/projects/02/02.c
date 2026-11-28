#include <stdio.h>

int main(void)
{
	int item_number, month, day, year;
	float unit_price;

	printf("Enter item number: ");
	scanf("%d", &item_number);

	printf("Enter unit price: ");
	scanf("%f", &unit_price);

	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	// item_number = 583;
	// unit_price = 13.5;
	// month = 10, day = 24, year = 2010;

	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%d\t\t$%7.2f\t%d/%d/%d\n", 
	        item_number, unit_price, month, day, year);

	return 0;
}
