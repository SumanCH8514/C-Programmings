//Topic: Parameter Passing:> pass by refarence.
#include <stdio.h>
void swap (int &a, int &b) {
	int c;
	c = a;
	a = b;
	b = c;
	printf("After Swaping at function swap...\n");
	printf("a = %d \n", a);
	printf("b = %d \n", b);
}
int main () {
	int a,b;
	a=10;b=20;
	printf("At the main function...\na = %d \n", a);
	printf("b = %d \n", b);
	swap(a,b);
	printf("After Swaping at function main...\n");
	printf("a = %d \n", a);
	printf("b = %d \n", b);
return 0;
}

