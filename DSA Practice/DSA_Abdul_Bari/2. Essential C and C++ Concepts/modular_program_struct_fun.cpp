// Code Topic: Modular Programing DSA reCap//,
#include <iostream>
using namespace std;
struct rec
{
    int len;
    int bre;
};
void display(int a, int b)
{
    cout << "Area of Rectangle: " << a << endl;
    cout << "Perimeter of Rectangle: " << b << endl
         << endl;
};
int area(struct rec r)
{
    return r.bre * r.len;
};
int perimeter(rec r)
{
    return 2 * (r.bre * r.len);
};
int changeValue(rec *r)
{
    string choise;
    cout << "Do you wanna Change value?[yes/no]";
    cin >> choise;
    if (choise == "yes")
    {
        system("cls");
        cout << "what you wanna change:" << endl
             << "1. Length\n2. Breadth\n"
             << endl;
        cout << "Select choise:-> ";
        cin >> choise;
        if (choise == "1")
        {
            system("cls");
            cout << "Enter the Length of Rectangle: ";
            cin >> r->len;
            system("cls");
            display(r->len, r->bre);
        }
        else
        {
            system("cls");
            cout << "Enter the Breadth of Rectangle: ";
            cin >> r->bre;
            system("cls");
            display(r->len, r->bre);
        }
    }
    else
    {
        exit;
    }
}
int main()
{
    rec r = {0, 0};
    system("cls");
    cout << "Enter the Length of Rectangle: ";
    cin >> r.len;
    system("cls");
    cout << "Enter the Breadth of Rectangle: ";
    cin >> r.bre;
    system("cls");
    int a = area(r);
    int p = perimeter(r);
    display(a, p);
    int change = changeValue(&r);
};