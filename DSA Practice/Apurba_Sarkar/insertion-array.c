// Code Topic: //,
#include <stdio.h>
int main()
{
    int a[50], size, i, pos, key;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    if (size > 50)
    {
        printf("Overflow Sitiation");
    }
    else
    {
        for (i = 0; i < size; i++)
        {
            printf("Enter the Element %d: ", i + 1);
            scanf("%d", &a[i]);
        }

        printf("Enter the Position of a new array: ");
        scanf("%d", &pos);

        printf("Enter the new Element of array wanna Insert: ");
        scanf("%d", &key);

        for (i = size - 1; i >= pos - 1; i--)
        {
            a[i + 1] = a[i];
        }
        a[pos - 1] = key;
        size++;

        printf("Array after new element inserted at position: \n");
        for (i = 0; i < size; i++)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}