// Topic: Array as perameter 1
#include <stdio.h>
void fun(int a[], int n)
{ // we can use *a or a[] in this line.
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
	//	printf("%d", sizeof(a)/ sizeof(int));
}
int main()
{
	int a[] = {2, 4, 6, 8, 15};
	fun(a, 5);
	printf(" \n%d ", sizeof(a) / sizeof(int));
	return 0;
}
