#include "dayType.h"

void dayType::setDay(string input) {
	currentDay = input;
}

void dayType::printDay()  const {
	cout << currentDay;
}

string dayType::getDay() const {
	return currentDay;
}

string dayType::getNextDay()  const {
	for (int i = 0; i < 7; i++) {
		if (currentDay == daysOfWeek[i]) { // to prevent going out of bounds
			if (i == 6) {
				return daysOfWeek[0];
			}
			else { //
				return daysOfWeek[i + 1];
			}
		}
	}
}

string dayType::getPreviousDay()  const {
	for (int i = 0; i < 7; i++) {
		if (currentDay == daysOfWeek[i]) {  // to prevent going out of bounds
			if (i == 0) {
				return daysOfWeek[6];
			}
			else {
				return daysOfWeek[i - 1];
			}
		}
	}
}

string dayType::calculateDay(int numberOfDays)  const {
	int dayPointer;
	for (int i = 0; i < 7; i++) {
		if (currentDay == daysOfWeek[i]) {
			dayPointer = i;
		}
	}
	int newDay = dayPointer + numberOfDays;

	int newDayPointer;

	if (newDay > 0) {
		newDayPointer = newDay % 7;
	}
	else {
		newDayPointer = (newDay % 7) + 7;
	}
	
	return daysOfWeek[newDayPointer];
}