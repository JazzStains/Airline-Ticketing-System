#pragma once
#include <iostream>
using namespace std;
struct Time {
	int hour;
	int min;
	string dayTime;

	bool operator==(const Time& t);
	void operator=(const Time& t);

};

bool Time::operator==(const Time& t) {
	if ((hour == t.hour) && (min == t.min) && (dayTime == t.dayTime))
		return true;

	return false;

}
void Time::operator=(const Time& t) {
	hour = t.hour;
	min = t.min;
	dayTime = t.dayTime;
}

