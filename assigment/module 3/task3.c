/* Q:Write a program that stores your favorite Spotify playlist's name (string), total number of songs (int), 
   and average song duration in minutes (float). Print all values in a single formatted sentence.
   A:*/
   #include<stdio.h>
   int main(){
    char *playlist="lofisongs";
    int numberofsongs=82;
    float avg_time=362.89f;
    printf("Playlist Name=%s,No. of songs=%d,Avg. play time=%.2f",playlist,numberofsongs,avg_time);
    return 0;
   }
