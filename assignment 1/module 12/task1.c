#include <stdio.h>
#include <string.h>

struct Playlist{
    char title[100];
    char artist[100];
    int duration;
};
int main(){
    struct Playlist favoriteSong={
        .title = "Kesariya",
        .artist = "Arijit Singh",
        .duration = 268
    };
    int minutes = favoriteSong.duration / 60;
    int seconds = favoriteSong.duration % 60;
    printf("**Favorite Song Details**\n");
    printf("Title: %s\n", favoriteSong.title);
    printf("Artist: %s\n", favoriteSong.artist);
    printf("Duration: %d seconds (%d:%02d mins)\n", 
           favoriteSong.duration, minutes, seconds);
    return 0;
}