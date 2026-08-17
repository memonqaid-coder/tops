#include <stdio.h>

void increaseFollowersByValue(int followers) {
    followers += 1000;
    printf("\n[Inside increaseFollowersByValue] followers = %d", followers);
}
void increaseFollowersByReference(int *followers){
    *followers += 1000;
    printf("\n[Inside increaseFollowersByReference] followers = %d", *followers);
}
int main() {
    int followers = 5000;
    printf("\nInitial followers count: %d", followers);
    printf("\n--- Testing Pass-by-Value ---");
    increaseFollowersByValue(followers);
    printf("\nOriginal followers count after pass-by-value: %d", followers);
    printf("\n--- Testing Pass-by-Reference ---");
    increaseFollowersByReference(&followers);
    printf("\nOriginal followers count after pass-by-reference: %d\n", followers);
    return 0;
}