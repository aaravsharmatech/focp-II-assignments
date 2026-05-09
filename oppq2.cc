#include<iostream>
using namespace std;
class rectangle
{
    float length;
    float width;
    public:
    void inputDimensions();
    float calculateArea();
    float calculatePerimeter();
    void displayResult();
};
void rectangle::inputDimensions()
{
    cout<<"Enter length, Enter width : ";
    cin>>length>>width;
}
float rectangle::calculateArea()
{
    return (length * width);
}
floa
t rectangle::calculatePerimeter()
{
    return (2*(length+width));
}
void rectangle::displayResult()
{
    cout<<"Length is: "<<length<<"\nWidth is: "<<width<<"\nArea is: "<<calculateArea()<<"\nPerimeter is: "<<calculatePerimeter();
}
int main()
{
    rectangle r1;
    r1.inputDimensions();
    r1.displayResult();
    return 0;
}