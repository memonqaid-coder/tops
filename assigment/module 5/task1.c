#include <stdio.h>
#include <string.h>
int main()
{
    char teaminput[100];
    printf("\nWELCOME TO FANBOT");
    printf("\nEnter your team: ");
    fgets(teaminput, sizeof(teaminput), stdin);
    teaminput[strcspn(teaminput,"\n")]='\0';
    printf("\n__BOT RESPONSE__");
    if (strcmp(teaminput, "MI") == 0 ||strcmp(teaminput, "Mumbai Indians") == 0){
        printf("\n5 times champian");
    } else if (strcmp(teaminput, "CSK") == 0 ||strcmp(teaminput, "Chennai Super Kings") == 0){
        printf("\nDefend the fortress");
    } else if (strcmp(teaminput,"KKR")==0||strcmp(teaminput,"Kolkata Knight Riders")==0){
        printf("\nTo the last ball");
    } else if (strcmp(teaminput,"RCB")==0||strcmp(teaminput,"Royal Challengers Bengaluru")==0){
        printf("\nFierce loyality");
    } else if (strcmp(teaminput,"GT")==0||strcmp(teaminput,"Gujarat Titans")==0){
        printf("\nGrit,Glory");
    } else if (strcmp(teaminput,"RR")==0||strcmp(teaminput,"Rajasthan Royals")==0){
        printf("\nRoyalty in our blood");
    } else if (strcmp(teaminput,"SRH")==0||strcmp(teaminput,"Sunrisers Hydrabad")==0){
        printf("\nunlish the fire");
    } else if (strcmp(teaminput,"DC")==0||strcmp(teaminput,"Delhi Capitals")==0){
        printf("\nYoung blood");
    }else if (strcmp(teaminput,"PBKS")==0||strcmp(teaminput,"Punjab Kings")==0){
        printf("\nPure passion,Zero fear.Sadda Punjab,fly high");
    } else if (strcmp(teaminput,"LSG")==0||strcmp(teaminput,"Lucknow Super Giants")==0){
        printf("\nCricket royalty with a Gazab Andaz.Super giants all the way");
    } else{
        printf("\nYour team not found,put IPL teams only!!!\n");
    }
    return 0;
}