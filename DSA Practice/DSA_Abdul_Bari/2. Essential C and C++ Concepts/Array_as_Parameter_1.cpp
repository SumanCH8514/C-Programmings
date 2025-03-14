// Code Topic: Array as Parameter DSA reCap//,
#include <iostream>
using namespace std;
void fun(int a[], int s)
{
    a[0] = 100;
    for (int i = 0; i < s; i++)
    {
        cout << a[i] << endl;
    }
};
int main()
{
    int a[] = {2, 4, 6, 8, 10};
    int s = 5;
    fun(a, s);
    // cout << sizeof(a) / sizeof(int);
    // for (int i : a)
    // {
    //     cout << i << " ";
    // }
    return 0;
}