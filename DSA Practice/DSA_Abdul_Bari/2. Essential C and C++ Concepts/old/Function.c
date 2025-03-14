//Topic: normal function.
#include <stdio.h>
int add (int a, int b) {
	int c;
	c = a+b;
	printf("In Add function c Number is: %d \n", c);
	return c;
}
int main () {
	int a,b,sum;
	a=10;b=20;
	sum=add(a,b);
//	printf("First Number: %d \n", a);
//	printf("Second Number: %d \n", b);
	printf("Sum of these Numbers: %d \n", sum);

return 0;
}

