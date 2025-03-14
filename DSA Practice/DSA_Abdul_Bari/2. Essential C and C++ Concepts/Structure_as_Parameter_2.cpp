// Code Topic: Structure_as_Parameter DSA reCap//,
#include <iostream>
using namespace std;
struct rectangle
{
    int height;
    int breath;
};
void init(struct rectangle *a)
{
    system("cls");
    cout << "Enter the Height of Rectangle: ";
    cin >> a->height;
    system("cls");
    cout << "Enter the breath of Rectangle: ";
    cin >> a->breath;
    system("cls");
};
void peri(struct rectangle *p)
{
    cout << "Perimeter of Rectangle is: " << p->breath * p->height;
};

int main()
{
    struct rectangle *r;
    init(r);

    cout << "Height of Rectangle: " << r->height << endl
         << "Breadth of Rectangle: " << r->breath << endl;
    peri(r);
    delete (r);
    return 0;
}