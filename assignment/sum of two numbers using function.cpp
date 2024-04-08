#include <stdio.h>
int sum ();
int main(){
	int result;
	result = sum();
	printf ("%d", result);
}
int sum()
{
	int a,b;
	printf("Enter Two Numbers:\n");
	scanf("%d %d", &a,&b);
	return a+b;
}
