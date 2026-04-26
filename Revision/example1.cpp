#include <iostream>
using namespace std;

struct Student1
{
    /* data */
    int rol_id;
    char name[30];
    char city[20];
    char kebele[40];
    char wereda[50];
} e = {12, "Alemitu", "AA", "10", "Wereda 1"};

union Student2
{
    int rol_id;
    char name[30];
    char city[20];
    char kebele[40];
    char wereda[50];
} e = {12};

int main()
{
    Student1 S1;
    Student2 S2;
    cout << "The size of structure is  = > " << sizeof(S1) << endl;
    cout << "The size of union is => " << sizeof(S2) << endl;
    return 0;
}