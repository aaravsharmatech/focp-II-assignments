#include<iostream>
using namespace std;
void swap(int a ,int b)
{
    int x=0;
    x=a;
    a=b;
    b=x;
    cout<<"your value of a is "<<a<<" and b is "<<b;
}
int main()
{
    int x,y;
    cout<<"enter your deserved values of a&b: ";
    cin>>x>>y;
    swap(x,y);
    return 0;
}