#include <iostream>
using namespace std;
class car
{
    string brand;
    int price;

public:
    car()
    {
        brand = "nos pite buy a car";
        price = 0;
    }
    car(string b, int p)
    {
        brand = b;
        price = p;
    }
    void display()
    {
        cout << "______" << brand << "______" << endl;
        cout << "__" << price<<endl;
    }
};

int main()
{

    car c1("ODDI", 4521), c2;
    c1.display();
    c2.display();

    return 0;
}