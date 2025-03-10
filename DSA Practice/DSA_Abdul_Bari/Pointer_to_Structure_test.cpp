// Code Topic: test topic//,
#include <iostream>
using namespace std;
struct rectangle
{
    int len;
    int bre;
};
int main()
{
    struct rectangle r = {10, 5};

    // //using normal method structure
    // cout << r.len << endl;
    // cout << r.bre << endl;

    // // using pointers to struct method
    // struct rectangle *p;
    // p = &r;
    // cout << p->len << endl;
    // cout << p->bre << endl;

    // Allocating memory in heave using pointer.
    rectangle *p;
    p = new rectangle;
    // OR
    // p = (struct rectangle *)malloc(sizeof(struct rectangle));
    p->len = 10;
    p->bre = 5;

    cout << "Length: " << p->len << endl;
    cout << "Breadth: " << p->bre << endl;

    delete (p);

    return 0;
}