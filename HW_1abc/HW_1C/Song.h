#ifndef SONG_H
#define SONG_H
#include <iostream>
#include <string>

using namespace std;

class Song {
    public:
    Song();
    Song (string title, string artist);

    ~Song();

    string getTitle() const;
    string getArtist() const;

    void setTitle(string title);
    void setArtist(string artist);
    private:
    string title;
    string artist;
};
#endif