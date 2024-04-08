#include <stdio.h>
int main (){
  int n,r,temp,sum=0;
  printf("Enter The Number You Wanna Check:\n");
  scanf("%d", &n);
  for(temp=n;n>0;n=n/10){
    r=n%10;
    sum = sum+ (r*r*r);
  }
  if(temp==sum){
    printf("%d is an Armstrong Number.", temp);
  }else{
    printf("%d is Not an Armstrong Number.",temp);
  }
  return 0;
}
