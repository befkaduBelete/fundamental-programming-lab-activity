#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream my_file("abcd.txt");

    if (!my_file)
    {
        cout << " Unable to open this file \n";
        return 0;
    }
    my_file << "My first text" << endl;
    my_file << "My 2 text" << endl;
    my_file << "My 3 text" << endl;
    my_file << "My 4 text" << endl;

    my_file.close();

    return 0;
}