// Code Topic: Structures and Functions DSA reCap//,
#include <iostream>
using namespace std;
struct Rectangular
{
    int length;
    int braedth;
};
void setData(struct Rectangular *p, int l, int b)
{
    p->length = l;
    p->braedth = b;
};
void changeLen(struct Rectangular *p, int l)
{
    p->length = l;
};
int area(struct Rectangular r)
{
    return r.braedth * r.length;
};
int main()
{
    Rectangular r;
    setData(&r, 10, 8);
    changeLen(&r, 30);
    int a = area(r);
    cout << "Length of Rectangular: " << r.length << endl;
    cout << "Breadth of Rectangular: " << r.braedth << endl;
    cout << "Area of Rectangle is: " << a;
    return 0;
}