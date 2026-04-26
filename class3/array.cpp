#include <iostream>
using namespace std;
int displayArry(int a[], int size)
{

    for (int i = 0; i < size; i++)
        cout << "The " << i + 1 << " Element is " << a[i] << endl;
    return 0;
}

int sumArry(int a[], int size)
{

    int sum = 0;
    for (int i = 0; i < size; i++)
        sum = sum + a[i];
    return sum;
}

int accepArry(int a[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << "Enter  " << i + 1 << " element is \n";
        cin >> a[i];
    }

    return 0;
}

int main()
{
    int numbers[10], size = 5;
    accepArry(numbers, size);
    displayArry(numbers, size);

    cout << "\n The sum of Array element is = " << sumArry(numbers, size);
    return 0;
}