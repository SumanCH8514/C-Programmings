// Code Topic: Functions ReCap DSA//,
#include <iostream>
using namespace std;
int add(int a, int b) // this is formal parameter
{
    int c;
    c = a + b;
    return c;
}
int main()
{
    system("cls");
    int n, n2, total;
    cout << "Enter the First Number: ";
    cin >> n;
    system("cls");
    cout << "Enter the Second Number: ";
    cin >> n2;
    system("cls");
    total = add(n, n2); // this is function call & (this is actual perameter within first backets)
    cout << "Sum of " << n << " and " << n2 << " is " << total;
    return 0;
}