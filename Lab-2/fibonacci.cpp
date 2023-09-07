/*
Author: Kevin Li
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2D

Prints first 60 numbers in the fibonacci sequence
*/

#include <iostream>
using namespace std;

int main(void) {
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i < 60; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    for(int i = 0; i < 60; i++) {
        cout << fib[i] << endl;
    }

    return 0;
}

/*
The sequence breaks around 2 billion, with some negative numbers being printed 
probably because the numbers exceed the integer bit limit and numbers turn negative
*/