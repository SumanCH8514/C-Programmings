// Code Topic: //,
#include <stdio.h>
int main()
{
    int n, i, s;
    printf("Enter Number: ");
    scanf("%d", &n);
    for (i = 1, s = 0; i <= n; s += i, i++)
    {
    }
    printf("Sum is: %d", s);
    return 0;
}

// int n, s = 0;
//     printf("Enter Number:\n");
//     scanf("%d", &n);
//     for (int i = 0; i <= n; i++)
//     {
//         s = s + i;
//     }
//     printf("Sum is: %d", s);