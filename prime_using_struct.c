#include <stdio.h>
struct number {
	int a;
};
int main() {
struct number num;
int i,c=0;
printf("Enter The Number:\n");
scanf("%d", &num.a);
for (i = 0; i<= num.a; i++ ) {
	if (i % num.a == 0)
	c++;
}
if (c ==2) {
	printf("Prime Number");
} else {
	printf("Not Prime Number");
}
	return 0;
}

