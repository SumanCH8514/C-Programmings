//Topic: Pointer Declaration and Initialigiation.
#include <stdio.h>
#include <stdlib.h>
int main () {
int a = 10;
int *p; p= &a;

printf("Value of a id: %d", a);
printf("\nValue from Pointer is: %d", *p);
return 0;
}

