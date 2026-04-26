#include <iostream>
using namespace std;

struct Name
{
    string f_name;
    string m_name;
    string l_name;
};
struct Address
{
    int woreda;
    string phone_number;
    string k_ketema;
};
struct Account
{
    float balance;
    string a_number;
    Name full_name;
    Address addres;
};
int main()
{
    Account c1;
    cout << " Enter full name \n";
    cin >> c1.full_name.f_name >> c1.full_name.m_name >> c1.full_name.l_name;
    cout << " Enter  account number \n";
    cin >> c1.a_number;
    cout << " Enter  account Balance \n";
    cin >> c1.balance;
    cout << " Enter Woreda \n";
    cin >> c1.addres.woreda;
    cout << " Enter Kfle ketema \n";
    cin >> c1.addres.k_ketema;
    cout << " Enter Kfle phone number  \n";
    cin >> c1.addres.phone_number;

    cout << " User information\n";
    cout << "_________________________________\n";

    cout << " Full Name " << c1.full_name.f_name << c1.full_name.m_name << c1.full_name.l_name << endl;
    cout << " Account Number : " << c1.a_number << endl;
    cout << " Balance " << c1.balance << endl;
    cout << " Woreda :" << c1.addres.woreda << endl;
    cout << "Kfle ketema :" << c1.addres.k_ketema << endl;
    cout << " phone number :" << c1.addres.phone_number;
}