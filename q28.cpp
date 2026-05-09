#include<iostream>
using namespace std;
int main()
{
    int numbers[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter "<<i+1<<" number: ";
        cin>>numbers[i];
    }
    int odd_sum=0,even_sum=0;
    for(int j=0;j<5;j++)
    {
        if(numbers[j]%2==0)
        {
            even_sum+=numbers[j];
        }
        else
        {
            odd_sum+=numbers[j];
        }
    }
    cout<<"Sum of all odd numbers are: "<<odd_sum<<endl;
    cout<<"Sum of all even numbers are: "<<even_sum;
    return 0;
}