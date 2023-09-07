/*
Author: Kevin Li
Course: CSCI-135
Instructor: Tong Yi
Assignment: E3.5

Enter 3 numbers and prints if the sequence is increasing, decreasing, or neither
*/
# include <iostream>
using namespace std;

int main(void) {
    int input1;
    int input2;
    int input3;

    cout << "Enter a number: ";
    cin >> input1;
    cout << "Enter a second number: ";
    cin >> input2;
    cout << "Enter a third number: ";
    cin >> input3;

    string result = "neither";
    if(input3 > input2 && input2 > input1) {
        result = "increasing";
    }
    else {
        if (input3 < input2 && input2 < input1) {
            result = "decreasing";
        }
    }

    cout << result;
}