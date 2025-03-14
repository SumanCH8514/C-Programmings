// Code Topic: Monolithic Program//,
#include <iostream>
using namespace std;
int main()
{
    int roll;
    char name[50];
    string dept;
    system("cls");
    cout << "---\tStudent Details\t---\n"
         << endl;

    cout << "Student Name: ";
    cin.get(name, 50);
    system("cls");
    cout << "Student Roll Number: ";
    cin >> roll;
    system("cls");
    cout << "Student Department: ";
    cin >> dept;

    system("cls");
    cout << "---\tStudent Details\t---\n"
         << endl;
    cout << "Name: " << name << endl;
    cout << "Mobile NO: " << roll << endl;
    cout << "Department: " << dept << endl;
    return 0;
}