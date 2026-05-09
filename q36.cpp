
#include <iostream>
using namespace std;

class MovieTicket {
    string name; int seat; double price; bool booked;
public:
    MovieTicket(string n="Unknown", int s=0, double p=200) {
        name=n; seat=s; price=p; booked=false;
    }
    void book(){ if(!booked) booked=true; }
    void cancel(){ if(booked) booked=false; }
    void show(){ cout<<name<<" "<<seat<<" "<<price<<" "<<(booked?"Booked":"Not")<<endl; }
    double total(int n){ return price*n; }
};

int main(){
    MovieTicket t1("Avengers",1,300), t2("Jawan",2,250);
    t1.book(); t2.book(); t2.cancel();
    t1.show(); t2.show();
    cout<<"Total:"<<t1.total(2);
    
}