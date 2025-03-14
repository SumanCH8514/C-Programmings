// Code Topic: Parameter Passing Methods reCap DSAS//,
#include <iostream>
using namespace std;
// void swap(int &a, int &b) // Perameter passing by Refarence.
// void swap(int a, int b) // Perameter passing by value.
void swap(int *a, int *b) // Perameter passing by Address.
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
};
int main()
{
    int a = 10;
    int b = 34;
    // swap(a, b); // use for Refarence and value.
    swap(&a, &b); // use for Perameter passing by Address.

    system("cls");
    cout << "Original Values:" << endl
         << "A = 10\nB = 34\n"
         << endl;
    cout << "After Swaping\nA = " << a << endl
         << "B = " << b << endl;
    cin.get();
    return 0;
}