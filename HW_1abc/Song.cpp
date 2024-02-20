#include <iostream>
#include <string>

#include "Song.h"

using namespace std;

Song::Song() {
        title = "";
        artist = "";
    }
Song::Song (string title, string artist) {
        this->title = title;
        this->artist = artist;
    }
Song::~Song() {
    }
string Song::getTitle() const {
        return title;
    }
string Song::getArtist() const {
    return artist;
    }
void Song::setTitle(string title) {
        this->title = title;
    }
void Song::setArtist(string artist) {
        this->artist = artist;
    }