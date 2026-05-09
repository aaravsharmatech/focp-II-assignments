#include<iostream>
using namespace std;
int main()
{
    float marks[5];
    cout<<"Enter marks of 1st, 2nd, 3rd, 4th and 5th subject: ";
    cin>>marks[0]>>marks[1]>>marks[2]>>marks[3]>>marks[4];
    float total;
    for(int i=0;i<5;i++)
    {
        total+=marks[i];
    }
    float percentage;
    percentage = (total/500)*100;
    cout<<"Total marks are: "<<total<<endl;
    cout<<"Percentage marks are: "<<percentage<<"%";
    return 0;
}