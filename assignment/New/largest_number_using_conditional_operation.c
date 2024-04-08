// Code Topic: print largest_number_using_conditional_operation//,
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Three Numbers:\n");
    scanf("%d \n%d \n%d", &a, &b, &c);
    printf("Largest Number Is:");
    // Normal Technique
    // if (a>b){
    //    if (a>c)
    //    {
    //     printf("%d",a);
    //    } else
    //    {
    //     printf("%d",c);
    //    }
    // }
    // else{
    //     if (b>c)
    //     {
    //         printf("%d",b);
    //     }else
    //     {
    //         printf("%d",c);
    //     }
    // }

    // Conditional Operation step 1

    // if (a>b)
    // {
    //     a>c?printf("%d",a):printf("%d",c);
    // }else
    // {
    //     b>c?printf("%d",b):printf("%d",c);
    // }

    // Conditional Operation step 2
    printf(" %d", a > b ? a > c ? a : c : b > c ? b
                                                : c);

        return 0;
}
