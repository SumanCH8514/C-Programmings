/* c program to arrange numbers on ascending order like 5,3,4,2,1 = 1,2,3,4,5 */
#include<stdio.h>
int main () {
	int num,i,ar[100],j,tem;
	printf("This is An Ascending & Dscending Order Organizer.\n");
	printf("Enter Number Range: ");
	scanf("%d", &num);
	for(i = 0; i < num; i++) {
		printf("Enter Number %d : ", i+1);
		scanf("%d",&ar[i]);
	}
	for (i = 0; i< num; i++) {
		for (j = i+1; j < num; j++) {
			if (ar[i] > ar[j]) {
				tem = ar[i];
				ar[i]= ar[j];
				ar[j] = tem;
			}
		}
	}
	printf(".......................\n");
	printf("Numbers In Ascending Oder:");
	for(i = 0; i< num; i++)
		printf("%d,", ar[i]);

	for (i = 0; i< num; i++) {
		for (j = i+1; j< num; j++) {
			if (ar[i] < ar[j]) {
				tem = ar[i];
				ar[i] = ar[j];
				ar[j] = tem;
			}
		}
	}
	printf("\n.......................\n");
	printf("Numbers In dscending Oder:");
	for(i = 0; i< num; i++)
		printf("%d,", ar[i]);
	return 0;
}
