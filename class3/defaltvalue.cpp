#include <iostream>
using namespace std;
// int displayNumber(int = 90);
int displayNumber(int number = 90)
{
    cout << "Number " << number << endl;
    return number;
}

int main()
{
    cout << displayNumber();
    cout << displayNumber(1000);
    return displayNumber();
}
