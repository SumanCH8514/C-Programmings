// Code Topic: constructor (OOPs) in DSA reCap//,
#include <iostream>
using namespace std;
class Rectangular
{
private:
    int length;
    int braedth;

public:
    Rectangular(int l, int b)
    {
        length = l;
        braedth = b;
    };
    void changeLen(int l)
    {
        length = l;
    };
    void area()
    {
        cout << "Length of Rectangular: " << length << endl;
        cout << "Breadth of Rectangular: " << braedth << endl;
        int a = braedth * length;
        cout << "Area of Rectangle is: " << a;
    };
};
int main()
{
    Rectangular r(10, 8);
    r.changeLen(20);
    r.area();
    return 0;
}