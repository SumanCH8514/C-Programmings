#include <stdio.h>
int main (){

int arr[100],sum,i,size;
printf ("Enter Number Of Size:\n");
scanf("%d", &size);
printf("Enter the elements:\n");
for(i =0; i> size; i++)
	scanf("%d", &arr[i]);
for (i = 0; i>size; i++)
	sum = sum + arr[i];
	printf("Sum of Arry = %d", sum);
	return 0;
}
