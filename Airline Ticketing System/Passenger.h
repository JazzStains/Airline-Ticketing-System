#pragma once
//#pragma once
#ifndef Passenger_h
#define Passenger_h

#include <fstream>
#include <string>
#include "Ticket.h"
#include "Name.h"
#include<vector>

/*****TEXT FORMAT****
passenger ID
FirstName/s
MiddleName
LastNames
Suffix/es
Citizenship
PassportID
*/
using namespace std;


class Passenger
{
private:
    ifstream inFile_Passenger;
    ofstream outFile_Passenger;
    //unorderedLinkedList<string> ticket_List;
    vector<Ticket> ticketList; // vector<Ticket> ticketList;
protected:
    Name name;
    string id;
    string citizenship;
    string passportNumber;
    Ticket ticket; // newly added
    int ticketCount;
public:
    // General Functions of class
    Passenger(); // Sets all the attributes to NULL and closes all files.
    void clear(); // Sets all the attributes to NULL and closes all files.
    bool FileCheck(string args); // Checks if the ID passed has a File. If true, it sets the ID of the class as well.
    void readInfo(); // Read all info from file to the Class object.
    void writeInfo(); // Writes all the attributes to the file.

    //Functions to get the class attributes
    string getID();
    string getFirstName();
    string getMiddleName();
    string getLastName();
    string getSuffix();
    string getCitizenship();
    string getPassportNumber();

    // Functions to change the class attributes
    void setID(string input);
    void setName(string fName, string mName, string lName, string sfix);
    void setCitizenship(string ctznshp);
    void setPassportNumber(string pNumber);
    Name getName();
    void addTicket();

};
Passenger::Passenger()
{
    this->clear();
}
void Passenger::clear()
{
    this->passportNumber = "NULL";
    this->citizenship = "NULL";
    this->id = "NULL";
    this->name.firstName = "NULL";
    this->name.middleName = "NULL";
    this->name.lastName = "NULL";
    this->name.suffix = "NULL";
    this->ticketCount = 0;
    ticketList.clear();
    this->inFile_Passenger.close();
    this->outFile_Passenger.close();
}
bool Passenger::FileCheck(string args)
{
    bool check;
    //this->inFile_Passenger.open("Passengers/"+args+".txt");
    this->inFile_Passenger.open(args + ".txt"); //-> used if text files are not in folder
    check = this->inFile_Passenger.is_open();
    if (check == true)
        this->id = args;
    this->inFile_Passenger.close();
    return check;
}
void Passenger::readInfo() // TBC
{
    // always use FileCheck() first
    int counter = 0;
    //this->inFile_Passenger.open("Passengers/"+this->id+".txt");
    this->inFile_Passenger.open(this->id + ".txt"); //-> used if text files are not in folder
    getline(inFile_Passenger, this->id);
    getline(inFile_Passenger, this->name.firstName);
    getline(inFile_Passenger, this->name.middleName);
    getline(inFile_Passenger, this->name.lastName);
    getline(inFile_Passenger, this->name.suffix);
    getline(inFile_Passenger, this->citizenship);
    getline(inFile_Passenger, this->passportNumber);
    inFile_Passenger >> this->ticketCount;
    if (!this->ticketCount == 0)
    {
        for (int i = 0; i < this->ticketCount; i++)
        {
            ticketList.emplace_back(Ticket(i));
            ticketList[i].readTicket(inFile_Passenger);
        }
    }
    else
        cout << "No tickets found..." << endl;
    this->inFile_Passenger.close();
}
void Passenger::writeInfo() // TBC
{
    //this->outFile_Passenger.open("Passengers/"+this->id+".txt");
    this->outFile_Passenger.open(this->id + ".txt"); //-if txt is outside
    this->outFile_Passenger << this->id << endl << this->name.firstName << endl
        << this->name.middleName << endl << this->name.lastName << endl
        << this->name.suffix << endl << this->citizenship << endl
        << this->passportNumber << endl;
    if (this->ticketCount != 0)
    {
        for (int i = 0; i < this->ticketCount; i++)
        {
            this->outFile_Passenger << this->ticketList[i].getOrigin() << endl
                << this->ticketList[i].getDestination() << endl
                << this->ticketList[i].getDepDate() << endl
                << this->ticketList[i].getDepTime() << endl
                << this->ticketList[i].getArrDate() << endl
                << this->ticketList[i].getArrTime() << endl
                << this->ticketList[i].getFlightNo() << endl
                << this->ticketList[i].getGateNo() << endl;
        }
    }
    else
        cout << "This passenger has no tickets...\n";

    this->outFile_Passenger.close();
}

//****************************GET FUNCTIONS*************************//
string Passenger::getID()
{
    return this->id;
}
string Passenger::getFirstName()
{
    return this->name.firstName;
}
string Passenger::getMiddleName()
{
    return this->name.middleName;
}
string Passenger::getLastName()
{
    return this->name.lastName;
}
string Passenger::getSuffix()
{
    return this->name.suffix;
}
string Passenger::getCitizenship()
{
    return this->citizenship;
}
string Passenger::getPassportNumber()
{
    return this->passportNumber;
}
//****************************SET FUNCTIONS*************************//
void Passenger::setID(string input)
{
    this->id = input;
}
void Passenger::setName(string fName, string mName, string lName, string sfix)
{
    this->name.firstName = fName;
    this->name.middleName = mName;
    this->name.lastName = lName;
    this->name.suffix = sfix;
}
void Passenger::setCitizenship(string ctznshp)
{
    this->citizenship = ctznshp;
}
void Passenger::setPassportNumber(string pNumber)
{
    this->passportNumber = pNumber;
}

Name Passenger::getName() {
    return name;
}
#endif