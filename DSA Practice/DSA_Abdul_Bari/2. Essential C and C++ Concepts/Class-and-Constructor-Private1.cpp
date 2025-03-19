// Code Topic: Class-and-Constructor-Private.1 Dsa reCap//,
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    void setLength(int l)
    {
        length = l;
    }
    void setBreadth(int b)
    {
        breadth = b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    ~Rectangle()
    {
        cout << "Destructor!";
    }
};

int main()
{
    int length, breadth;
    cout << "Enter Length: ";
    cin >> length;
    cout << "\nEnter Breadth: ";
    cin >> breadth;
    Rectangle r(length, breadth);
    system("cls");
    cout << "Area of Rectangle is: " << r.area() << endl;
    cout << "Perimeter of Rectangle is: " << r.perimeter() << endl;
    return 0;
}