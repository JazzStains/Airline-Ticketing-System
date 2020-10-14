#pragma once
#include "Passenger.h"
class Seat {
public:
	Seat(string ID, int Ocuppied);
	string id;
	bool occupied;

	void setID(string ID);
	Name passenger;
	Seat();
	void operator=(const Seat& s);
	bool operator==(const Seat& s);
private:
	
};
Seat::Seat(string ID, int Occupied) {
	id = ID;
	occupied = Occupied;
}
void Seat::setID(string ID) {
	id = ID;

}
Seat::Seat() {
	occupied = false;
	id = "none";
}

void Seat::operator=(const Seat& s) {
	id = s.id;
	occupied = s.occupied;
	passenger = s.passenger;
}
bool Seat::operator==(const Seat& s) {
	if ((id == s.id) && (occupied == s.occupied) && (passenger == s.passenger)) {
		return true;
	}
	else
		return false;
}