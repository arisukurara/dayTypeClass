#pragma once
#include <iostream>

using namespace std;

class dayType {

public:
	void setDay(string input);
	void printDay()  const;
	string getDay() const;
	string getNextDay()  const;
	string getPreviousDay()  const;
	string calculateDay(int numberOfDays)  const;
private:
	string currentDay;
	const string DAYS[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

};

