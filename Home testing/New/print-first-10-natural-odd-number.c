// Code Topic: print-first-10-natural-odd-numbers//,
#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}