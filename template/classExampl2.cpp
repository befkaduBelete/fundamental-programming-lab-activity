#include <iostream>
using namespace std;
template <class T1, class T2>
class Calculator
{
private:
    T1 num1;
    T2 num2;

public:
    Calculator()
    {
        cout << "THis is the constracter function \n";
    }

    void add(T1 num1, T2 num2)
    {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }
    void substract(T2 num1, T1 num2)
    {

        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    }
    void displayResult()
    {
        cout << "Number are " << num1 << "& " << num2 << endl;
        // cout << num1 << " + " << num2 << " = " << add() << endl;
    }
};

int main()
{

    // intCal.add();
    // int n1, n2;
    // cout << "ENter the numbers \n";
    // cin >> n1 >> n2;
    Calculator<int, int> intCal;
    intCal.add(3, 6);
    Calculator<float, int> flatCal;
    flatCal.substract(6.9, 3.5);
}