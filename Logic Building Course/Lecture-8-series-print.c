// Code Topic: //,              s=1             i=
#include <stdio.h>
int main()
{

    int n, i, s;
    printf("Enter Number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        s = s + i;
        printf("%d ", s);
    }

    return 0;
}