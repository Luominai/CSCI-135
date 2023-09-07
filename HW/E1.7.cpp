/*
Author: Kevin Li
Course: CSCI-135
Instructor: Tong Yi
Assignment: E1.7

Enter 3 names and prints them each, one in each line
*/
# include <iostream>
using namespace std;

int main(void) {
    string name1;
    string name2;
    string name3;

    cout << "Enter a name: ";
    cin >> name1;
    cout << "Enter a second name: ";
    cin >> name2;
    cout << "Enter a third name: ";
    cin >> name3;

    cout << name1 << endl << name2 << endl << name3 << endl;
}