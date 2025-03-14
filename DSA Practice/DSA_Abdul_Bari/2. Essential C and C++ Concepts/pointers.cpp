// Code Topic: Pointers DSA ReCap//,
#include <iostream>
using namespace std;
int main()
{
    // int a = 10;
    // int *p; // its use for declaring and dereferencing a pointer
    // // Pointer p is declared but not initialized p
    // // Dereferencing the pointer to get the value at the address stored in p
    // p = &a; // p is a pointer that stores the address of a

    // cout << "Value of a: " << a << endl;
    // cout << "Address of *p: " << *p << endl;

    /////////////////////////////////////// pointers with arrays 1:

    // int a[5] = {1, 2, 3, 4, 5};
    // int *p;
    // p = a; // or write p = &a[0];

    // for (int i = 0; i < 5; i++)
    // {
    //     // cout << a[i] << " ";
    //     // cout << p[i] << " ";
    // }

    //////////////////////////////// pointers with arrays in Heap:
    // int *p;
    // p = new int[5]; // dynamic memory allocation in heap
    //                 // p = (int *)malloc(5 * sizeof(int)); // malloc also used for dynamic memory allocation in heap

    // p[0] = 1;
    // p[1] = 2;
    // p[2] = 3;
    // p[3] = 4;
    // p[4] = 5;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << p[i] << " ";
    // }

    // delete[] p; // free the memory allocated in heap in c++
    // // free(p); // free the memory allocated in heap in c

    //////////////////////////////////// pointers experiments 1:

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout << sizeof(p1) << endl; // 8 bytes for 64 bytes machine & 4bits for 32bit machine
    cout << sizeof(p2) << endl; // 8 bytes for 64 bytes machine & 4bits for 32bit machine
    cout << sizeof(p3) << endl; // 8 bytes for 64 bytes machine & 4bits for 32bit machine
    cout << sizeof(p4) << endl; // 8 bytes for 64 bytes machine & 4bits for 32bit machine
    cout << sizeof(p5) << endl; // 8 bytes for 64 bytes machine & 4bits for 32bit machine
    return 0;
}