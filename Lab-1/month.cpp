/*
Author: Kevin Li
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab1D

Gets the number of days in a given month in a given year
*/

#include <iostream>
using namespace std;

bool isLeapYear(int year) {

    bool isLeapYear = false;

    if ((year % 4 == 0) && (year % 100 != 0)) {
        isLeapYear = true;
    }

    if (year % 400 == 0) {
        isLeapYear = true;
    }

    return isLeapYear;
};

int main(void) {
    int year;
    int month;

    cout << "Enter year: ";
    cin >> year;

    cout << "Enter month: ";
    cin >> month;

    int days;

    if (month == 1) {
        days = 31;
    }
    if (month == 2) {
        if (isLeapYear(year)) {
            days = 29;
        } 
        else {
            days = 28;
        }
    }
    if (month == 3) {
        days = 31;
    }
    if (month == 4) {
        days = 30;
    }
    if (month == 5) {
        days = 31;
    }
    if (month == 6) {
        days = 30;
    }
    if (month == 7) {
        days = 31;
    }
    if (month == 8) {
        days = 31;
    }
    if (month == 9) {
        days = 30;
    }
    if (month == 10) {
        days = 31;
    }
    if (month == 11) {
        days = 30;
    }
    if (month == 12) {
        days = 31;
    }

    cout << days << " days";


    return 0;
}
