#include<iostream>
using namespace std;
class Rectangle
{
    int length;
    int width;
    public: 
    Rectangle()
    { 
        length=5;
        width= 5 ;
    } 
    void display()
 {cout <<"\n Length = "<<length;
 cout <<"\n Width = "<<width;}
//friend void area(Rectangle obj);
//friend class Dimension;
//friend void Dimension:: perimeter(Rectangle);
} ;
void area (Rectangle obj)
{
int area=obj.length*obj.width;
 cout<<"\n Area = "<<area;
}
int main()
{
    Rectangle r1, r2(23,45);
     r1.display();
area (r1);
r2. display();
area (r2) ;
return 0;
}
