// Code Topic: //,
#include <stdio.h>
int main()
{
    printf("Insertion At Any Position on Array:\n");
    int a[50], n, i, p, k;
    printf("Enter the size of array: "); // Size of Array
    scanf("%d", &n);

    if (n > 50)
    {
        printf("Overflow Sitiation"); // condition
    }
    else
    {
        printf("Enter Elements:\n");
        for (i = 0; i < n; i++) // Taking Elements
        {
            printf("Enter the Element %d: ", i + 1);
            scanf("%d", &a[i]);
        }

        printf("Enter the Position of a new array: "); // Position
        scanf("%d", &p);

        printf("Enter the new Element of array wanna Insert: "); // New element
        scanf("%d", &k);

        for (i = n - 1; i >= p - 1; i--)
        {
            a[i + 1] = a[i];
        }

        a[p - 1] = k;
        n++;

        printf("Array after new element inserted at position: \n");
        for (i = 0; i < n; i++) // printing updated Elements
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}