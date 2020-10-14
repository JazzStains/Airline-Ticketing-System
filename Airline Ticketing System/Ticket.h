//#pragma once
#ifndef Ticket_h
#define Ticket_h

//#include "Class_Passenger.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include "Name.h"
using namespace std;
// 
class Ticket
{
private:
    Name tName;
    string origin;
    string destination;
    string depDate;
    string depTime;
    string arrDate;
    string arrTime;
    string flightNo;
    string gateNo;

    int ticketID;
public:
    Ticket();
    Ticket(int&); // newly added
    void clear();
    void readTicket(ifstream&); // edit: &

    string getOrigin();
    string getDestination();
    string getDepDate();
    string getDepTime();
    string getArrDate();
    string getArrTime();
    string getFlightNo();
    string getGateNo();

};
Ticket::Ticket()
{
    this->clear();
}
Ticket::Ticket(int& vectorID)
{
    ticketID = vectorID;
}
void Ticket::clear()
{
    //tName = "N";
    origin = "NULL";
    destination = "NULL";
    depDate = "NULL";
    depTime = "NULL";
    arrDate = "NULL";
    arrTime = "NULL";
    flightNo = "NULL";
    gateNo = "NULL";
}
void Ticket::readTicket(ifstream& passFile)
{
    while (passFile.good())
    {
        getline(passFile, origin); // re-reads the first line to fix the pass by reference error for ifstream
        getline(passFile, origin);
        getline(passFile, destination);
        passFile >> depDate;
        passFile >> depTime;
        passFile >> arrDate;
        passFile >> arrTime;
        passFile >> flightNo;
        passFile >> gateNo;
        break;
    }

}

//*************************GET FUNCTIONS******************************//
string Ticket::getOrigin()
{
    return this->origin;
}
string Ticket::getDestination()
{
    return this->destination;
}
string Ticket::getDepDate()
{
    return this->depDate;
}
string Ticket::getDepTime()
{
    return this->depTime;
}
string Ticket::getArrDate()
{
    return this->arrDate;
}
string Ticket::getArrTime()
{
    return this->arrTime;
}
string Ticket::getFlightNo()
{
    return this->flightNo;
}
string Ticket::getGateNo()
{
    return this->gateNo;
}
#endif