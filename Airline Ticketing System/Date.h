#pragma once
struct Date {
	int month;
	int date;
	int year;
	bool operator==(const Date& d);
	void operator=(const Date& d);

};

bool Date::operator==(const Date& d) {
	if ((month == d.month) && (date == d.date) && (year == d.year)) 
		return true;

	return false;

}
void Date::operator=(const Date& d) {
	month = d.month;
	date = d.date;
	year = d.year;
}
