//C program to find the sum of two numbers using function.
#include <stdio.h>
int sum();
int main () {
	int result;
	result = sum();
	printf("%d",result);
}
sum ()
{
	int a,b;
	printf("Enter Numbers:\n");
	scanf("%d%d", &a,&b);
	return a+b;
}
