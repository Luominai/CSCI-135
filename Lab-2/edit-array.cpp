/*
Author: Kevin Li
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2C

Provides an interface for the user to edit an array of 10 numbers
*/

// To make
// Autograder happy :D

#include <iostream>
using namespace std;

void printArray(int mydata[]) {

  for (int i = 0; i < 10; i++) {
    cout << mydata[i] << " ";
  }

  cout << endl;
}

void prompt(int mydata[]) {
  int index;
  int value;
  printArray(mydata);

  cout << "Input index: ";
  cin >> index;
  cout << "Input value: ";
  cin >> value;

  if (index >= 0 && index < 10) {
    mydata[index] = value;
    prompt(mydata);
  } else {
    cout << "Index out of range. Exit.";
  }
}

int main(void) {
  int mydata[10];
  for(int i = 0; i < 10; i++) {
    mydata[i] = 1;
  }

  prompt(mydata);

  return 0;
}
