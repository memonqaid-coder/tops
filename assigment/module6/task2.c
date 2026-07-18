#include<stdio.h>
#include<string.h>
int main(){
    char favoriteteams[10][40]={
        "mumbai indains",
        "chennai super king",
        "royal challengers benguluru"
    };
    int teamcount=3;
    int userchoice;
    while(userchoice!=3){
        printf("\n\n__IPL Team Manager__");
        printf("\n1:-View your favorite IPL Teams");
        printf("\n2:-Add new team");
        printf("\n3:-EXIT");
        printf("\n Enter your choice: ");
        scanf("\n%d",&userchoice);
        while(getchar()!='\n');
        if(userchoice==1){
            printf("\nYour favorite listed teams");
            for (int i = 0; i < 10&& i<teamcount;i++){
                printf("\n%d:-%s",i+1,favoriteteams[i]);
            }
        }else if (userchoice==2)
        {
           if (teamcount<10)
           {
            printf("\nEnter your new IPL team to add:");
            fgets(favoriteteams[teamcount],50,stdin);
            favoriteteams[teamcount]
            [strcspn(favoriteteams[teamcount],"\n")]=0;
            printf("\n%s has been successfully added to your list",favoriteteams[teamcount]);
            teamcount++;
           }else{
            printf("\n Your Team List Is Full\n");
           }
        }else if(userchoice==3){
            printf("\nWE ARE NOW EXITING!\nTHANK YOU");
        }else{
            printf("\nINVALID CHOICE!!\nENTER VALID CHOICE\nNOTE:CHOICE MUST BE BETWEEN 1 TO 3\n");
        }
    }
    return 0;
}