#include<stdio.h>
int main () {
	int a,b;
	char o,p;
	do {
		printf("Enter Two Number:\n");
		scanf("%d %d", &a,&b);
		printf("Enter arithmetic operator(+,-,*,/,%): ");
		scanf(" %c",&o);
		switch (o) {
			case '+':
				printf("%d + %d = %d",a,b,a+b);
				break;
			case '-':
				printf("%d - %d = %d",a,b,a-b);
				break;
			case '*':
				printf("%d x %d = %d",a,b,a*b);
				break;
			case '/':
				printf("%d / %d = %d",a,b,a/b);
				break;
			case '%':
				printf("%d % %d = %d",a,b,a%b);
				break;
			default:
				printf("Only Enter arthmetic operators.");
				break;
		}
		printf("\ndo you want to continue (y/n)?\n");
		scanf(" %c", &p);
	} while (p == 'y');

		return 0;
}

