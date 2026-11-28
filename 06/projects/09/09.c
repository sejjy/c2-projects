#include <stdio.h>

#define MONTHS_IN_YEAR 12

int main(void)
{
	float loan, interest_rate, monthly_payment;
	int n;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);

	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);

	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);

	printf("Enter number of payments: ");
	scanf("%d", &n);

	printf("\n");

	if (n <= 0)
		printf("Balance remaining: %.2f\n", loan);

	float percentage = interest_rate / 100;

	for (int i = 1; i <= n; i++) {
		loan = (loan - monthly_payment) +
		       (loan * (percentage / MONTHS_IN_YEAR));
		printf("Balance remaining after payment %d: %.2f\n", i, loan);
	}

	return 0;
}
