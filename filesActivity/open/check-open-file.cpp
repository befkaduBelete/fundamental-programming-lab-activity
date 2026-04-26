#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream my_file("example.txt");
    // check if the file has been opened properly
    if (!my_file)
    {

        // print error message
        cout << "Error opening the file." << endl;

        // terminate the main() function
        return 1;
    }

    // close the file
    my_file.close();

    return 0;
}