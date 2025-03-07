//Print "Yahtzee!" If the dice number is 6:
#include <stdio.h>
int main () {
	int dice = 1;
	
	while (dice <= 6){
		if (dice < 6) {
			printf("No Yahtzee\n");
		}else {
			printf("Yahtzee");
		}
		dice = dice + 1;
	}
	
	return 0;
}
