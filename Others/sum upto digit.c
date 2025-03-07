#include <stdio.h>
int main() {
int n, sum=0,m;
printf("Enter the number: ");
scanf("%d", &n);
for(m=0; m<=n;m++) {
    sum = m + sum;
}
printf("Sum of digits upto %d", sum);
return 0;
}