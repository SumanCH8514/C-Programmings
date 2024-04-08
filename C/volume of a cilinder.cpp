// calculate the volume of the cilinder.
#include <stdio.h>
int main (){
	float pi, r, v, h;
	int area;
	pi = 3.141;
	printf("Enter the Value of Radius:\n");
	scanf("%f", &r);
	
	printf("Enter the Hight:\n");
	scanf("%f", &h);
	
	area = r*r;
	printf("The volume of A Cilinder is: %.2f" , pi *r*r*h);
	
	printf("\nNow The Area Of A Circle Is: %.2f", pi*area);
	
	return 0;
}
