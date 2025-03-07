//Topic: Pointers to a Structure.
#include <stdio.h>
#include <stdlib.h>
struct rectangle {
	int length;
	int breadth;
};
int main () {
	struct rectangle r={10,5};
	printf("%d\n", r.length);
	printf("%d\n", r.breadth);
	
	struct rectangle *p=&r;
	printf("%d\n", p->length);
	printf("%d\n", p->breadth);
return 0;
}

