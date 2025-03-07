// Code Topic: //,
#include <stdio.h>
int main()
{

    printf("...::: Min Max Find Program :::...\n");

    printf("Enter the Array Range: ");
    int size;
    scanf("%d", &size);
    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int max = 0, min = 0;

    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    printf("Max value is: %d", max);
    printf("\nMin value is: %d", min);

    return 0;
}