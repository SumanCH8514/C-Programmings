#include <stdio.h>
struct number {
	int a;
	int b;
};
int main() {
	struct number num;
	printf("Enter Value of a and b:\n");
	scanf("%d %d", &num.a, &num.b);

	if (num.a %2 ==0) {
		printf("%d is Even Numbers\n", num.a);
	} else {
		printf("%d is Odd Numbers\n", num.a);
	}
	if (num.b %2 ==0){
		printf("%d is Even Numbers\n", num.b);
	} else {
		printf("%d is Odd Numbers\n", num.b);
	}
	return 0;
}

