//C Program to find Largest Element of an Array using Loops.
#include <stdio.h>
int main () {
	int size,i,largest;
	//input range:
	printf("Enter Range Of Numbers:\n");
	scanf("%d", &size);
	// declare
	int array[size];
	//input numbers:
	printf("Enter %d Numbers to find Largest Number:\n", size);
	for (i = 0; i<size; i++) {
		scanf("%d", &array[i]);
	}
	//find largest from loop
	largest = array[0];
	for (i=0; i<size; i++) {
		if (largest < array[i])
			largest = array[i];
	}
	printf("Largest Number is: %d", largest);
	return 0;
}
