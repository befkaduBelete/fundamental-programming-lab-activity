#include <iostream>
using namespace std;

template <typename T1, typename T2>

void add(T1 a, T2 b)
{

    cout << a << " +" << b << "= " << a + b << endl;
}

int main()
{
    add(10, 30);
    add(9.6, 7);
    return 0;
}