//Print "Yahtzee!" If the dice number is 6:

#include <stdio.h>
int main () {
	int d = 1;

	while (d <= 6) {
		if (d < 6) {
			printf("N_PASS\n");
		} else {
			printf("PASS\n");
		}
		d = d + 1;
	}

	return 0;
}
