#include <stdio.h>

int main(){
    float playlistRatings[3][5]={
        {4.2, 4.5, 4.3, 4.6, 4.8},
        {3.8, 4.0, 4.1, 4.5, 4.7},
        {4.9, 4.8, 4.7, 4.9, 5.0}
    };
    char days[5][10]={"Day 1", "Day 2", "Day 3", "Day 4", "Day 5"};
    printf("=== Ratings for Second Playlist (Bollywood Hits) ===\n");
    for (int col = 0; col < 5; col++){
        printf("%s: %.1f\n", days[col], playlistRatings[1][col]);
    }
    return 0;
}