// Code Topic: Class-and-Constructor-Private3//,
#include <iostream>
using namespace std;
class Arithmetic
{
private:
    int a;
    int b;

public:
    Arithmetic();
    Arithmetic(int a, int b);
    int add();
    int sub();
    int getA();
    int getB();
    ~Arithmetic();
};
Arithmetic::Arithmetic()
{
    a = 0;
    b = 0;
}
Arithmetic::Arithmetic(int a, int b)
{
    this->a = a;
    this->b = b;
}
int Arithmetic::add()
{
    return a + b;
}
int Arithmetic::sub()
{
    return a - b;
}
int Arithmetic::getA()
{
    return a;
}
int Arithmetic::getB()
{
    return b;
}
Arithmetic::~Arithmetic()
{
    cout << "Destroyed !";
}

int main()
{
    int a, b;
    cout << "Enter A and B: " << endl;
    cin >> a >> b;
    Arithmetic ar(a, b);
    system("cls");
    cout << ar.getA() << " + " << ar.getB() << " = " << ar.add() << endl;
    cout << ar.getA() << " - " << ar.getB() << " = " << ar.sub() << endl;

    return 0;
}