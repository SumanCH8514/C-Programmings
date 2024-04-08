//C Program to find Largest Element of an Array using Loops
#include <stdio.h>
int main () {
	int n,i,large;
	printf("Enter The Array Range:\n");
	scanf("%d", &n);
	int array[n];
	
	for (i = 0; i < n; i++) {
		printf("Enter Number %d: ", i + 1);
		scanf("%d", &array[i]);
	}
	large = array[0];
	for (i=0; i < n; i++) {
		if (large < array[i])
			large = array[i];
	}
	printf("Largest Number is: %d", large);
	return 0;
}
