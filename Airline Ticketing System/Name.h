#pragma once
#include <iostream>
using namespace std;
struct Name {
	string lastName;
	string firstName;
	string middleName;
	string suffix;

	bool operator==(const Name& n);
	void operator=(const Name& n);
};
bool Name ::operator==(const Name& n) {
	if ((lastName == n.lastName) && (firstName == n.firstName) && (middleName == n.middleName) &&
		(suffix == n.suffix)) {
		return true;
	}
	return false;

}
void Name::operator=(const Name& n) {
	lastName = n.lastName;
	middleName = n.middleName;
	firstName = n.firstName;
	suffix = n.suffix;
}