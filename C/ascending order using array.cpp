#include<stdio.h>
int main () {
	int num,a[100],i,j,asc;
	printf("Enter Range:\n");
	scanf("%d", &num);
	printf("Enter Numbers:\n");
	for (i = 0; i < num; i++)
		scanf("%d", &a[i]);
		
	for (i = 0; i < num; i++) {
		for (j = i+1; j < num; j++) {
			if (a[i] > a[j]) {
				asc = a[i];
				a[i] = a[j];
				a[j] = asc;
			}
		}
	}
	printf("Ascending Order:");
	for (i = 0; i < num; i++)
		printf("%d,", a[i]);
	return 0;
}
