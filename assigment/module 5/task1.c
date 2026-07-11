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
    if (strcspn(teaminput, "MI") == 0 ||strcspn(teaminput, "Mumbai Indians") == 0) {
        printf("\n5 times champian");
    } else if (strcspn(teaminput, "CSK") == 0 ||strcspn(teaminput, "Chennai Super Kings") == 0) {
        printf("\nDefend the fortress");
    } else if (strcspn(teaminput,"KKR")==0||strcspn(teaminput,"Kolkata Knight Riders")){
        printf("\nTo the last ball");
    } else if (strcspn(teaminput,"RCB")==0||strcspn(teaminput,"Royal Challengers Bengaluru")==0){
        printf("\nFierce loyality");
    } else if (strcspn(teaminput,"GT")==0||strcspn(teaminput,"Gujarat Titans")==0){
        printf("\nGrit,Glory");
    } else if (strcspn(teaminput,"RR")==0||strcspn(teaminput,"Rajasthan Royals")==0){
        printf("\nRoyalty in our blood");
    } else if (strcspn(teaminput,"SRH")==0||strcspn(teaminput,"Sunrisers Hydrabad")==0){
        printf("\nunlish the fire");
    } else if (strcspn(teaminput,"DC")==0||strcspn(teaminput,"Delhi Capitals")==0){
        printf("\nYoung blood");
    }else if (strcspn(teaminput,"PBKS")==0||strcspn(teaminput,"Punjab Kings")==0){
        printf("\nPure passion,Zero fear.Sadda Punjab,fly high");
    } else if (strcspn(teaminput,"LSG")==0||strcspn(teaminput,"Lucknow Super Giants")==0){
        printf("\nCricket royalty with a Gazab Andaz.Super giants all the way");
    } else{
        printf("\nYour team not found,put IPL teams only!!!");
    }
    return 0;
}