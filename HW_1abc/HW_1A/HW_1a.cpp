// Attached: HW1_a
//
// ================================
// File HW-1abc
// ================================
// Programmer: Josh Prescott
// Class: CMPR 131
// ================================

#include <iostream>
#include <string>

using namespace std;

void getCities(string cities[]);
char getChoice();
void displayInOrder(const string cities[]);
void displayInReverse(const string cities[]);

int main() {
    string cities[5];
    getCities(cities);
    char choice = getChoice();

    switch (choice)
    {
    case 'O':
    case 'o':
        displayInOrder(cities);
        break;
    case 'R':
    case 'r':
        displayInReverse(cities);
        break;
    default:
        cout << "Invalid entry - Must be O or R!" << endl;
        break;
    }
    return 0;
}

void getCities(string cities[]) {
    cout << "Enter 5 cities: " << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "City " << i + 1 << ": ";
        getline(cin, cities[i]);
    }
}
char getChoice() {
    char choice;
    cout << "Enter O for in order, or R for in reverse: ";
    cin >> choice;
    cin.ignore();
    return choice;
}
void displayInOrder(const string cities[]) {
    cout << "Cities in order: " << endl;
    for (int i = 0; i < 5; ++i) {
        cout << cities[i] << endl;
    }
}
void displayInReverse(const string cities[]) {
    cout << "Cities in reverse order: " << endl;
    for (int i = 4; i >= 0; --i) {
        cout << cities[i] << endl;
    }
}