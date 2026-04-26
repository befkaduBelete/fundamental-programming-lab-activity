#include <iostream>
using namespace std;
void add(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    cout << num1 << "+ " << num2 << " = " << num1 + num2 << endl;
}
void display()
{
    cout << " This is my first message \n";
    return;
    cout << " This is my second meaage \n";
}

int multiplication(int num1, int num2)
{
    cout << "This is product \n";
    return num1 * num2;
}
int main()
{
    // int a = 2;
    // int b = 3;
    // int product;
    // add(a, b);
    // add(10, 20);
    // product = multiplication(1, 3);
    // cout << "Product  = " << product * 2 << "\n";
    display();
    return 0;
    display();
}