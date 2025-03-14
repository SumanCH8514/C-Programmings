//Topic: Dynamic allocation on Heap using pointer. 
#include <stdio.h>
#include <stdlib.h>

struct rec {
	int length;
	int breadth;
};
int main () {
struct rec *p;
p = (struct rec *)malloc(sizeof(struct rec));

p->length =15;
p->breadth = 7;

printf("Length is: %d\n", p->length);
printf("Breadth is: %d\n", p->breadth);
return 0;
}

