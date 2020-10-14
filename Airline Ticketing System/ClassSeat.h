#pragma once
#include <iostream>
#include "unorderedLinkedList.h"
#include "Seat.h"
using namespace std;
class ClassSeat {
public:
	int id;
	string className;
	unorderedLinkedList<Seat> seats;
	ClassSeat(int ID, string ClassName);
	void operator=(const ClassSeat& c);
	bool operator==(const ClassSeat& c);
	ClassSeat();
	void setSeat(string ID,  Name person); //sets the seat of the list as occupied and adds passenger
	bool isOccupied(int seatNo);
private:
	
};
ClassSeat::ClassSeat( int ID, string ClassName) {
	className = ClassName;
	id = ID;
	Seat seat;
	string idName;
	if (className == "First Class") {
		for (int row = 1; row <= 3; row++) {
			for (int column = 0; column < 4; column++) {

				switch (column)
				{
				case(0):
					idName = "A" + to_string(row);
					seat.setID(idName);
					seats.insertLast(seat);
					break;
				case(1):
					idName = "B" + to_string(row);
					seat.setID(idName);
					seats.insertLast(seat);
					break;
				case(2):
					idName = "C" + to_string(row);
					seat.setID(idName);
					seats.insertLast(seat);
					break;
				case(3):
					idName = "D" + to_string(row);
					seat.setID(idName);
					seats.insertLast(seat);
					break;
				default:
					break;
				}
			}
		}
	}
	else if (className == "Second Class") {
		for (int row = 5; row <= 11; row++) {
			for (int column = 0; column < 4; column++) {

				switch (column)
				{
				case(0):
					idName = "A" + to_string(row);
					seat.setID(idName);
					seats.insertLast(seat);
					break;
				case(1):
					idName = "B" + to_string(row);
					seat.setID(idName);
					seats.insertLast(seat);
					break;
				case(2):
					idName = "C" + to_string(row);
					seat.setID(idName);
					seats.insertLast(seat);
					break;
				case(3):
					idName = "D" + to_string(row);
					seat.setID(idName);
					seats.insertLast(seat);
					break;
				default:
					break;
				}
			}
		}
	}
	else if (className == "Third Class") {
		for (int row = 12; row <= 26; row++) {
			for (int column = 0; column < 6; column++) {
	
				switch (column)
				{
				case(0):
					idName = "A" + to_string(row);
					seat.setID(idName);
					seats.insertLast(seat);
					break;
				case(1):
					idName = "B" + to_string(row);
					seat.setID(idName);
					seats.insertLast(seat);
					break;
				case(2):
					idName = "C" + to_string(row);
					seat.setID(idName);
					seats.insertLast(seat);
					break;
				case(3):
					idName = "D" + to_string(row);
					seat.setID(idName);
					seats.insertLast(seat);
					break;
				case(4):
					idName = "E" + to_string(row);
					seat.setID(idName);
					seats.insertLast(seat);
					break;
				case(5):
					idName = "F" + to_string(row);
					seat.setID(idName);
					seats.insertLast(seat);
					break;
				default:
					break;
				}
			}
		}
	}
}
void ClassSeat::operator=(const ClassSeat& c) {
	id = c.id;
	className = c.className;
	seats = c.seats;
}

bool ClassSeat::operator==(const ClassSeat& c) {
	if ((id == c.id) && (className == c.className) && (seats == c.seats)) {
		return true;
	}
	else return false;
}
ClassSeat::ClassSeat() {

}

void ClassSeat::setSeat(string ID, Name person) {
	nodeType<Seat>* current;

	current = seats.first;

	while (current->info.id != ID)
	{
		current = current->link;
	}
	current->info.occupied = true;
	current->info.passenger = person;
}

bool ClassSeat::isOccupied(int seatNo){
	nodeType<Seat>* current;

	current = seats.first;
	int counter = 1;
	while (counter < seatNo) {
		current = current->link;
		counter ++;
	}
	if (current->info.occupied == true)
		return true;

	return false;
}