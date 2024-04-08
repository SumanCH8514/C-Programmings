/*Write a C program that accepts an employee's ID, 
total worked hours in a month and the amount he received per hour. 
Print the ID and salary (with two decimal places) of the employee for a particular month.*/
#include<stdio.h>
int main () {
	char id[10];
	int hour; double salary, value;
	
	printf("Enter Employee's ID: ");
	scanf ("%s", &id);
	
	printf("Enter Working Hour: ");
	scanf("%d", &hour);
	
	printf("Enter Salary/h: ");
	scanf("%lf", &value);
	
	salary = value * hour;
	
	printf("Your Employee ID: %s\nYour Salary Is: %.2lf", id, salary);
	return 0;
	
}
