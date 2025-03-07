// Code Topic: Arrays DSA ReCap//,
#include <iostream>
using namespace std;
int main()

{
    // Experimenting with arrays 1:
    //  int a[5];
    //  a[0] = 1;
    //  a[1] = 12;
    //  a[2] = 25;
    //  a[3] = 32;
    //  a[4] = 45;
    //  // So, the size of the a int  is 4 bytes
    //  int size = sizeof(a) / sizeof(a[0]);
    //  cout << "Size of array is: " << sizeof(a) << endl;
    //  cout << "Size of an array Element is: " << size << endl;

    // Experimenting with arrays 2:
    // int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // //  // So, the size of the a int  is 4 bytes
    // int size = sizeof(A) / sizeof(A[0]);
    // cout << "Size of array is: " << sizeof(A) << endl;
    // cout << "Number of an array Element is: " << sizeof(A) / sizeof(A[0]) << endl;

    // // Experimenting with arrays 3:
    // int b[5] = {1, 2, 3, 4, 5};
    // cout << b[0] << endl;
    // cout << b[5] << endl; // returns garbage value because it is out of bounds

    // // Experimenting with arrays 4:
    // int c[] = {0};
    // cout << c[0];

    // Experimenting with arrays 5:
    int d[5] = {1, 2, 3, 4, 5};
    for (int x : d)
    {
        cout << x << endl;
    }
    return 0;
}