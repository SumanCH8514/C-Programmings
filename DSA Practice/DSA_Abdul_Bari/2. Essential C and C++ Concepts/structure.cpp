// Code Topic: Structure DSA ReCap//,
#include <iostream>
// #include <cstdlib>
using namespace std;
struct Students
{
    char name[30];
    int roll;
    char dept[30];
};

int main()
{
    cout << "Enter Number of Students: ";
    int n;
    cin >> n;
    struct Students s[n];
    system("cls");
    cout << "Enter the details of Students:\n"
         << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the Name of Student " << i + 1 << ":" << endl;
        cin >> s[i].name;
        system("cls");
        cout << "Enter the Roll Number of Student " << i + 1 << ":" << endl;
        cin >> s[i].roll;
        system("cls");
        cout << "Enter the Department of Student " << i + 1 << ":" << endl;
        cin >> s[i].dept;
        system("cls");
    }

    cout << "The details of Students are:\n";
    for (int i = 0; i < n; i++)
    {

        cout << "----------------------------------------" << endl;
        cout << "\t\tStudent " << i + 1 << ":" << endl
             << endl;
        cout << "Student Name: " << s[i].name << endl;
        cout << "Roll Number: " << s[i].roll << endl;
        cout << "Department: " << s[i].dept << endl;
    }

    return 0;
}