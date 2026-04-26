#include <iostream>
#include <algorithm>
using namespace std;
void swap(int &, int &);
int main()
{
    int a = 9;
    int b = 7;
    cout << " Before swap \n";
    cout << "A =" << a << endl;
    cout << "B " << b << endl;
    swap(a, b);
    cout << " After  swap \n";
    cout << "A =" << a << endl;
    cout << "B " << b << endl;
}
void swap(int &a, int &b)
{
    cout << "This is swaping inside the swap function \n";
    cout << "BEFOR \n";
    cout << "A =" << a << endl;
    cout << "B " << b << endl;
    int c;
    c = a;
    a = b;
    b = c;
    cout << "AFTER \n";
    cout << "A =" << a << endl;
    cout << "B " << b << endl;
}