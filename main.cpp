#include <iostream>
#include "AudioTrack.h"
#include "Playlist.h"
#include "MusicLibrary.h"
using namespace std;

int main() {
    /*
    map<string, int> m;
    m.insert( make_pair("Wallace", 9999) );
    m.insert( make_pair("Gromit",  3343) );
    map<string, int>::iterator p;
    p = m.find("Wallace");
    if( p != m.end() )
        cout << "Wallace's extension is: " << p->second << endl;
    else
    cout << "Key not found." << endl;
    m["Wallace"] = 1679;
    cout << "New value is: " << m["Wallace"] << endl;
     */
    auto track1 = AudioTrack("Sonata 1", "cover.png", 180);
    auto track2 = AudioTrack("Sonata 2", "cover2.png", 120);
    auto track3 = AudioTrack("Sonata 3", "cover3.png", 210);
    auto playlist1 = Playlist("Beethoven Mix", true);
    playlist1.addTrack(track1);
    playlist1.addTrack(track2);
    playlist1.addTrack(track3);
    playlist1.showSongs();
    cout<<endl<<endl;
    auto musicLibrary = MusicLibrary();
    musicLibrary.addPlaylist(playlist1);
    playlist1.playTrack("Sonata 2");
    playlist1.removeTrack("Sonata 1");
    playlist1.showSongs();
    musicLibrary.editPlaylist(playlist1);
    cout<<endl<<endl;
    playlist1.play();
    cout<<endl<<musicLibrary.findPlaylist("Beethoven Mix");
    cout<<endl<<endl;
    musicLibrary.play("Beethoven Mix");
}
