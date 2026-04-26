#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream my_file("studentlis3.txt");
    if (!my_file)
    {
        cout << "Unable to find this file \n";
        return 0;
    }
    string line;
    while (!my_file.eof())
    {
        getline(my_file, line);

        cout << line << endl;
    }
    my_file.close();
    return 0;
}