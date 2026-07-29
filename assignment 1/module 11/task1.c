#include <stdio.h>

int main(){
    int likes = 1250;
    int *ptrLikes = &likes;
    printf("\nValue of likes (via ptrLikes): %d", *ptrLikes);
    printf("\nMemory address stored in ptrLikes: %p\n", (void*)ptrLikes);
    return 0;
}