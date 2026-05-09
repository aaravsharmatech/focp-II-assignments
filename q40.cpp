#include <iostream>
using namespace std;
class student{
    string name;
    int marks;
    public:

    student()
    {
        name="not assigned yet";
        marks=0;
    }
    student(string n,int m){
        name=n;
        marks=m;

    }
    void member();

    

};
void student:: member(){
    cout<<"***"<<endl;
    cout<<"This is "<<name<<"'s report"<<endl;
    cout<<"the student has scored ->"<<marks<<endl;
    cout<<"******"<<endl;
}
int main(){

    student s1,s2("aarav",119);
    s1.member();
    s2.member();


    return 0;
}