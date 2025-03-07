#include <stdio.h>
int main () {
	int i, num;
	i = 0;
	printf("Enter Number Of Loop:\n");
	scanf("%d", &num);
	printf("Displaying Loop...\n\n");
	while (i < num) {
		printf("%d\n", i);
		(i++);
	}
	return 0;
}
