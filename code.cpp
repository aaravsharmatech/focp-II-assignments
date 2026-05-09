#include<iostream>
using namespace std;
class shape
{
    public:
    shape(){cout<<"n\ shape default const called";}
    void area()
    {cout<<"\n no dim no area";}
void display()
{ cout<<"\n we are 2 d shapes";}

};
class Rectangle:public shape
{
    int lenght;int widht;
    public:
    Rectangle(int l=5, int w=10):lenght(1),widht(w)
{cout<<"\n Rectangle object created";}
void area () {cout<<"\n area ="<<length*width;}

};
int main()
{shape s1;
Rectangle}