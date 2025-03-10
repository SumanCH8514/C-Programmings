// Code Topic: Array_as_Parameter 2//,
#include <iostream>
using namespace std;
int *fun(int size)
{
    int *ptr;
    ptr = new int(size);
    for (int i = 0; i < size; i++)
    {
        ptr[i] = i + 1;
    }
    return ptr;
};
int main()
{
    int *p, size = 10;
    p = fun(size);

    for (int i = 0; i < size; i++)
    {
        cout << p[i] << endl;
    }

    return 0;
}