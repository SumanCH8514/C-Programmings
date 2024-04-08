//C Program to Check Whether a Number is Prime or Not.
#include <stdio.h>
int main () {
	int n,i,count=0;
	printf("Enter The Number:\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		if (n%i ==0) {
			count++;
		}
	}
	if(count ==2) {
		printf("%d is Prime Number.", n);
	} else {
		printf("%d is not Prime Number", n);
	}
	return 0;
}
