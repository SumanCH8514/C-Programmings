#include <stdio.h>
int main () {
	int per;
	printf("\n-----------------------------------");
   printf("\nEnter The Percentage Between 0 To 100:");
	printf("\nEnter Your Percentage:\n");
	scanf("%d", &per);
	switch (per) {
		case 80 ... 100:
			printf("your Grade: A");
			break;
		case 60 ... 79:
			printf("Your Grade: B");
			break;
		case 40 ... 59:
			printf("Your Grade: C");
			break;
		default:
			printf("You Failed.");
		
	}
	return 0;
}
