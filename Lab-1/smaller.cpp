/*
Author: Kevin Li
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab1A

Outputs the smaller of 2 inputted numbers
*/

#include <iostream>
using namespace std;

int main(void) {
    int input1;
    int input2;

    cout << "Enter the first number: ";
    cin >> input1;
    cout << "Enter the second number: ";
    cin >> input2;

    if (input1 < input2) {
    cout << "The smaller of the two is " << input1;
    } else {
    cout << "The smaller of the two is " << input2;
    }

    return 0;
};
