#include<stdio.h>
int main () {
int a,b,c;
printf("Enter Sub1 Mark: ");
scanf("%d", &a);
printf("Enter Sub2 Mark: ");
scanf("%d", &b);
printf("Enter Sub3 Mark: ");
scanf("%d", &c);
int total = (a+b+c);
int per = total/3;
if (per >=40 && a >=33 && b>=33 && c>=33) {
	printf("Pass");
}else {
	printf("Fail");
}
return 0;
}

