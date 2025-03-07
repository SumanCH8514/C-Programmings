/*program to check whether a number is Armstrong or not*/
#include<stdio.h>
#include<conio.h>
int main()
{
// int n,r,temp,sum=0;
 int n,num,rem,sum=0;
 printf("Enter any number : ");
 scanf("%d", &num);
 for(n=num; n>=1; n=n/10)
 {
   rem=n%10;
   sum=sum+(rem*rem*rem);
 }
 if(n==sum)
    printf("Number is Armstrong number");
 else
    printf("Number is not Armstrong number");
 getch();
 return 0;
}
