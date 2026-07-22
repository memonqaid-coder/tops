#include <stdio.h>
#include <string.h>

int main(){
    char username1[50];
    char username2[50];
    printf("Enter first username: ");
    scanf("%s", username1);
    printf("Enter second username: ");
    scanf("%s", username2);
    if (strcmp(username1, username2) == 0){
        printf("\nResult: The usernames are the SAME.");
    }else{
        printf("\nResult: The usernames are DIFFERENT.");
    }
    return 0;
}