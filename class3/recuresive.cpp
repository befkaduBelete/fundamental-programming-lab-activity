#include <iostream>
using namespace std;

void displayNumber(int = 10)
{
    cout << "Number " << endl;
}

void displayNumber(float = 10.5)
{
    cout << "Number " << endl;
}

int main()
{
    displayNumber(20);
    return 0;
}