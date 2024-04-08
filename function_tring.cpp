#include<stdio.h>
void wlc();
int main () {
	
printf("Hi Guys.\n");
wlc();
return 0;
}
void wlc() {
	char n[20];
	printf("Welcome to SVU.\n");
	printf("What's your Name?\n");
	scanf("%s", &n);
	printf("Congrats! %s Now you are a member of SVU.", n);
}

