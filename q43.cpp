#include <iostream>
using namespace std;

class Product
{
private:
    string productName;
    float price;
    int quantity;

public:
    // Constructor
    Product(string name, float p, int q)
    {
        productName = name;
        price = p;
        quantity = q;
    }

    // Function to calculate total cost
    float calculateTotalCost()
    {
        return price * quantity;
    }

    // Function to display product details
    void displayDetails()
    {
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Cost: " << calculateTotalCost() << endl;
        cout << endl;
    }

    // Destructor
    ~Product()
    {
        cout << "Product " << productName << " is removed from memory." << endl;
    }
};

int main()
{
    // Creating two product objects
    Product p1("Laptop", 50000, 1);
    Product p2("Headphones", 2000, 2);

    // Display details
    p1.displayDetails();
    p2.displayDetails();

    return 0;
}