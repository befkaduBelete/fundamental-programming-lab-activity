#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream my_file("abcd.txt");
    my_file.close();

    return 0;
}
