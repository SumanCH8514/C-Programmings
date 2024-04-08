#include <stdio.h>
int main () {
	FILE *bal;
	bal =fopen("Bantu.txt", "w");
	fprintf(bal,"Ami Bal a Bal a Bantu Ch**di");
	fclose(bal);
	return 0;
	
}
