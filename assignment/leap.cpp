//code for leap year check
#include <stdio.h>
int main () {
	int y;
	printf("Enter Year:");
	scanf("%d", &y);
if (y % 4 == 0) 
{
	printf("leap year");
} else if (y % 100 == 0)
{
	printf("not leap year");
} else if (y % 400 == 0)
{
	printf("leap year");
} else 
{
	printf("not leap year");
}
	return 0;
}
