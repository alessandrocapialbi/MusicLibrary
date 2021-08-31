//
// Created by aless on 31/08/2021.
//

#ifndef MUSICLIBRARYWITHMAP_MUSICLIBRARY_H
#define MUSICLIBRARYWITHMAP_MUSICLIBRARY_H

#include "Playlist.h"
#include <map>
using namespace std;

class MusicLibrary{
public:

    MusicLibrary(){};
    void addPlaylist(Playlist& p){
        pair<string, Playlist> elem = {p.getTitle(), p };
        musicLibrary.insert(elem);
    }
    bool findPlaylist(string title){
        for (auto i : musicLibrary){
            if (musicLibrary.find(title) != musicLibrary.end())
                return true;
            return false;
        }
    }
    void play(string title){
        for (auto i : musicLibrary){
            if (musicLibrary.find(title) != musicLibrary.end())
                i.second.play();
        }
    }


private:
    map<string, Playlist> musicLibrary;

};
#endif //MUSICLIBRARYWITHMAP_MUSICLIBRARY_H
