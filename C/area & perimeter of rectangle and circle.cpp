#include<stdio.h>
     /*
     pi = 3.14
     Formula rectangle: 
area: height*width
perimeter: 2*(height + width)
          Formula Circle: 
area: pi*r^2
perimeter: 2*pi*r
  */
int main () {
	float h,w,area,peri;
	float pi = 3.14, r_ar,r_pe,r;
	
	printf("Enter Hight:");
	scanf("%f",&h);
	printf("Enter Width:");
	scanf("%f", &w);
	area = h*w;
	peri = 2*(h+w);
	printf("Area Of Rectangle is: %.2f \nPerimeter of Rectangle is: %.2f", area, peri);
	
		printf("\nEnter Radius Of Circle: ");
	scanf("%f", &r);
	r_ar = pi * r*r;
	r_pe = 2 * (pi * r);
	printf("Area Of Circle is: %f \n Perimeter of Circle is: %f", r_ar, r_pe);
	
	return 0;
}
