// dayTypeClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "dayType.h"
using namespace std;

int main()
{
    cout << "Enter day: ";
    string day;
    cin >> day;
    dayType dayFunc;
    dayFunc.setDay(day);
    cout << endl << "Current: " << dayFunc.getDay() << endl;
    cout << "Next: " << dayFunc.getNextDay() << endl;
    cout << "Previous: " << dayFunc.getPreviousDay() << endl;
    cout << "5 Days ago from "<< dayFunc.getDay() << ": " << dayFunc.calculateDay(-5) << endl;
    cout << "5 Days from " << dayFunc.getDay() << ": " << dayFunc.calculateDay(5) << endl;
}

