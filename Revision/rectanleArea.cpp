#include <iostream>
using namespace std;
class Area
{
public:
    float lenght;
    float breadth;
    float setDim(float lenght, float breadth)
    {
        this->lenght = lenght;
        this->breadth = breadth;
        return lenght;
    };
    float getArea()
    {

        return this->breadth * this->lenght;
    };
};

int main()
{
    Area rectangle;
    cout << "Enter the length \n";
    cin >> rectangle.lenght;
    cout << "ENther breadth \n";
    cin >> rectangle.breadth;
    rectangle.setDim(rectangle.lenght, rectangle.breadth);
    cout << "AREA \n";
    cout << rectangle.getArea();
    return 0;
}
