// Code Topic: Structure_as_Parameter DSA reCap 3//,
#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
struct Rectangle *fun()
{
    Rectangle *p;
    p = new Rectangle;
    p->length = 15;
    p->breadth = 7;

    return p;
};

int main()
{
    struct Rectangle *ptr = fun();
    cout << "Length: " << ptr->length << endl
         << "Breadth: " << ptr->breadth << endl;

    return 0;
}