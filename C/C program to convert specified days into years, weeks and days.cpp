//C program to convert specified days into years, weeks and days
#include<stdio.h>
int main () {
	int year,week,day;
	printf("Enter Days: ");
	scanf("%d", &day);
	year = day / 365;
	week = day % 365 / 7;
	day = day - ((week * 7) + (year * 365));
	printf ("Years: %d\n", year);
	printf ("Weeks: %d\n", week);
	printf ("Days : %d\n", day);
	return 0;
}
