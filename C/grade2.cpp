#include<stdio.h>
int main () {
	int ben,eng,math,his,geo,total,per;
	printf("Enter Marks Of Bengali :");
	scanf("%d", &ben);
	printf("Enter Marks Of English :");
	scanf("%d", &eng);
	printf("Enter Marks Of Math :");
	scanf("%d", &math);
	printf("Enter Marks Of His :");
	scanf("%d", &his);
	printf("Enter Marks Of Geo :");
	scanf("%d", &geo);
    
    total = ben+eng+math+his+geo;
    per = total * 100/500;
    switch (per) {
		case 60 ... 100:
			printf("First Divition");
			break;
		case 50 ... 59:
			printf("Second Divition");
			break;
		case 40 ... 49:
			printf("Third Divition");
			break;
		default:
			printf("You Failed.");
		
	}
	return 0;
}
