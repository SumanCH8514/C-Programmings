//write a c program to display countdown and print happy new year
#include <stdio.h>
int main (){
	int countdown = 5;
	
	while (countdown > 0){
		printf("%d\n", countdown);
		(countdown--);
	}
	printf("Happy New Year!!!");
	return 0;
}


