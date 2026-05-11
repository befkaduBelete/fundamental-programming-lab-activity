#include <iostream>
using namespace std;
template <typename T>

void swapValue(T &a, T &b)
{
    cout << "Befor swaping \n";
    cout << "X= " << a << endl;
    cout << "B =" << b << endl;
    T temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Afte swaping \n";
    cout << "X= " << a << endl;
    cout << "B =" << b << endl;
}

int main()
{
    int x = 20, b = 50;
    swapValue(x, b);

    float x = 204, b = 50.9;
    swapValue(x, b);

    char x = 'A', b = 'W';
    swapValue(x, b);

    return 0;
}