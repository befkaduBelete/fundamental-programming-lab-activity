#include <iostream>
using namespace std;
class Room
{

public:
    int w;
    int l;
    int area()
    {
        return l * w;
    }
};

int main()
{
    Room room1, room2;
    cout << "LIVING ROOM \n";
    cout << "_________________\n";
    cout << "Enter width \n";
    cin >> room1.w;
    cout << "Enter lenght \n";
    cin >> room1.l;
    cout << "Area = >"
         << room1.area() << endl;
    cout << " Marser BED ROOM\n";
    cout << "_________________\n";
    cout << "Enter width \n";
    cin >> room1.w;
    cout << "Enter lenght \n";
    cin >> room1.l;
    cout << "Area = >"
         << room1.area() << endl;

    return 0;
}
