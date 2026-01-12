#include<iostream>
using namespace std;
class Ticket{
    private:
    string passengerName;
    string flightNumber;
    string seatNumber;
    public:
    Ticket(string passengerName,string flightNumber,string seatNumber){
        this->passengerName=passengerName;
        this->flightNumber=flightNumber;
        this->seatNumber=seatNumber;
    }
    Ticket();
};