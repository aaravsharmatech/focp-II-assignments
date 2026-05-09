#include<iostream>
using namespace std;
int main()
{
    int numbers[5];
    int count=0;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter number "<<i+1<<": ";
        cin>>numbers[i];
        if(numbers[i]%3==0 && numbers[i]%5==0)
        {
            count++;
        }
    }
    cout<<"Amount of numbers which can be divided by 5 and 3 are: "<<count;
    return 0;
}