#include<iostream>
using namespace std;
int main()
{
    int choice=0,temp=0,result=0;
    cout<<"Enter 1 for centrigade and 2 for fahernheit: ";
    cin>>choice;
    if(choice == 1)
    {
        cout<<"Enter temperature in centrigade: ";
        cin>>temp;
        result = (temp * 1.8) + 32;
        cout<<"Temperature in fahrenheit is: "<<result;
    }
    else if(choice == 2)
    {
        cout<<"Enter temperature in fahrenheit: ";
        cin>>temp;
        result = (temp - 32) * 0.55;
        cout<<"Temperature in centrigade is: "<<result;
    }
    else
    {
        cout<<"wrong option";
    }
    return 0;
}
