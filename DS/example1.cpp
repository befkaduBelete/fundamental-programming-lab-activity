#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ofstream my_file("myfile1.txt");
    my_file.close();
    return 0;
}