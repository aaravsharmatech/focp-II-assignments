#include<iostream>
using namespace std;

int main(){
    int prices[10];

    cout << "Enter prices of 10 items: " << endl;
    for(int i = 0; i < 10; i++){
        cout << "Item " << (i + 1) << ": ";
        cin >> prices[i];
    }

    int maximum = prices[0];
    for(int i  = 0; i < 10; i++){
        if(prices[i] > maximum){
            maximum = prices[i];
        }
    }

    cout << "Maximum price: " << maximum << endl;

    return 0;
}