// Topic: Array as perameter 2
#include <stdio.h>
#include <stdlib.h>
int *fun(int size)
{
	int *p;
	p = (int *)malloc(sizeof(int));
	printf("%d", p);
	return p;
}
int main()
{
	int *A;
	A = fun(5);
	//	printf("%d", A);
	free(A);
	return 0;
}
