//
// Created by aless on 31/08/2021.
//

#ifndef MUSICLIBRARYWITHMAP_PLAYLIST_H
#define MUSICLIBRARYWITHMAP_PLAYLIST_H

#include "AudioTrack.h"
#include <map>

class Playlist {
public:
    Playlist(string t, bool loop) : title(t), loop(loop) {};

    ~Playlist(){};

    void addTrack(AudioTrack &track) {
        pair<string, AudioTrack> elem = {track.getTitle(), track};
        playlist.insert(elem);
    }

    void removeTrack(string title) {
        for (auto i: playlist) {
            if (playlist.find(title) != playlist.end())
                playlist.erase(title);
        }
    }

    void playTrack(string title) {
        for (auto i: playlist) {
            if (i.first == title)
                i.second.play();

        }
    }

    void play() const {
        for (auto i: playlist) {
            i.second.play();
        }
    }

    void showSongs(){
        for (auto i : playlist){
            cout<<i.first<<endl<<endl;
        }
    }

    string getTitle() const{
        return title;
    }

private:
    map<string, AudioTrack> playlist;
    string title;
    bool loop;
};

#endif //MUSICLIBRARYWITHMAP_PLAYLIST_H
