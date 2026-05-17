#include <iostream>
using namespace std;

template <typename B, typename C>
B tem2(C num1, B num2)
{

    return num1 > num2 ? num1 : num2
}

template <typename B>
B temp1(B num1, B num2)
{

    return num1 > num2 ? num1 : num2
}

int main()
{
    cout << tem2<int, float>(4, 5.7);
    cout << tem2(2.4, 5);
    cout << tem2(2.4, 5);
    cout << tem2(2, 5);
    cout << tem1(2.8, 5.6);
}