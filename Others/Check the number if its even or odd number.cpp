//Check the number if it's even or odd number using C program
#include <stdio.h>
int main () {
	int num;
	printf("Enter a Number:\n");
	scanf("%d", &num);
	if (num % 2 == 0)
	{
		printf("%d is an Even Number.", num);
	} else {
		printf("%d is an Odd Number.", num);
	}
	return 0;
}

Algorithm

