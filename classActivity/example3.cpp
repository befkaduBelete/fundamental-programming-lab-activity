#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream my_file("studentlis.txt");

    string fname, lname;
    cout << " Enter the first name \n";
    cin >> fname;

    cout << " Enter the last  name \n";
    cin >> lname;
    my_file << "First Name : " << fname << endl;
    my_file << "Lass name  : " << lname << endl;

    my_file.close();

    return 0;
}