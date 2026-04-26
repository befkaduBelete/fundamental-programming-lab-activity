#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream my_file("example.txt");

    if (my_file.fail())
    {
        cout << "Error opening the file." << endl;
        return 1;
    }
    // close the file
    my_file.close();

    return 0;
}