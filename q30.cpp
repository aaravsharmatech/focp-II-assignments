#include<iostream>
using namespace std;
int  main()
{
    float salary[10];
    double total=0;
    for(int i=0;i<10;i++)
    {
        cout<<"Enter the salary of "<<i+1<<" employee: ";
        cin>>salary[i];
        total+=salary[i];
    }
    float average=0;
    average = total/10;
    cout<<"Total salary of all the employees are: "<<total<<endl;
    cout<<"Average salary of the employees are: "<<average;
    return 0;
}