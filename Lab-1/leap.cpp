/*
Author: Kevin Li
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab1C

Determines if the inputted year is a leap year
*/

#include <iostream>
using namespace std;

int main(void) {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    bool isLeapYear = false;

    if ((year % 4 == 0) && (year % 100 != 0)) {
        isLeapYear = true;
    }

    if (year % 400 == 0) {
        isLeapYear = true;
    }

    if (isLeapYear) {
        cout << "Leap year";
    }
    else {
        cout << "Common year";
    }


    return 0;
};