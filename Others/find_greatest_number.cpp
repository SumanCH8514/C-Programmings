#include <stdio.h> 
 
int main() 
{ 
 int a,b,c,d,e; 
 
 printf("ENTER THE FIVE NUMBERS"); 
 scanf(
 
 if(a>b && a>c &&  a>d && a>e) {
  printf("Greatest Number : %d",a);}
 
 else {
  if(b>c && b>d && b>e) 
   printf("Greatest Number : %d",b);}
 
 else {
 	if(c>d && c>e) 
   printf("Greatest Number : %d",c);
 }
  
 
 else {
 	if(d>e) 
   printf("Greatest Number : %d",d);
 }
  
 
 else 
  printf("Greatest Number : %d",e);
  
 return 0; 
}
