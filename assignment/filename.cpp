#include <stdio.h>
int main() {
	FILE *ppp;
	ppp = fopen("filename.txt", "w");
	fprintf(ppp,"This IS Something.\nThis Is na na naaaa");
	fclose(ppp);
	return 0;
}
