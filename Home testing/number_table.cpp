#include<stdio.h>
int main () {
	int i,num,up;
	printf("Table Of: ");
	scanf("%d", &num);
	printf("Table upto: ");
	scanf("%d", &up);
	for (i = 1; i <= up; i++) {
		printf ("%d X %d = %d\n", num, i, num*i);
	}
	return 0;
}
