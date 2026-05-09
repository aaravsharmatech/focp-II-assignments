#include<iostream>
using namespace std;
int sum(int a,int b);
float sum(float a,float b);
double sum(double a,double b);
int main()
{
    cout<<"\n Sum is :"<<(15+30);
    cout<<"\n Sum is :"<<(15.5+30.5);
    cout<<"\n Sum is :"<<(15.9755+30.5778);
}
int sum(int a,int b)
{
cout<<"\n Sum is :"<<(a+b);
   return a+b;
}
float sum(float a,float b)
{
    cout<<"\n Sum is :"<<(a+b);
    return a+b;
}
double sum(double a,double b)
{
    cout<<"\n Sum is :"<<(a+b);
    return a+b;
}