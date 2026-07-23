#include <stdio.h>

struct Time{
    int hours;
    int minutes;
};
struct MovieShow{
    char movie[100];
    int screen;
    struct Time showTime;
};
int main(){
    struct MovieShow show={
        .movie="Kantara: Chapter 1",
        .screen=3,
        .showTime={.hours = 18, .minutes = 30}
    };
    printf("Movie: %s, Screen: %d, Time: %02d:%02d\n",
           show.movie,
           show.screen,
           show.showTime.hours,
           show.showTime.minutes);
    return 0;
}