//C Program to find and print the sum of array elements.
#include <stdio.h>
int main() {
	int array[100],size,i,sum=0;
	//input
	printf("EnterNumber:\n");
	scanf("%d", &size);
	printf("Enter element:\n");
	for (i = 0;i<size;i++) {
		scanf("%d", &array[i]);
	}
	for (i=0;i<size;i++)
		sum = sum+ array[i];
	printf("Sum=%d", sum);
	return 0;
	
}
