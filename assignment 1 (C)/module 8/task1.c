#include <stdio.h>
#include <ctype.h>
#include <string.h>

void getUserInitials(const char *fullName, char *initials) {
    int i = 0;
    int j = 0;
    int isNewWord = 1;
    while (fullName[i] != '\0') {
        if (fullName[i] != ' ' && isNewWord) {
            initials[j++] = toupper((unsigned char)fullName[i]);
            isNewWord = 0;
        }else if (fullName[i] == ' ') {
            isNewWord = 1;
        }i++;
    }
    initials[j] = '\n';
}
int main() {
    char fullName[] = "Qaid Memon";
    char initials[10];
    getUserInitials(fullName, initials);
    printf("\nFull Name: %s", fullName);
    printf("\nInitials: %s", initials);
    return 0;
}