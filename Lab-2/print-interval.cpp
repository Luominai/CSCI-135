/*
Author: Kevin Li
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2B

Checks if an integer is in a certain interval, and then returns the number squared
*/
#include <iostream>
using namespace std;

int main(void) {
    int lower;
    int upper;

    cout << "Please enter L: ";
    cin >> lower;
    cout << "Please enter U: ";
    cin >> upper;

    for(int i = lower; i < upper; i++) {
        cout << i << " ";
    }

    return 0;
}