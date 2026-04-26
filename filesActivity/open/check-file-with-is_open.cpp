#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream my_file("example.txt");
    // check if the file has been opened properly
    if (!my_file.is_open())
    {
        cout << "Error opening the file." << endl;
        return 1;
    }

    // close the file
    my_file.close();

    return 0;
}