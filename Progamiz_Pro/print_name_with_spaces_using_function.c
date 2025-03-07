#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Added for free()

char *full_name(char *first_name, char *last_name)
{
    int len = strlen(first_name) + strlen(last_name) + 2; // +2 for space and null terminator
    char *name = (char *)malloc(len * sizeof(char));
    strcpy(name, first_name);
    strcat(name, " ");
    strcat(name, last_name);
    return name;
}

int main()
{
    char last_name[10];
    char first_name[20];
    printf("Enter First Name: ");
    scanf("%9s", first_name); // Prevent buffer overflow
    printf("Enter Last Name: ");
    scanf("%19s", last_name); // Prevent buffer overflow
    char *full = full_name(first_name, last_name);
    printf("Full Name: %s\n", full);
    free(full); // Free the allocated memory
    return 0;
}