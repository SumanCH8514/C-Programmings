// Code Topic: //,
#include <stdio.h>
struct ractangle
{
    int leagth;
    int breadth;
};
void initilization(struct ractangle *r, int l, int b)
{
    r->leagth = l;
    r->breadth = b;
};
int area(struct ractangle r)
{
    int a = r.leagth * r.breadth;
    return a;
}
int peri(struct ractangle r)
{
    int p = 2 * (r.breadth + r.leagth);
    return p;
}
int main()
{
    struct ractangle r;
    int l, b;
    printf("Enter the Length and Breadth of Rectengle:\n");
    scanf("%d %d", &l, &b);
    initilization(&r, l, b);
    int a = area(r);
    int p = peri(r);
    printf("Area of Ractangle: %d\nBreadth of ractangle: %d", a, p);
    return 0;
}