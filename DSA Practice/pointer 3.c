// Topic: Pointer as an array.
#include <stdio.h>

int main()
{
	int i, a[5];
	a[5] = {55, 44, 33, 22, 11};
	int *p = a;

	//	for(i=0; i<5;i++) {
	//	printf("Input %d: ", i+1);
	//	scanf("%d", &p[i]);
}

//	printf("Output: %d", p[0]);
for (i = 0; i < 5; i++)
{
	printf("Output: %d \n", p[i]);
}
return 0;
}
