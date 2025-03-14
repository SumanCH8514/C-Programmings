//Topic: Parameter Passing:> pass by address or call by address.
#include <stdio.h>
void swap (int *a, int *b) {
	printf("At the Swap function...\na = %d And b = %d \n", *a, *b);
	int c;
	c = *a;
	*a = *b;
	*b = c;
	printf("After Swaping...\n");
	printf("a = %d \n", *a);
	printf("b = %d \n", *b);
}
int main () {
	int a,b;
	a=10;b=20;
	swap(&a,&b);
	printf("At the Main function...\na = %d And b = %d \n", b, a);
	printf("After Swaping...\n");
	printf("a = %d \n", a);
	printf("b = %d \n", b);
return 0;
}

