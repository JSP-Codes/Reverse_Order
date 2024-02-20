// Attached: HW1_c
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

#include "Song.h"

using namespace std;

int main() {
    Song yourSong;
    Song anotherSong("All of Me", "Billie Holliday");

    cout << "Your Song: " << yourSong.getTitle() << " by " << yourSong.getArtist() << endl;
    cout << "Another Song: " << anotherSong.getTitle() << " by " << anotherSong.getArtist() << endl;

    cout << "\nEnter information about your song:" << endl;
    cout << "Title: ";
    string title;
    getline(cin, title);
    yourSong.setTitle(title);

    cout << "Artist: ";
    string artist;
    getline(cin, artist);
    yourSong.setArtist(artist);

    cout << "\nYour Song: " << yourSong.getTitle() << " by " << yourSong.getArtist() << endl;

    return 0;
}