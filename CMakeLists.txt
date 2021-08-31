cmake_minimum_required(VERSION 3.20)
project(MusicLibraryWithMap)

set(CMAKE_CXX_STANDARD 14)

add_executable(MusicLibraryWithMap main.cpp AudioTrack.h Playlist.h MusicLibrary.h)
