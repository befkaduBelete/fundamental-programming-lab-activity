#include <iostream>
using namespace std;
float PI = 3.14;
class Circle
{
public:
    float raduis;
    void area(float r)
    {
        cout << "Area =  " << PI * r * r;
    }
};

int main()
{
    Circle c;
    cout << " Enter the circle radius \n";
    cin >> c.raduis;
    cout << "AREA WILL BE \n";
    c.area(c.raduis);
}