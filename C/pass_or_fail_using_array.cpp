#include<stdio.h>
int main () {
	int i,n;
	printf("Enter Numbers Of Subject: ");
	scanf("%d", &n);
	int marks[n];
	for (i=0; i<n; i++) {
		printf("Enter Mark of Sub%d : ", i+1);
		scanf("%d", &marks[i]);
	}
	int total=0;
	int x = 0;
	for (i = 0; i<n; i++) {
		total += marks[i];
		if (marks[i]>=33) {
			x++;
		}
	}
	float avg = total/n;
	if (avg >= 40 && x == n) {
		printf("Congrats! you have passed with %.2f percent marks.", avg);
	} else {
		printf("Sorry! you faild with %.2f percent marks.", avg);
	}
	return 0;
}

