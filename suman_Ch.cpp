#include <stdio.h>
int main ()
{
	FILE *ptr;
	ptr= fopen("Suman", "a");
	fprintf(ptr, "\nWww.SumanChakrabortty.Tk");
	fclose(ptr);
	return 0;
}
