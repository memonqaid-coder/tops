#include <stdio.h>

void incrementFollowers(int *followers, int n){
    for (int i = 0; i < n; i++){
        *(followers + i) += 100;
    }
}
int main(){
    int n = 5;
    int instagramFollowers[5] = {250, 1200, 480, 890, 1500};
    printf("Original Follower Counts:\n");
    for (int i = 0; i < n; i++){
        printf("Friend %d: %d\n", i + 1, instagramFollowers[i]);
    }
    incrementFollowers(instagramFollowers, n);
    printf("\nUpdated Follower Counts (+100):\n");
    for (int i = 0; i < n; i++){
        printf("Friend %d: %d\n", i + 1, instagramFollowers[i]);
    }
    return 0;
}