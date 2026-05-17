#include <iostream>
using namespace std;
class Calculator
{

private:
    int num1, num2;

public:
    Calculator(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }
    int add()
    {
        return num1 + num2;
    }
    int sub()
    {
        return num1 - num2;
    }
    void display()
    {
        cout << num1 << " - " << num2 << " = " << add() << endl;
        cout << num1 << " - " << num2 << " = " << sub() << endl;
    }
};

int main()
{
    Calculator cal(2, 4);
    cal.display();
}