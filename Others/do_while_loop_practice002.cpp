#include <stdio.h>
int main() {
	int i = 0, num;
	printf("Enter number of loop:\n");
	scanf("%d", &num);
	do {
		printf("Bara Kanthalia\n", i);
		(i++);
	}
	while (i < num);
	return 0;
}
