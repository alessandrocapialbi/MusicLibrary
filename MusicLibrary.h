//
// Created by aless on 31/08/2021.
//

#ifndef MUSICLIBRARYWITHMAP_MUSICLIBRARY_H
#define MUSICLIBRARYWITHMAP_MUSICLIBRARY_H

#include "Playlist.h"
#include <map>

using namespace std;

class MusicLibrary {
public:

    MusicLibrary() {};

    void addPlaylist(Playlist &p) {
        pair<string, Playlist> elem = {p.getTitle(), p};
        musicLibrary.insert(elem);
    }

    void editPlaylist(Playlist &p) {
        map<string, Playlist>::iterator it;
        it = musicLibrary.find(p.getTitle());
        if (it != musicLibrary.end()) {
            it->second = p;
        }
    }

    bool findPlaylist(string title) {
        map<string, Playlist>::iterator p;
        p = musicLibrary.find(title);
        if (p != musicLibrary.end()) {
            return true;
        }
        return false;
    }

    void play(string title) {
        map<string, Playlist>::iterator it;
        it = musicLibrary.find(title);
        if (it != musicLibrary.end()) {
            it->second.play();
        }
    }


private:
    map<string, Playlist> musicLibrary;

};

#endif //MUSICLIBRARYWITHMAP_MUSICLIBRARY_H
