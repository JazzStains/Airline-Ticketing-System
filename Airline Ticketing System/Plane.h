#pragma once
#include "unorderedArrayListType.h"
#include "ClassSeat.h"
#include <iostream>
#include "Time.h"
#include "Date.h"
#include <fstream>
#include <sstream>
#include "unorderedLinkedList.h"
#include "Seat.h"
using namespace std;
class Plane
{
public:
	Plane(int ID);
	Plane();
	int id;
	unorderedLinkedList<ClassSeat> classSeat;
	Time departureTime; 
	Time landingTime;
	Date departureDate;
	Date landingDate;
	string destination;
	string origin;
	string gateID;
	void operator=(const Plane& p);
	bool operator==(const Plane& p);
	void setSeat(string economy, string ID, Passenger person);
	bool isSeatAvailable(int seatNo, string economy);
	string getSeat(int seatNo, string economy);
private:


};
Plane::Plane(int ID) {
	id = ID;
	string text;
	string year;
	string month;
	string date;
	string hour;
	string min;
	char letter;

	ifstream planeList("Planes/PL" + to_string(ID) + ".txt");

	getline(planeList, text); //gets the departure date

	month += text.at(0);
	month += text.at(1);
	departureDate.month = stoi(month);

	date += text[3];
	date += text[4];
	departureDate.date = stoi(date);

	year += text[6];
	year += text[7];
	year += text[8];
	year += text[9];
	departureDate.year = stoi(year);

	getline(planeList, text);  //gets the landing date
	month = text[0];
	month += text[1];
	landingDate.month = stoi(month);

	date = text[3];
	date += text[4];
	landingDate.date = stoi(date);

	year = text[6];
	year += text[7];
	year += text[8];
	year += text[9];
	landingDate.year = stoi(year);



	getline(planeList, text); //gets the departure time
	hour += text[0];
	hour += text[1];
	departureTime.hour = stoi(hour);

	if (departureTime.hour >= 12) {
		departureTime.hour -= 12;
		departureTime.dayTime = "P.M.";
	}
	else
		departureTime.dayTime = "A.M.";
	if (departureTime.hour == 0)
		departureTime.hour = 12;


	min += text[3];
	min += text[4];
	departureTime.min = stoi(min);

	getline(planeList, text); //gets the landing time
	hour = text[0];
	hour += text[1];
	landingTime.hour = stoi(hour);

	if (landingTime.hour >= 12) {
	landingTime.dayTime = "P.M.";
	landingTime.hour -= 12;
	}
	else
		landingTime.dayTime = "A.M.";

	if (landingTime.hour == 0)
		landingTime.hour = 12;

	min = text[3];
	min += text[4];
	landingTime.min = stoi(min);

	getline(planeList, origin);
	getline(planeList, destination);
	getline(planeList, gateID);

	ClassSeat firstClass(1,"First Class");	
	ClassSeat secondClass(2,"Second Class");
	ClassSeat thirdClass(3, "Third Class");

	classSeat.insertLast(firstClass);
	classSeat.insertLast(secondClass);
	classSeat.insertLast(thirdClass);

	planeList.close();
}
Plane::Plane() {

}
void Plane::operator=(const Plane& p) {
	id = p.id;
	classSeat = p.classSeat;
	departureTime = p.departureTime;
	landingTime = p.landingTime;
	departureDate = p.departureDate;
	landingDate = p.landingDate;
	destination = p.destination;
	origin = p.origin;
	gateID = p.gateID;
}

bool Plane::operator==(const Plane& p) {
	if ((id == p.id) && (classSeat == p.classSeat) && (departureTime == p.departureTime) &&
		(landingTime == p.landingTime) && (departureDate == p.departureDate) &&
		(landingDate == p.landingDate) && (destination == p.destination) &&
		(origin == p.origin) && (gateID == p.gateID))
		return true;
	else
		return false;
}
void Plane::setSeat(string economy, string ID, Passenger person) {
	nodeType<ClassSeat>* current;

	current = classSeat.first;

	while (current->info.className != economy)
	{
		current = current->link;
	}
	current->info.setSeat(ID, person.getName());
}

string Plane::getSeat(int seatNo, string economy) {
	Seat seat;
	nodeType<ClassSeat>* current;
	current = classSeat.first;
	while (current->info.className != economy)
	{
		current = current->link;
	}
	seat =  current->info.seats.getKThElement(seatNo);
	return seat.id;
}

bool Plane::isSeatAvailable(int seatNo, string economy) {
	Seat seat;
	nodeType<ClassSeat>* current;
	current = classSeat.first;
	while (current->info.className != economy)
	{
		current = current->link;
	}
	if (current->info.isOccupied(seatNo) == true) {
		return false;
	}
	return true;
}