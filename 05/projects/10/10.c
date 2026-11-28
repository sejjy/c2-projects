#include <stdio.h>

int main(void)
{
	// A = 90–100
	// B = 80–89
	// C = 70–79
	// D = 60–69
	// F = 0–59	

	int numerical_grade;

	printf("Enter numerical grade: ");
	scanf("%d", &numerical_grade);

	if (numerical_grade < 0 || numerical_grade > 100) {
		printf("Numerical grade must be 0-100");
		return 1;
	}

	printf("Letter grade: ");

	switch (numerical_grade / 10) {
		case 10:
		case 9:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
			printf("D");
			break;
		default:
			printf("F");
			break;
	}

	printf("\n");

	return 0;
}
