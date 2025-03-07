//Topic: Parameter Passing:> pass by value.
#include <stdio.h>
void swap (int a, int b) {
	printf("At the Swap function...\na = %d And b = %d \n", a, b);
	int c;
	c = a;
	a = b;
	b = c;
	printf("After Swaping...\n");
	printf("a = %d \n", a);
	printf("b = %d \n", b);
}
int main () {
	int a,b;
	a=10;b=20;
	swap(a,b);
	printf("At the main function...\na = %d \n", a);
	printf("b = %d \n", b);
	
	// Now working right! its not swaping and not passing the value.
	// we'll use pass by address to make work this code.
return 0;
}

