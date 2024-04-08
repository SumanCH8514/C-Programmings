#include <stdio.h>
int main () {
	int arr[100],size,i,sum = 0;
	printf("Enter Arr Size:\n");
	scanf("%d", &size);
	printf("Enter Element:\n");
	for (i = 0; i<size; i++)
		scanf("%d", &arr[i]);
	for (i=0; i<size; i++)
		sum = sum + arr[i];
	printf("Sum Of Arr Are: %d", sum);
	return 0;
}
