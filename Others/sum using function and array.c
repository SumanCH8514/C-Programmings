#include<stdio.h>
int sum();
int main() {
	int result;
	printf("\nGoing to calculate the sum of two numbers:");
	result = sum();
	printf(" The Sum of %d & n%d = %d",result);
}
int sum() {
	int i,a[2];
	for(i=0;i<2; i++) {
		printf("Enter number %d:",i+1);
		scanf("%d", &a[i]);
	}
	return a[0]+a[1];
}
