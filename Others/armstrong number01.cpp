#include <stdio.h>
int main () {
	int n,r,temp,sum=0;
	printf("Enter The Number You Wanna Check:\n");
	scanf("%d", &n);
	temp = n;
	while (n > 0) {
		r = n % 10;
		sum = sum + (r*r*r);
		n = n/10;
	}
	if (temp == sum){
		printf("%d is an Armstrong Number.", temp);
	} else {
		printf("%d is not an Armstrong Number.", temp);
	}
	return 0;
}
