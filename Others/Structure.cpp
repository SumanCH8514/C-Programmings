#include <stdio.h>
struct str {
	char name[50];
	int roll_nmb;
	int m_nmb;
	char e_mail[100];
	char address[100];
};
int main () {
struct str form;
printf("Enter your Name:\n");
gets(form.name);
printf("Enter your Roll Number:\n");
scanf("%d",&form.roll_nmb);
printf("Enter your Mobile Number:\n");
scanf("%d",&form.m_nmb);
printf("Enter your Mail ID:\n");
scanf("%s", &form.e_mail);


printf ("\n\nYour Registation Details\n\n");
printf ("Your Name is %s\n",form.name);
printf("Your Roll Number is %d\n", form.roll_nmb);
printf("Your Mobile Number is %d\n", form.m_nmb);
printf("Your E-Mail ID is %s\n", form.e_mail);



return 0;
}

