//Write a c Program to find out whether a student is pass or fail;
//if it requires total 40% and at lest 33% in each subject to pass.
//Assume 3 subjects and take marks as on input from user.
#include <stdio.h>
int main () {
	int sub1,sub2,sub3;
	printf("Enter 1st Subject mark: ");
	scanf("%d", &sub1);
	printf("Enter 2nd Subject mark: ");
	scanf("%d", &sub2);
	printf("Enter 3rd Subject mark: ");
	scanf("%d", &sub3);
	int total = (sub1+sub2+sub3);
	int fm = (300*40)/100;
	int eachm = 100*33/100;
	if ((sub1 >= eachm,sub2 >= eachm, sub3 >= eachm) && total >= fm) {
		printf("\nYou PASSED\n");
	} else {
		printf("\nYou FAILED\n");
	}
	printf ("Because.....\n");
	if (sub1 >= eachm) {
		printf("Subject 1: You're Passed");
	}else {
		printf("Subject 1: You're failed");
	}
	if (sub2 >= eachm) {
		printf("\nSubject 2: You're Passed");
	}else {
		printf("\nSubject 2: You're failed");
	}
	if (sub3 >= eachm) {
		printf("\nSubject 3: You're Passed");
	}else {
		printf("\nSubject 3: You're failed");
	}
	
	return 0;
}
