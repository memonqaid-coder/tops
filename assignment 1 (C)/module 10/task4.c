#include <stdio.h>
#include <string.h>

int main(){
    char fullName[100];
    char username[6];
    printf("Enter your full name: ");
    if (fgets(fullName, sizeof(fullName), stdin)){
        fullName[strcspn(fullName, "\n")] = '\0';
    }
    strncpy(username, fullName, 5);
    username[5];
    printf("Generated Username: %s\n", username);
    return 0;
}