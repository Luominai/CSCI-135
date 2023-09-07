/*
Author: Kevin Li
Course: CSCI-135
Instructor: Tong Yi
Assignment: E3.1

Prints whether a number is positive, negative, or 0
*/
# include <iostream>
using namespace std;

int main(void) {
    int input;
    cout << "Enter a number: ";
    cin >> input;

    string result;
    
    if(input == 0) {
        result = "zero";
    }
    else {
        if(input > 0) {
            result = "positive";
        }
        else{
            if(input < 0) {
                result = "negative";
            }
        }
    }

    cout << result;

    return 0;
}