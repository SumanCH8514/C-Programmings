#include <stdio.h>
int fact(int n);
int main()
{
    printf("factorial is: %d", fact(5));
}
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int factNum1 = fact(n - 1);
    int factN = factNum1 + n;
    return factNum1;
}