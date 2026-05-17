#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // open a text file for writing
    ofstream my_file("example.txt");

    // check the file for errors
    // case one to check the file make domment the other if you wnat use this
    if (!my_file)
    {
        cout << "Error: Unable to open the file." << endl;
        return 1;
    }

    // Case 2 to check the file make domment the other if you wnat use this
    if (!my_file.is_open())
    {
        cout << "Error: Unable to open the file." << endl;
        return 1;
    }

    // Case 3 to check the file make domment the other if you wnat use this
    if (my_file.fail())
    {
        cout << "Error: Unable to open the file." << endl;
        return 1;
    }

    // write multiple lines to the file
    my_file << "AASTU " << endl;
    my_file << "Software department " << endl;
    my_file << "Fundamental Programming II" << endl;

    // close the file
    my_file.close();

    return 0;
}