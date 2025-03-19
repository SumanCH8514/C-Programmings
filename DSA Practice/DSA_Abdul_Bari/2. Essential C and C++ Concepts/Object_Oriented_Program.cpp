// Code Topic: program in Oops DSA reCap//,
#include <iostream>
using namespace std;
class rec
{
public:
    int len;
    int bre;
    int area()
    {
        return bre * len;
    };
    int perimeter()
    {
        return 2 * (bre + len);
    };
};
void display(int a, int b)
{
    cout << "Area of Rectangle: " << a << endl;
    cout << "Perimeter of Rectangle: " << b << endl
         << endl;
};
int changeValue(rec &r)
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
            cin >> r.len;
            system("cls");
            cout << "After Update:\n"
                 << endl;
            display(r.len, r.bre);
        }
        else if (choise == "2")
        {
            system("cls");
            cout << "Enter the Breadth of Rectangle: ";
            cin >> r.bre;
            system("cls");
            cout << "After Update:\n"
                 << endl;
            display(r.len, r.bre);
        }
        else
        {
            system("cls");
            cout << "Enter Correct option.\nTry again!";
        }
    }
    else if (choise == "no")
    {
        exit;
    }
    else
    {
        system("cls");
        cout << "Enter Correct option.\nTry again!";
    }
}
int main()
{
    rec r;
    system("cls");
    cout << "Enter the Length of Rectangle: ";
    cin >> r.len;
    system("cls");
    cout << "Enter the Breadth of Rectangle: ";
    cin >> r.bre;
    system("cls");
    int a = r.area();
    int p = r.perimeter();
    display(a, p);
    int change = changeValue(r);
};