#include <iostream>
using namespace std;
class MovieTicket
{
private:
    string movieName;

    int seatNumber;

    int ticketPrice;

    bool isBooked;

public:
    MovieTicket()
    {
        movieName = "BOOK A TICKET FIRST";
        seatNumber = 0;
        ticketPrice = 200;
        isBooked = false;
    }
    MovieTicket(string m, int s, int p)
    {
        movieName = m;

        seatNumber = s;

        ticketPrice = p;
    }
    void bookTicket();

    void cancelTicket();

    void displayTicketDetails();

    // void calculateTotalCost(int numberOfTickets);
    ~MovieTicket()
    {
        cout << "END";
    }
};
void MovieTicket::bookTicket()
{
    isBooked = true;
}
void MovieTicket::cancelTicket()
{
    isBooked = false;
}
void MovieTicket::displayTicketDetails()
{
    cout << "START" << endl;
    cout << "********" << movieName << "********" << endl;
    if (isBooked == true && seatNumber != 0)
    {
        cout << "yes you have a ticket" << endl;
        cout << "****" << seatNumber << "****" << endl;
        cout << "----------------" << ticketPrice << "$" <<"\n\n"<< endl;
    }
    else
    {
        cout << "no ticket info fetched !!"<<"\n\n"<<endl;
        /*cout<<"enter '' if you want to book a ticket";
        cin<<*/
    }
}

int main()
{
    MovieTicket l1, l2("dhurandar", 26, 4);
    l1.bookTicket();
    l1.displayTicketDetails();
    l2.displayTicketDetails();

    return 0;
}