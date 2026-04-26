#include<iostream>
using namespace std;
void displaynumber(int num1, float num2){
    cout<<"THis is int number"<<num1<<endl;
    cout<<"This is float number"<<num2;
}
int main(){
    int a;
    float n;

    cout<<" Enter int number";
    cin>>a;
    cout<<"Enter float number ";
    cin>>n;
    displaynumber(a,n);

    return 0;
}