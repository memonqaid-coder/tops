#include<stdio.h>
#include<string.h>
int main(){
  char userchoice[20];
do {
  printf("\nGuess the Song Game\nEnter your song here:");
  scanf("%s", userchoice);
} while (strcmp(userchoice,"slava")!=0||strcmp(userchoice,"kohinoor")!=0||strcmp(userchoice,"saiyaara")!=0);
printf("\nYou Guess the Right Song!\nYOU WIN!!! ");

return 0;
}