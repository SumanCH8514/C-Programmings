#include<stdio.h>
int main () {
	int i,j, bal;
	printf("Enter Range:");
	scanf("%d", &bal);
	for(i = 1; i<= bal; i++) {
		for(j = 1; j<= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
