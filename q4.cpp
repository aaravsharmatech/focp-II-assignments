#include<iostream>
using namespace std;
int main()
{
    int item_no,quantity,unit_price,original_price;
    cout<<"Enter item number: ";
    cin>>item_no;
    cout<<"Enter Quantity: ";
    cin>>quantity;
    cout<<"Enter unit price: ";
    cin>>unit_price;
    original_price = unit_price*quantity;
    cout<<"Discounted price is: "<<original_price-(0.2*original_price);
    return 0;
}
