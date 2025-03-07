#include <stdio.h>
int main (){
	float l,w,area;
	printf("Enter the lenth of Triangle:\n");
	scanf("%f", &l);
	
	printf("Enter the width of Tringle:\n");
	scanf("%f", &w);
	
	area = l*w/2;
	
	printf("The Area of Tringle is %2f", area);
	return 0;
	
}
