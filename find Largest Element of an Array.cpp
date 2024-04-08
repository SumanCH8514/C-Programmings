// C Program to find Largest Element of an Array using Loops
#include <stdio.h>
int main() {
	int size,i,largest;
	printf("Enter the size of the array:");
	scanf("%d", &size);
	int array[size];
	printf("Enter %d Elements:\n", size);
	for(i=0; i<size; i++) {
		scanf("%d", &array[i]);
	}
	largest=array[0];
	for(i=0; i<size; i++) {
		if (largest < array[i])
			largest = array[i];
	}
	printf("Largest Element is = %d", largest);
}
