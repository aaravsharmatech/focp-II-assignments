#include<iostream>
using namespace std;

int main(){
    int temp[30];
    for(int i = 0; i < 30; i++){
        cout << "Enter temperature for day " << (i + 1) << ": ";
        cin >> temp[i];
    }

    int minimum = temp[0];
    for(int i = 1; i < 30; i++){
        if(temp[i] < minimum){
            minimum = temp[i];
        }
    }

    cout << "Minimum temperature recorded: " << minimum << endl;

    return 0;
}

