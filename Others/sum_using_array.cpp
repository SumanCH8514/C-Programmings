//C Program to Find the Sum of Three Numbers Using Array.
#include <stdio.h>
int main () {
	int i,a[3],sum = 0;
	for (i = 0; i< 3; i++) {
		printf("Enter Number %d: ", i+1);
		scanf("%d", &a[i]);
	}
	for (i = 0; i<3; i++) {
		sum += a[i];
	}
	printf("Sum of these Number : %d", sum);
	return 0;
}
