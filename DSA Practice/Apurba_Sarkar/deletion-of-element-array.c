// Code Topic: //,
#include <stdio.h>
int main()
{
    printf("Deletion Array of an element: \n");

    int a[50], size, i, pos;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size > 50)
    {
        printf("Overflow Condition");
    }
    else
    {

        printf("enter Elements \n");
        for (i = 0; i < size; i++)
        {
            printf("Enter Elements %d : ", i + 1);
            scanf("%d", &a[i]);
        }

        printf("Enter the position of the arry that wanna delete: ");
        scanf("%d", &pos);

        for (i = pos - 1; i < size - 1; i++)
        {
            a[i] = a[i + 1];
        }
        size--;

        printf("Your Current Array After deletion: \n");
        for (i = 0; i < size; i++)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}