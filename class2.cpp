#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    string name;
    cout<<"\n Enter a & name: ";
    cin>>a;
    cin.ignore();
    getline(cin,name);
    cout<<"\n a = "<<a<<"\n name = "<<name;
    return 0;
}