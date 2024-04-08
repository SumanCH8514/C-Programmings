
#include <stdio.h>
int main () {
	int n,i,largest;
	//user input
	printf("Number:");         //4
	scanf("%d",&n);
	//input elements
	int array[n];
	printf("Enter Elements:\n");
	for(i=0; i<n; i++) {
		scanf("%d", &array[i]);
	}
	//find largest
	largest=array[0];
	for (i=1; i<n; i++) {
		if (largest < array[i])
		largest = array[i];
	}
	printf("Largest:%d",largest);
	return 0;
}
