#include <stdio.h>

void swapPlaylistCounts(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int playlist1 = 45;
    int playlist2 = 80;
    printf("\nBefore Swapping:");
    printf("\nPlaylist 1: %d songs", playlist1);
    printf("\nPlaylist 2: %d songs\n", playlist2);
    swapPlaylistCounts(&playlist1, &playlist2);
    printf("After Swapping:\n");
    printf("Playlist 1: %d songs\n", playlist1);
    printf("Playlist 2: %d songs\n", playlist2);
    return 0;
}