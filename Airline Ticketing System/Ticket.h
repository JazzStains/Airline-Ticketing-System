//#pragma once
#ifndef Ticket_h
#define Ticket_h

//#include "Class_Passenger.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include "Name.h"
#include "Time.h"
#include "Date.h"
using namespace std;
// 
class Ticket
{
private:
    Name tName;
    string origin;
    string destination;
    Date depDate;
    Time depTime;
    Date arrDate;
    Time arrTime;
    string flightNo;
    string gateNo;

    int ticketID;
public:
    Ticket();
    Ticket(int&); // newly added
    void readTicket(ifstream&); // edit: &

    string getOrigin();
    string getDestination();
    Date getDepDate();
    Time getDepTime();
    Date getArrDate();
    Time getArrTime();
    string getFlightNo();
    string getGateNo();

};
Ticket::Ticket()
{
}
Ticket::Ticket(int& vectorID)
{
    ticketID = vectorID;
}

void Ticket::readTicket(ifstream& passFile)

{
    string month;
    string date;
    string year;
    string text;
    string hour;
    string min;
    while (passFile.good())
    {
        getline(passFile, origin); // re-reads the first line to fix the pass by reference error for ifstream
        getline(passFile, origin);
        getline(passFile, destination);

        getline(passFile, text); //gets the departure date

        month += text.at(0);
        month += text.at(1);
        depDate.month = stoi(month);

        date += text[3];
        date += text[4];
        depDate.date = stoi(date);

        year += text[6];
        year += text[7];
        year += text[8];
        year += text[9];
        depDate.year = stoi(year);

        getline(passFile, text);
        hour = text[0];
        hour += text[1];
        depTime.hour = stoi(hour);

        if (depTime.hour >= 12) {
            depTime.hour -= 12;
            depTime.dayTime = "P.M.";
        }
        else
            depTime.dayTime = "A.M.";
        if (depTime.hour == 0)
            depTime.hour = 12;


        min = text[3];
        min += text[4];
        depTime.min = stoi(min);

        getline(passFile, text); //gets the departure date

        month = text.at(0);
        month += text.at(1);
        arrDate.month = stoi(month);

        date = text[3];
        date += text[4];
        arrDate.date = stoi(date);

        year = text[6];
        year += text[7];
        year += text[8];
        year += text[9];
        arrDate.year = stoi(year);

        
        getline(passFile, text);
        hour = text[0];
        hour += text[1];
        arrTime.hour = stoi(hour);

        if (arrTime.hour >= 12) {
            arrTime.hour -= 12;
            arrTime.dayTime = "P.M.";
        }
        else
            arrTime.dayTime = "A.M.";
        if (arrTime.hour == 0)
            arrTime.hour = 12;


        min += text[3];
        min += text[4];
        arrTime.min = stoi(min);

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
Date Ticket::getDepDate()
{
    return this->depDate;
}
Time Ticket::getDepTime()
{
    return this->depTime;
}
Date Ticket::getArrDate()
{
    return this->arrDate;
}
Time Ticket::getArrTime()
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