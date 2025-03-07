#include <stdio.h>
struct student {
	char name[100];
	int roll;
	char dept[100];

};
int main () {
	int c;
	do {
		int i,n;
		struct student svu[i];
		printf("How Many Students Do you Have?\n");
		scanf("%d", &n);

		for (i = 0; i< n; i++) {
			printf("Enter %d. Student's Name:\n",i+1);
			scanf("%s", &svu[i].name);
			printf("Enter Student's Roll:\n");
			scanf("%d", &svu[i].roll);
			printf("Enter Student's Department:\n");
			scanf("%s", &svu[i].dept);
		}

		for(i = 0; i<n; i++) {
			printf("\n%d. Student's Name: %s", i+1,svu[i].name);
			printf("\n%s's Roll: %d", svu[i].name, svu[i].roll);
			printf("\n%s's Dept: %s \n", svu[i].name, svu[i].dept);
		}
		printf("\n\n\nDo wanna continue?\n[Enter'0'to continue /'1'to end]:\n");
		scanf("%d", &c);
		
	} while (c== 0 );
	return 0;
}
