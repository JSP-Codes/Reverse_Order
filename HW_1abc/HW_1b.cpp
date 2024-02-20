// Attached: HW1_b
//
// ================================
// File HW-1abc
// ================================
// Programmer: Josh Prescott
// Class: CMPR 131
// ================================

#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int main() {
    char firstAndMiddle[20];
    char lastName[20];
    char fullName[40];
    string friendsName;

    cout << "Enter your first and middle names: ";
    cin.getline(firstAndMiddle, 20);

    cout << "Enter your last name: ";
    cin.getline(lastName, 20);

    strcpy(fullName, firstAndMiddle);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    cout << "How is your love life " << firstAndMiddle << " " << lastName << "?" << endl;
    cout << "By the way, your full name has " << strlen(fullName) << " characters." << endl;

    cout << "Enter your friend's full name: ";
    getline(cin, friendsName);

    cout << "How is " << friendsName << " love life " << firstAndMiddle  << "?" << endl;
    cout << "By the way, your friend's full name has " << friendsName.length() << " characters." << endl;

    cout << endl << "Press and key to continue... ";
    return 0;
}
