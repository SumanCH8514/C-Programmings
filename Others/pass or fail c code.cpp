#include <stdio.h>
int main () {
	int s;
	printf("Enter Your Score: ");
	scanf("%d", &s);
	if (s<50){
		printf("Failed!\nYou Have Failed Your Exam!\nStudy Hard!");
	}
	else {
		printf("Passed!\nYou Have Passed Your Exam!");
	}
	return 0;
}
