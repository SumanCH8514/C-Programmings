//C Program to Check Whether a Number is Prime or Not.
#include <stdio.h>
int main () {
	int n,i,count=0;
	//number input
	printf("Enter Number: ");
	scanf("%d", &n);
	//loop using
	for (i=1; i<=n; i++) {
		if(n%i==0) {
			count++;
		}
	}
	if (count ==2) {
		printf("%d Is A Prime Number.", n);
	} else {
		printf("%d is Not Prime Number", n);
	}
	return 0;
}
