#include <stdio.h>
int main (){
	int n,r,sum=0,temp;
	printf("Enter Number:");
	scanf("%d", &n);
	temp=n;
	while(n>0){
		r= n%10;
		sum= (r*r*r)+ sum;
		n /= 10;
	}
	if(temp==sum){
		printf("%d is an Armstrong Number.", temp);
	}else{
		printf("%d is not an Armstrong Number.", temp);
	}
	return 0;
}
