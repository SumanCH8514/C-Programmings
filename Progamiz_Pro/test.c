// Code Topic: //,

#include <stdio.h>
#include <string.h>

void largest_number(int num)
{
    char str[20];
    sprintf(str, "%d", num); // Convert number to string
    int len = strlen(str);
    char temp;

    // Sort the digits in descending order
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] < str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("Largest possible number: %s\n", str);
}

int main()
{
    int num = 5927;
    largest_number(num);
    return 0;
}
