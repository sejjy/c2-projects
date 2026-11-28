#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char letter = 'A';
	char map[10][10] = {0};
	int i = 0;
	int j = 0;
	bool u, d, l, r;

	map[i][j] = letter++;

	srand((unsigned) time(NULL));

	while (letter <= 'Z') {
		u = d = l = r = false;

		if (i - 1 >= 0 && !map[i - 1][j]) u = true;
		if (i + 1 < 10 && !map[i + 1][j]) d = true;
		if (j - 1 >= 0 && !map[i][j - 1]) l = true;
		if (j + 1 < 10 && !map[i][j + 1]) r = true;

		if (!u && !d && !l && !r)
			break;

		switch (rand() % 4) {
			case 0: if (u) map[--i][j] = letter++; break;
			case 1: if (d) map[++i][j] = letter++; break;
			case 2: if (l) map[i][--j] = letter++; break;
			case 3: if (r) map[i][++j] = letter++; break;
		}
	}

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (map[i][j] == 0)
				map[i][j] = '.';
			if (j > 0)
				printf(" ");
			printf("%c", map[i][j]);
		}
		printf("\n");
	}

	return 0;
}
