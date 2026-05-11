#include <iostream>
using namespace std;

template <typename T>
void display(T a)
{
    cout << "The output: " << a << endl;
}

int main()
{
    display("A");
    display(2);
    display(2.4);
    display("Befkadu ");

    return 0;
}