#include "DaysWeeks.h"
#include <iostream>
using namespace std;


Date::Date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}


void Date::Input()
{
	do {
		cout << "Input day: ";
		cin >> day;
		if (day <= 0 || day > 31)
			cout << "Wrong input!" << endl << endl;
	} while (day <= 0 || day > 31);

	do {
		cout << "Input month: ";
		cin >> month;
		if (month <= 0 || month > 12)
			cout << "Wrong input!" << endl << endl;
	} while (month <= 0 || month > 12);

	do {
		cout << "Input year: ";
		cin >> year;
		if (year <= 0 || year > 2077)
			cout << "Wrong input!" << year << endl;
	} while (year <= 0 || year > 2077);
}

void Date::Print() const
{
	cout << "Date: " << this->day << "." << this->month << "." << this->year << endl;
}



Date Date::operator+(int a)
{
	day += a;

	while (day > 31) {
		day -= 31;
		month++;
		if (month > 12) {
			month = 1;
			year++;
		}
	}

	return *this;
}

Date Date::operator-(int a)
{
	day -= a;

	while (day <= 0) {
		month--;
		if (month <= 0) {
			month = 12;
			year--;
		}
		day += 31;
	}

	return *this;
}

Date Date::operator-(Date b)
{
	return Date(day - b.day, month - b.month, year - b.year);
}

Date& Date:: operator++(int )
{
	day++;

	if (day > 31) {
		day = 1;
		month++;
		if (month > 12) {
			month = 1;
			year++;
		}
	}

	return *this;
}

Date& Date::operator--(int )
{
	day--;

	if (day <= 0) {
		day = 31;
		month--;
		if (month <= 0) {
			month = 12;
			year--;
		}

	}

	return *this;
}


Date& Date::operator++() {
	++day;

	if (day > 31) {
		day = 1;
		++month;
		if (month > 12) {
			month = 1;
			++year;
		}
	}

	return *this;
}
Date& Date::operator--() {
	--day;

	if (day <= 0) {
		day = 31;
		--month;
		if (month <= 0) {
			month = 12;
			--year;
		}

	}

	return *this;
}

Date& Date::operator+=(int a)
{
	this->day += a;

	while (this->day > 31) {
		this->day -= 31;
		this->month++;
		if (this->month > 12) {
			this->month = 1;
			this->year++;
		}
	}

	return *this;
}



Date& Date::operator-=(int a)
{
	day -= a;

	while (day <= 0) {
		month--;
		if (month <= 0) {
			month = 12;
			year--;
		}
		day += 31;
	}

	return *this;
}

bool Date::operator<(Date b)
{
	if ((year < b.year || year == b.year) && (month < b.month || month == b.month) && (day < b.day || day == b.day))
	{
		return true;
	}

	return false;
}

bool Date::operator>(Date b)
{
	if ((year > b.year || year == b.year) && (month > b.month || month == b.month) && (day > b.day || day == b.day))
	{
		return true;
	}

	return false;
}

bool Date::operator<=(Date b)
{
	if ((year <= b.year || year == b.year) && (month <= b.month || month == b.month) && (day <= b.day || day == b.day))
	{
		return true;
	}

	return false;
}

bool Date::operator>=(Date b)
{
	if ((year >= b.year || year == b.year) && (month >= b.month || month == b.month) && (day >= b.day || day == b.day))
	{
		return true;
	}

	return false;
}

bool Date::operator==(Date b)
{
	if (year == b.year && month == b.month &&  day == b.day)
	{
		return true;
	}

	return false;
}

bool Date::operator!=(Date b)
{
	if (year != b.year && month != b.month && day != b.day)
	{
		return true;
	}

	return false;
}

void Date::setDay(int d)
{
	if (d <= 0 || d > 31) {
		day = d;
	}
	else {
		cout << "Wrong!" << endl;
		return;
	}
}

void Date::setMonth(int m)
{
	if (m <= 0 || m > 12) {
		day = m;
	}
	else {
		cout << "Wrong!" << endl;
		return;
	}
}

void Date::setYear(int y)
{
	if (y <= 0 || y > 2077) {
		day = y;
	}
	else {
		cout << "Wrong!" << endl;
		return;
	}
}

int Date::getDay() const
{
	return day;
}

int Date::getMonth() const
{
	return month;
}

int Date::getYear() const
{
	return month;
}