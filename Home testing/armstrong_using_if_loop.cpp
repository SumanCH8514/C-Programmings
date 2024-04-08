#include<stdio.h>
int main () {
	int num,sum=0,r,temp;
	printf("Enter Number: ");
	scanf("%d", &num);
	for (temp = num;num > 0; r = num % 10) {
		sum = sum + r*r*r;
		num = num / 10;
	} if (temp == sum) {
		printf("Armstrong Number.");
	} else {
		printf("Not Armstrong Number.");
	}
	return 0;
}
