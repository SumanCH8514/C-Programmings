#include<stdio.h>
int main () {
	int num,sum=0,t,r;
	printf("Enter Number: ");
	scanf("%d", &num);
	t= num;
	while (num> 0) {
		r = num % 10;
		sum += r*r*r;
		num /=10;
	}
	if (t == sum){
		printf("Armstrong");
	} else {
		printf("Not Armstrong");
	}
	return 0;
}
