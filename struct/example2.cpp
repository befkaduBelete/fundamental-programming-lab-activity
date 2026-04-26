#include <iostream>
using namespace std;
// Declaration & and initialization
struct volume
{
    float l;
    float w;
    float d;
} v1 = {2.2, 3.4, 5.0};

// int a = 9;
int main()
{
    volume v2 = {3.9, 9, 8.9};
    cout << "W = " << v1.w << endl;
    cout << "L = " << v1.l << endl;
    cout << "D = " << v1.d << endl;
    cout << "V = " << v1.w * v1.d * v1.l << endl;

    cout << v1.d;
    return 0;
}