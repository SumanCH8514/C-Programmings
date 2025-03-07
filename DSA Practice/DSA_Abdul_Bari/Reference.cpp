// Code Topic: Reference DSA reCap//,
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int &r = a; // r is a reference to a

    cout << "Value of a: " << a << endl;                  // Output: 10
    cout << "Value of r: " << r << endl;                  // Output: 10
    r = 20;                                               // Changing the value of r also changes the value of a
    cout << "Value of a after changing r: " << a << endl; // Output: 20
    cout << "Value of r after changing r: " << r << endl; // Output: 20
    int b = 30;
    r = b; // Changing the reference to another variable

    cout << "Value of a: " << a << endl; // Output: 10
    cout << "Value of r: " << r << endl;
    return 0;
}