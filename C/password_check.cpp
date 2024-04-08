/*C Exercises: Check the password until it is correct.
Write a C program to read a password until it is valid.
For wrong password print "Incorrect password" and 
for correct password print, "Correct password" and 
quit the program. The correct password is 1234.*/
#include<stdio.h>
int main () {
	int pass, l = 10;
 while (l != 0) {
 
	printf("Enter Password: ");
	scanf("%d", &pass);
	
	if (pass == 1234) {
		printf("Correct Password.");
		l = 0;
	}
	else 
	{
		printf("Incorrent Password. Try Again!\n");
		printf("\n");
	}
 }
	return 0;
}
