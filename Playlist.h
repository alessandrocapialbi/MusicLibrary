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

    ~Playlist() {};

    void addTrack(AudioTrack &track) {
        playlist.insert(make_pair(track.getTitle(), track));
    }

    void removeTrack(string title) {
        map<string, AudioTrack>::iterator it;
        it = playlist.find(title);
        if (it!=playlist.end()){
            playlist.erase(it);
        }
        }


    void playTrack(string title) {
        map<string, AudioTrack>::iterator it;
        it = playlist.find(title);
        if (it != playlist.end()) {
            it->second.play();
        }

    }

    void play() const {
        for (auto i: playlist) {
            i.second.play();
        }
    }

    void showSongs() {
        for (auto i: playlist) {
            cout << i.first << endl << endl;
        }
    }

    string getTitle() const {
        return title;
    }

private:
    map <string, AudioTrack> playlist;
    string title;
    bool loop;
};

#endif //MUSICLIBRARYWITHMAP_PLAYLIST_H
