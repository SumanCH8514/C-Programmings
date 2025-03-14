// Topic:Access datas from Heap using Pointers.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, i;
    int *p;

    a = 10;
    p = &a;

    p = malloc(5 * sizeof(int));

    p[0] = 5;
    p[1] = 4;
    p[2] = 3;
    p[3] = 2;
    p[4] = 1;

    // for (i =0; i<5; i++)
    // printf("%d \n", p[i]);

    printf("Output is: %d", p[3]);
    free(p);
    printf("\nOutput After Free is: %d", p[3]);
    return 0;
}
