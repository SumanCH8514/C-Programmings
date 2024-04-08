#include<stdio.h>
//lwss 30 = c; 30-70 = b; 70-90 =a ; 9.-100 =a+
int main () {
	int ben,eng,math,his,geo,total,per;
	printf("Enter Marks Of Bengali :");
	scanf("%d", &ben);
if (ben <= 30) {
	printf ("C");
} else if (ben >= 30 && ben<= 70) {
	printf ("B");
}else if (ben >= 70 && ben <= 90) {
	printf ("A");
} else if (ben >= 90 && ben <= 100) {
	printf ("A+");
}
	
	return 0;
}
