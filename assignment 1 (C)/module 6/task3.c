#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>

int main() {
  srand (time(NULL));
    const char *songs[] = {"Saiyaara", "Sunumre", "Blue Eyes"};
    int num_songs = sizeof(songs) / sizeof(songs[0]);
    int random_index = rand() % num_songs;
    const char *secret_song = songs[random_index];
    char user_guess[50];
    printf("=== Guess the Song Game ===\n");
    printf("\nAvailable Songs: Saiyaara, Sunumre, Blue Eyes\n");
    do {
        printf("Enter your guess: ");
        fgets(user_guess, sizeof(user_guess), stdin);
        user_guess[strcspn(user_guess, "\n")] = 0;
        if (strcasecmp(user_guess, secret_song) != 0) {
            printf("\n Incorrect! Try again.");
        }
    } while (strcasecmp(user_guess, secret_song) != 0);
    printf("\n Correct! You guessed the song: %s", secret_song);
    return 0;
}