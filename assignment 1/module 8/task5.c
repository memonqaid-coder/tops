#include <stdio.h>
#include <ctype.h>
#include <string.h>

void capitalizeWords(const char *inputStr, char *outputStr){
    int i = 0;
    int isNewWord = 1;
    while (inputStr[i] != '\0'){
        if (isspace((unsigned char)inputStr[i])){
            outputStr[i] = inputStr[i];
            isNewWord = 1;
        } else if (isNewWord){
            outputStr[i] = toupper((unsigned char)inputStr[i]);
            isNewWord = 0;
        } else{
            outputStr[i] = tolower((unsigned char)inputStr[i]);
        }i++;
    }outputStr[i] = '\0';
}

int main(){
    char rawUser[] = "qaid memon";
    char User[50];
    capitalizeWords(rawUser, User);
    printf("Formatted Username: %s -> %s\n", rawUser, User);
    char rawProduct[] = "wireless bluetooth headphones";
    char formattedProduct[50];
    capitalizeWords(rawProduct, formattedProduct);
    printf("Formatted Product:  %s -> %s\n", rawProduct, formattedProduct);
    char rawTitle[] = "top 10 ipl moments";
    char formattedTitle[50];
    capitalizeWords(rawTitle, formattedTitle);
    printf("Formatted Title:    %s -> %s\n", rawTitle, formattedTitle);
    return 0;
}