#include <iostream>
using namespace std;

template <typename T1, typename T2>

void swapValue(T1 &a, T2 &b)
{

    cout << "Befor swaping \n";
    cout << "X= " << a << endl;
    cout << "B =" << b << endl;

    auto temp = a;
    a = b;
    b = temp;

    cout << "Befor swaping \n";
    cout << "X= " << a << endl;
    cout << "B =" << b << endl;
}

int main()
{
    int x = 20.5;
    int b = 50;
    swapValue(b, x);

    // float x = 204, b = 50.9;
    // swapValue(x, b);

    // char x = 'A', b = 'W';
    // swapValue(x, b);

    return 0;
}