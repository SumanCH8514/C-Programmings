#include <stdio.h>
int sum ();
int main() {

	int result;
	result = sum();
	printf("Sum = %d", result);
}
int sum() {
	int a,b;
	printf("Enter Two Number:\n");
	scanf("%d %d", &a,&b);
	return a+b;
}
