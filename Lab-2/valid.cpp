/*
Author: Kevin Li
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2A

Chekcs if an integer is in a certain interval, and then returns the number squared
*/
#include <iostream>
using namespace std;

int main(void) {
    int input;
    cout << "Please enter an integer: ";
    cin >> input;

    while (input <= 0 || input >= 100) {
        cout << "Please re-enter: ";
        cin >> input;
    }

    cout << "Number squared is " << (input * input);
    return 0;
}