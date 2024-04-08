// area of circle formula is:  A= pi x rxr
#include <stdio.h>
int main (){
	float r, pi, area;
	printf("Enter the Radius of Circle: ");
	scanf("%f", &r);
	pi = 3.14159;
	
	printf("Area Of Circle IS: %.2f", pi * r *r );
	return 0;
}
