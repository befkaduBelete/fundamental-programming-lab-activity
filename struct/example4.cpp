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
    s_info stu[10];

    for (int i = 0; i < 2; i++)
    {
        cout << " Enter the  " << i + 1 << "  student Age  \n";
        cin >> stu[i].age;
        cout << " Enter the  " << i + 1 << "  student GPA  \n";
        cin >> stu[i].GPA;
        cout << " Enter the  " << i + 1 << "  student Name  \n";
        cin >> stu[i].name;
    }

    for (int i = 0; i < 2; i++)
    {
        cout << " The " << i + 1 << " Student Info \n";
        cout << "====================================\n";
        cout << "\t" << "Name : " << stu[i].name << endl;
        cout << "\t" << "Age : " << stu[i].age << endl;
        cout << "\t" << "GPA : " << stu[i].GPA << endl;
    }

    return 0;
}