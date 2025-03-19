// Code Topic: //,
#include <iostream>
using namespace std;
class rec
{
public:
    int len;
    int bre;

    void input()
    {
        cout << "Enter Length:";
        cin >> len;

        cout << "Enter Breadth:";
        cin >> bre;
    };
    void display()
    {
        cout << "length is: " << len << endl;
        cout << "Breadth is: " << bre << endl;
    };
    void peri()
    {
        cout << "Perimeter is: " << 2 * (bre * len) << endl;
    }
    void area()
    {
        cout << "Area is: " << bre * len << endl;
    };
};
int main()
{
    rec r;
    r.input();
    system("cls");
    r.display();
    r.peri();
    r.area();

    return 0;
}