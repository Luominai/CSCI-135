/*
Author: Kevin Li
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab1B

Outputs the smaller of 3 inputted numbers
*/

#include <iostream>
using namespace std;

int main(void) {
    int input1;
    int input2;
    int input3;

    cout << "Enter the first number: ";
    cin >> input1;
    cout << "Enter the second number: ";
    cin >> input2;
    cout << "Enter the third number: ";
    cin >> input3;

    int min = input1;
    if (input2 < min) {
    min = input2;
    }
    if (input3 < min) {
    min = input3;
    }

    cout << "The smallest of the three is " << input3;

    return 0;
};
