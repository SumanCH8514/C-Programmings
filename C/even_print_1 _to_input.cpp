#include <stdio.h>
int main() {
	int n,i;
	printf("Enter Number:");
	scanf("%d", &n);
	//Loop using 
	for (i =1; i<=n; i++) {
		if (i%2==0) {
			printf("%d\n",i );
		}
	}
	return 0;
}