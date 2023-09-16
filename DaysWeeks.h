#pragma once
class Date
{
	int day;
	int month;
	int year;
public:
	Date() = default;

	Date(int, int, int);

	void Input();
	void Print() const;

	void setDay(int);
	void setMonth(int);
	void setYear(int);

	int getDay() const;
	int getMonth() const;
	int getYear() const;

	Date operator+(int a);
	Date operator-(int a);
	Date operator-(Date a);

	Date& operator++(int);
	Date& operator--(int);

	Date& operator++();
	Date& operator--();

	Date& operator+=(int a);
	Date& operator-=(int a);

	bool operator<(Date b);
	bool operator>(Date b);
	bool operator<=(Date b);
	bool operator>=(Date b);
	bool operator==(Date b);
	bool operator!=(Date b);
};
