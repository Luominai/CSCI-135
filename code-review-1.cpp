/*
Author: Kevin Li
Course: CSCI-135
Instructor: Melissa Lynch
Assignment: Code Review 1

declare 3 numbers and check if c is between a and b
*/

# include <iostream>
using namespace std;

int main(void) {
    int a;
    int b;
    int c;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;

    if ( (c > a && c < b) || (c < a && c > b) ) {
        cout << "c is between a and b";
    }
    else {
        cout << "c is not between a and b";
    }

}