#include <iostream>
using namespace std;
enum size
{
    S = 40,
    L = 56,
    M = 78,
    XL
} si;

int main()
{

    cout << "Size Small is  => " << S << endl;
    cout << "Size Middle is  => " << L << endl;
    cout << "Size Large  is  => " << M << endl;
    cout << "Size Extra is  => " << XL << endl;
    cout << "Size of SIze  => " << sizeof(si) << endl;
}