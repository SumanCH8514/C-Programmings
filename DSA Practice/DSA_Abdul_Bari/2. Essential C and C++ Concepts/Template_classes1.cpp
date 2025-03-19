// Code Topic: Template_classes//,
#include <iostream>
using namespace std;
template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    Arithmetic();
    Arithmetic(T a, T b);
    T add();
    T sub();
    T getA();
    T getB();
    T input();
    ~Arithmetic();
};
template <class T>
Arithmetic<T>::Arithmetic()
{
    a = 0;
    b = 0;
}
template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}
template <class T>
T Arithmetic<T>::add()
{
    return a + b;
}
template <class T>
T Arithmetic<T>::sub()
{
    return a - b;
}
template <class T>
T Arithmetic<T>::getA()
{
    return a;
}
template <class T>
T Arithmetic<T>::getB()
{
    return b;
}
template <class T>
T Arithmetic<T>::input()
{
    T a, b;
    cout << "Enter A and B: " << endl;
    cin >> this->a >> this->b;
}
template <class T>
Arithmetic<T>::~Arithmetic()
{
    cout << "Destroyed !";
}

int main()
{
    Arithmetic<float> ar;
    ar.input();
    system("cls");
    cout << ar.getA() << " + " << ar.getB() << " = " << ar.add() << endl;
    cout << ar.getA() << " - " << ar.getB() << " = " << ar.sub() << endl;

    return 0;
}