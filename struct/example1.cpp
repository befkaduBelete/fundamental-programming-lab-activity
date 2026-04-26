#include <iostream>
using namespace std;
struct s_info
{
    int age;
    float GPA;
    string name;
}; // Stracture Declaration

int main()
{
    s_info s1;

    // Stracture element/member  accessing
    s1.age = 22;
    s1.GPA = 2.5;
    s1.name = "Alemu";

    cout << "Age = " << s1.age << endl;
    cout << "GPA = " << s1.GPA << endl;
    cout << "Name = " << s1.name << endl;

    // From The keybord

    s_info s2;
    cout << "Enter the name of stuent \n";
    cin >> s2.name;
    cout << "Enter the age of stuent \n";
    cin >> s2.age;
    cout << "Enter the name of stuent \n";
    cin >> s2.GPA;
    cout << " STUENT 2 INFORMATION \n";
    cout << "____________________________\n";
    cout << "Age = " << s2.age << endl;
    cout << "GPA = " << s2.GPA << endl;
    cout << "Name = " << s2.name << endl;

    return 0;
}