//
// Created by aless on 31/08/2021.
//

#ifndef MUSICLIBRARYWITHMAP_AUDIOTRACK_H
#define MUSICLIBRARYWITHMAP_AUDIOTRACK_H

#include <string>

using namespace std;


class AudioTrack {
public:

    AudioTrack(string t, string img, int l) : title(t), coverImg(img), length(l){};
    ~AudioTrack(){};
    void play() {
        cout << "I'm playing... \"" << this->getTitle() <<"\""<< endl <<endl;
    }
    string getTitle() const{
        return title;
    }
private:
    string title, coverImg;
    int length;


};

#endif //MUSICLIBRARYWITHMAP_AUDIOTRACK_H
