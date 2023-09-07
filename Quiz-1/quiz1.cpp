/*
Author: Kevin Li
Course: CSCI-136
Instructor: Melissa Lynch
Assignment: Quiz1

Prints "I love C++" a specified number of times
*/

#include <iostream>
using namespace std;

int main(void) {
  int input;
  cout << "Input a number: ";
  cin >> input;

  for (int i = 0; i < input; i++) {
    cout << "I love C++" << endl;
  }

  return 0;
}