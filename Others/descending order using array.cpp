#include<stdio.h>
int main () {
	int ran,num[100],i,j,dec;
	printf("Enter Range:");
	scanf("%d", &ran);
	printf("Enter Numbers:\n");
	for (i = 0; i < ran; i++)
		scanf("%d", &num[i]);

	for (i = 0; i < ran; i++) {
		for (j = i+1; j < ran; j++) {
			if (num[i] < num[j]){
			dec = num[i];
			num[i] = num[j];
			num[j] = dec;
			
			}
		}
	}
	printf("After Descending Order:");
	for (i = 0; i< ran; i++) {
		printf("%d, ", num[i]);
	}
	return 0;
}
