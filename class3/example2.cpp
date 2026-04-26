#include <iostream>
using namespace std;
int displayNumber(int &);
void displayNumber();
int displayNumber(int, int);
int displayNumber(int &num)
{
    num = 20;
    cout << "This is number = " << num;
    return num;
}
void displayNumber()
{
    cout << " No number here";
}

int displayNumber(int num, int b)
{
    cout << " Bfore chage = > Number are " << num << " & " << b << endl;
    num = 30;
    cout << " Number are " << num << " & " << b << endl;
    return b;
}

int main()
{
    int a = 3, b = 5;
    cout << a;
    displayNumber();
    cout << endl;
    displayNumber(a);
    cout << endl;
    cout << a;
    cout << endl;
    displayNumber(a, b);
    cout << endl;
    cout << a;
    return 0;
}