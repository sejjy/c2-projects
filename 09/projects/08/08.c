#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
	srand((unsigned) time(NULL));

	int wins = 0, losses = 0;
	char c;

	do {
		if (play_game()) {
			wins++;
			printf("\nYou win!\n");
		}
		else {
			losses++;
			printf("\nYou lose!\n");
		}

		printf("\nPlay again? ");
		scanf(" %c", &c);
	} while (c == 'Y' || c == 'y');

	printf("\nWins: %d Losses: %d\n", wins, losses);

	return 0;
}

int roll_dice(void)
{
	return (rand() % 6 + 1) + (rand() % 6 + 1);
}

bool play_game(void)
{
	int roll, point = 0;

	for (;;) {
		roll = roll_dice();
		printf("\nYou rolled: %d", roll);

		if (point == 0) {
			if (roll == 7 || roll == 11) {
				return true;
			}
			if (roll == 2 || roll == 3 || roll == 12) {
				return false;
			}

			point = roll;
			printf("\nYour point is %d", point);
		}
		else {
			if (roll == point) {
				return true;
			}
			if (roll == 7) {
				return false;
			}
		}
	}
}
