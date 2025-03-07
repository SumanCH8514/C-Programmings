// Code Topic: //,
#include <stdio.h>
int result();
int main()
{
    int i;
    i = result();
    if (i % 2 == 0)
    {
        printf("Even Number.");
    }
    else
    {
        printf("Odd Number.");
    }
    return 0;
}
int result()
{
    int n;
    printf("Enter The Number: ");
    scanf("%d", &n);
    return n;
}
